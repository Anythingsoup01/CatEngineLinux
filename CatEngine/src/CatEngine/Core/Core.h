#pragma once
#include <memory>

#include <signal.h>
#define CE_DEBUGBREAK() raise(SIGTRAP)

#define BIND_EVENT_FN(fn) [this](auto&&... args) -> decltype(auto) { return this->fn(std::forward<decltype(args)>(args)...); }

#define BIT(x) (1 << x)

namespace CatEngine
{
        template<typename T>
        using Scope = std::unique_ptr<T>;
        template<typename T, typename ... Args>
        constexpr Scope<T> CreateScope(Args&& ... args)
        {
                return std::make_unique<T>(std::forward<Args>(args)...);
        }

        template<typename T>
        using Ref = std::shared_ptr<T>;
        template<typename T, typename ... Args>
        constexpr Ref<T> CreateRef(Args&& ... args)
        { 
                return std::make_shared<T>(std::forward<Args>(args)...);
        }
 

}

