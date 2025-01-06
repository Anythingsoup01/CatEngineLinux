#pragma once
#include "Core.h"

#pragma warning(push, 0)
#include <spdlog/spdlog.h>
#pragma warning(pop)

namespace CatEngine
{
        class Log
        {
        public:
                static void Init();

                inline static Ref<spdlog::logger>& GetAPILogger() { return s_APILogger; }
                inline static Ref<spdlog::logger>& GetCLILogger() { return s_CLILogger; }
        private:
                static Ref<spdlog::logger> s_APILogger;
                static Ref<spdlog::logger> s_CLILogger;
        };
}

#define CE_API_CRITICAL(...) ::CatEngine::Log::GetAPILogger()->critical(__VA_ARGS__)
#define CE_API_ERROR(...)    ::CatEngine::Log::GetAPILogger()->error(__VA_ARGS__)
#define CE_API_WARN(...)     ::CatEngine::Log::GetAPILogger()->warn(__VA_ARGS__)
#define CE_API_INFO(...)     ::CatEngine::Log::GetAPILogger()->info(__VA_ARGS__)
#define CE_API_TRACE(...)    ::CatEngine::Log::GetAPILogger()->trace(__VA_ARGS__)
#define CE_API_ASSERT(x, ...) if (!(x)) { ::CatEngine::Log::GetAPILogger()->critical(__VA_ARGS__); raise(SIGTRAP); }

#define CE_CLI_CRITICAL(...) ::CatEngine::Log::GetCLILogger()->critical(__VA_ARGS__)
#define CE_CLI_ERROR(...)    ::CatEngine::Log::GetCLILogger()->error(__VA_ARGS__)
#define CE_CLI_WARN(...)     ::CatEngine::Log::GetCLILogger()->warn(__VA_ARGS__)
#define CE_CLI_INFO(...)     ::CatEngine::Log::GetCLILogger()->info(__VA_ARGS__)
#define CE_CLI_TRACE(...)    ::CatEngine::Log::GetCLILogger()->trace(__VA_ARGS__)

