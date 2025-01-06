#include "cepch.h"
#include "Application.h"

#include "Core/Input.h"

namespace CatEngine
{
	Application* Application::s_Instance = nullptr;

        Application::Application(const ApplicationSpecification& specification)
        	: m_Specification(specification)
	{
		CE_API_ASSERT(!s_Instance, "Application already open!");
		s_Instance = this;

		if (!m_Specification.WorkingDirectory.empty())
			std::filesystem::current_path(m_Specification.WorkingDirectory);

		m_Window = Window::Create(WindowProps(m_Specification.Name));
                m_Window->SetVSync(true);
		m_Window->SetEventCallback(BIND_EVENT_FN(Application::OnEvent));
		
		m_ImGuiLayer = new ImGuiLayer();
		PushOverlay(m_ImGuiLayer);
        }

        Application::~Application()
        {}

        void Application::Run()
        {
                while(m_Running)
                {
			float time = Time::GetTime();
			Time deltaTime = time - m_LastFrameTime;
			m_LastFrameTime = time;
			
			ExecuteMainThreadQueue();

			for (Layer* layer : m_LayerStack)
				layer->OnUpdate(deltaTime);
			
			m_ImGuiLayer->Begin();
			for (Layer* layer : m_LayerStack)
				layer->OnImGuiDraw();
			m_ImGuiLayer->End();

			m_Window->OnUpdate();
                }
        }
        void Application::OnEvent(Event& e)
        {
                EventDispatcher dispatcher(e);
                dispatcher.Dispatch<WindowCloseEvent>(BIND_EVENT_FN(Application::OnWindowClose));
		dispatcher.Dispatch<WindowResizeEvent>(BIND_EVENT_FN(Application::OnWindowResize));
        
		for (auto it = m_LayerStack.rbegin(); it != m_LayerStack.rend(); ++it)
		{
			if (e.Handled)
				break;
			(*it)->OnEvent(e);
		}
	}

	void Application::PushLayer(Layer* layer)
        {
                m_LayerStack.PushLayer(layer);
                layer->OnAttach();
        }

        void Application::PushOverlay(Layer* overlay)
        {
                m_LayerStack.PushOverlay(overlay);
                overlay->OnAttach();
        }

	void Application::SubmitToMainThread(const std::function<void()>& function)
        {

                m_MainThreadQueue.emplace_back(function);
        }
	
	void Application::ExecuteMainThreadQueue()
        {
                std::vector<std::function<void()>> copy;
                {
                        std::scoped_lock<std::mutex> lock(m_MainThreadQueueMutex);
                        copy = m_MainThreadQueue;
                        m_MainThreadQueue.clear();
                }


                for (auto& function : copy)
                        function();
        }


        bool Application::OnWindowClose(WindowCloseEvent& e)
        {
                m_Running = false;
                return true;
        }

	bool Application::OnWindowResize(WindowResizeEvent& e)
        {
                if (e.GetWidth() == 0 || e.GetHeight() == 0)
                {
                        return false;
                }

                //m_Minimized = false;
                //Renderer::OnWindowResize(e.GetWidth(), e.GetHeight());


                return false;
        }



}

