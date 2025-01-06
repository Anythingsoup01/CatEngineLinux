#pragma once

#include "Event/ApplicationEvents.h"
#include "Event/Events.h"

#include "Core.h"
#include "TimeStep.h"
#include "Window.h"

#include "Layers/LayerStack.h"

#include "ImGui/ImGuiLayer.h"

namespace CatEngine
{

	struct ApplicationCommandLineArgs
        {
                int Count = 0;
                char** Args = nullptr;

                const char* operator[](int index) const
                {
                        CE_ASSERT(index < Count);
                        return Args[index];
                }
        };

        struct ApplicationSpecification
        {
                std::string Name = "CatEngine";
                std::string WorkingDirectory;
                ApplicationCommandLineArgs CommandlineArgs;
        };


        class Application
        {       
        public:    
                Application(const ApplicationSpecification& specification);
                ~Application();

		static inline Application& Get() { return *s_Instance; }
		
		inline Window& GetWindow() {return *m_Window; }
		
		ImGuiLayer* GetImGuiLayer() { return m_ImGuiLayer; }

                void Run();
		void OnEvent(Event& e);
		
		void PushLayer(Layer* layer);
		void PushOverlay(Layer* overlay);
		
		void SubmitToMainThread(const std::function<void()>& function);
		void ExecuteMainThreadQueue();
	public:
		inline void CloseEditor() { m_Running = false; }

		const ApplicationSpecification GetSpecification() const { return m_Specification; }

        private:
		ApplicationSpecification m_Specification;
		LayerStack m_LayerStack;

		bool OnWindowResize(WindowResizeEvent& e);
		bool OnWindowClose(WindowCloseEvent& e); // TODO: With ImGui, Make a way to close the application
	private:
		Scope<Window> m_Window;
		ImGuiLayer* m_ImGuiLayer;

		float m_LastFrameTime = 0.f;

		std::vector<std::function<void()>> m_MainThreadQueue;
		std::mutex m_MainThreadQueueMutex;
        private:
		static Application* s_Instance;
        	bool m_Running = true;
	};

        Application* CreateApplication(ApplicationCommandLineArgs args);
}

