#pragma once

#include "Core/Window.h"

#include "GLFW/glfw3.h"

namespace CatEngine {
        class LinuxWindow : public Window
        {
        public:
                LinuxWindow(const WindowProps& props);
                virtual ~LinuxWindow();

                void OnUpdate() override;

                virtual unsigned int GetWidth() const override { return m_Data.Width; }
                virtual unsigned int GetHeight() const override { return m_Data.Height; }

                inline void SetEventCallback(const EventCallbackFn& callback) override { m_Data.EventCallback = callback; }
                void SetVSync(bool enabled) override;
                bool IsVSync() const override;

                virtual void* GetNativeWindow() const override;

        private:
                GLFWwindow* m_Window;
                
		struct WindowData {
                        std::string Title;
                        unsigned int Width, Height;
                        bool VSync;
                        EventCallbackFn EventCallback;
                };

                WindowData m_Data;
        private:
                virtual void Init(const WindowProps& props);
                virtual void Shutdown();
        };

}

