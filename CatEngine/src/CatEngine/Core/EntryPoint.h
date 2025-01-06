#pragma once

extern CatEngine::Application* CatEngine::CreateApplication(CatEngine::ApplicationCommandLineArgs args);

int main(int argc, char** argv)
{
        CatEngine::Log::Init();
        auto app = CatEngine::CreateApplication({argc, argv});
        app->Run();
        delete app;
}

