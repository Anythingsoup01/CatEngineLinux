#include "cepch.h"
#include "Application.h"

#include "Core/Input.h"

namespace CatEngine
{
        Application::Application()
        {
		m_Window = Window::Create(WindowProps());
                m_Window->SetVSync(true);
		m_Window->SetEventCallback(BIND_EVENT_FN(Application::OnEvent));

        }

        Application::~Application()
        {}

        void Application::Run()
        {
                while(m_Running)
                {
			m_Window->OnUpdate(); 
                }
        }
        void Application::OnEvent(Event& e)
        {
                EventDispatcher dispatcher(e);
                dispatcher.Dispatch<KeyPressedEvent>(BIND_EVENT_FN(Application::OnKeyPressed));
        }

	bool Application::OnKeyPressed(KeyPressedEvent& e)
	{
		switch(e.GetKeyCode())
		{
			case KeyCode::D5:
			{
				CE_API_INFO("You have pressed the number 5");
				break;
			}
		}
		return false;
	}

}

