#pragma once

#include "Window.h"

#include "Event/Events.h"
#include "Event/KeyEvents.h"

namespace CatEngine
{
        class Application
        {       
        public:    
                Application();
                ~Application();

                void Run();
		void OnEvent(Event& e);

		bool OnKeyPressed(KeyPressedEvent& e);
        private:
                bool m_Running = true;
		Scope<Window> m_Window;
        private:
        };

        Application* CreateApplication();
}

