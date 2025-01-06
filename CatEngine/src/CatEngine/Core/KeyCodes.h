#pragma once


namespace CatEngine
{

        enum class KeyCode : uint16_t
        {
                // From glfw3.h
                Space              = 32,
                Apostrophe         = 39,  /* ' */
                Comma              = 44,  /* , */
                Minus              = 45,  /* - */
                Period             = 46,  /* . */
                Slash              = 47,  /* / */
                D0                 = 48,
                D1                 = 49,
                D2                 = 50,
                D3                 = 51,
                D4                 = 52,
                D5                 = 53,
                D6                 = 54,
                D7                 = 55,
                D8                 = 56,
                D9                 = 57,
                SEMICOLON          = 59,  /* ; */
                EQUAL              = 61,  /* = */
                A                  = 65,
                B                  = 66,
                C                  = 67,
                D                  = 68,
                E                  = 69,
                F                  = 70,
                G                  = 71,
                H                  = 72,
                I                  = 73,
                J                  = 74,
                K                  = 75,
                L                  = 76,
                M                  = 77,
                N                  = 78,
                O                  = 79,
                P                  = 80,
                Q                  = 81,
                R                  = 82,
                S                  = 83,
                T                  = 84,
                U                  = 85,
                V                  = 86,
                W                  = 87,
                X                  = 88,
                Y                  = 89,
                Z                  = 90,
                LeftBracket       = 91,  /* [ */
                Backslash          = 92,  /* \ */
                RightBracket      = 93,  /* ] */
                GraceAccent       = 96,  /* ` */
                World1            = 161, /* non-US #1 */
                World2            = 162, /* non-US #2 */

/* Function keys */
                Escape             = 256,
                Enter              = 257,
                Tab                = 258,
                Backspace          = 259,
                Insert             = 260,
                Delete             = 261,
                Right              = 262,
                Left               = 263,
                Down               = 264,
                Up                 = 265,
                PageUp            = 266,
                PageDown          = 267,
                Home               = 268,
                End                = 269,
                CapsLock          = 280,
                ScrollLock        = 281,
                NumLock           = 282,
                PrintScreen       = 283,
                Pause              = 284,
                F1                 = 290,
                F2                 = 291,
                F3                 = 292,
                F4                 = 293,
                F5                 = 294,
                F6                 = 295,
                F7                 = 296,
                F8                 = 297,
                F9                 = 298,
                F10                = 299,
                F11                = 300,
                F12                = 301,
                F13                = 302,
                F14                = 303,
                F15                = 304,
                F16                = 305,
                F17                = 306,
                F18                = 307,
                F19                = 308,
                F20                = 309,
                F21                = 310,
                F22                = 311,
                F23                = 312,
                F24                = 313,
                F25                = 314,
                KP_0               = 320,
                KP_1               = 321,
                KP_2               = 322,
                KP_3               = 323,
                KP_4               = 324,
                KP_5               = 325,
                KP_6               = 326,
                KP_7               = 327,
                KP_8               = 328,
                KP_9               = 329,
                KPDecimal          = 330,
                KPDivide           = 331,
                KPMultiply         = 332,
                KPSubtract         = 333,
                KPAdd              = 334,
                KPEnter            = 335,
                KPEqual            = 336,
                LeftShift         = 340,
                LeftControl        = 341,
                LeftAlt            = 342,
                LeftSuper          = 343,
                RightShift        = 344,
                RightControl      = 345,
                RightAlt          = 346,
                RightSuper        = 347,
                Menu               = 348,

                ModShift           = 0x0001,
                ModControl         = 0x0002,
                ModAlt             = 0x0004,
                ModSuper           = 0x0008,
                ModCapsLock       = 0x0010,
                ModNumLock        = 0x0020,

        };

        inline std::ostream& operator<<(std::ostream& os, KeyCode keyCode)
        {
                os << static_cast<uint32_t>(keyCode);
                return os;
        }
}
// From glfw3.h
#define CE_SPACE           ::CatEngine::KeyCode::Space
#define CE_APOSTROPHE      ::CatEngine::KeyCode::Apostrophe    /* ' */
#define CE_COMMA           ::CatEngine::KeyCode::Comma         /* , */
#define CE_MINUS           ::CatEngine::KeyCode::Minus         /* - */
#define CE_PERIOD          ::CatEngine::KeyCode::Period        /* . */
#define CE_SLASH           ::CatEngine::KeyCode::Slash         /* / */
#define CE_0               ::CatEngine::KeyCode::D0
#define CE_1               ::CatEngine::KeyCode::D1
#define CE_2               ::CatEngine::KeyCode::D2
#define CE_3               ::CatEngine::KeyCode::D3
#define CE_4               ::CatEngine::KeyCode::D4
#define CE_5               ::CatEngine::KeyCode::D5
#define CE_6               ::CatEngine::KeyCode::D6
#define CE_7               ::CatEngine::KeyCode::D7
#define CE_8               ::CatEngine::KeyCode::D8
#define CE_9               ::CatEngine::KeyCode::D9
#define CE_SEMICOLON       ::CatEngine::KeyCode::Semicolon     /* ; */
#define CE_EQUAL           ::CatEngine::KeyCode::Equal         /* = */
#define CE_A               ::CatEngine::KeyCode::A
#define CE_B               ::CatEngine::KeyCode::B
#define CE_C               ::CatEngine::KeyCode::C
#define CE_D               ::CatEngine::KeyCode::D
#define CE_E               ::CatEngine::KeyCode::E
#define CE_F               ::CatEngine::KeyCode::F
#define CE_G               ::CatEngine::KeyCode::G
#define CE_H               ::CatEngine::KeyCode::H
#define CE_I               ::CatEngine::KeyCode::I
#define CE_J               ::CatEngine::KeyCode::J
#define CE_K               ::CatEngine::KeyCode::K
#define CE_L               ::CatEngine::KeyCode::L
#define CE_M               ::CatEngine::KeyCode::M
#define CE_N               ::CatEngine::KeyCode::N
#define CE_O               ::CatEngine::KeyCode::O
#define CE_P               ::CatEngine::KeyCode::P
#define CE_Q               ::CatEngine::KeyCode::Q
#define CE_R               ::CatEngine::KeyCode::R
#define CE_S               ::CatEngine::KeyCode::S
#define CE_T               ::CatEngine::KeyCode::T
#define CE_U               ::CatEngine::KeyCode::U
#define CE_V               ::CatEngine::KeyCode::V
#define CE_W               ::CatEngine::KeyCode::W
#define CE_X               ::CatEngine::KeyCode::X
#define CE_Y               ::CatEngine::KeyCode::Y
#define CE_Z               ::CatEngine::KeyCode::Z
#define CE_LEFT_BRACKET    ::CatEngine::KeyCode::LeftBracket   /* [ */
#define CE_BACKSLASH       ::CatEngine::KeyCode::Backslash     /* \ */
#define CE_RIGHT_BRACKET   ::CatEngine::KeyCode::RightBracket  /* ] */
#define CE_GRAVE_ACCENT    ::CatEngine::KeyCode::GraveAccent   /* ` */
#define CE_WORLD_1         ::CatEngine::KeyCode::World1        /* non-US #1 */
#define CE_WORLD_2         ::CatEngine::KeyCode::World2        /* non-US #2 */

/* Function keys */
#define CE_ESCAPE          ::CatEngine::KeyCode::Escape
#define CE_ENTER           ::CatEngine::KeyCode::Enter
#define CE_TAB             ::CatEngine::KeyCode::Tab
#define CE_BACKSPACE       ::CatEngine::KeyCode::Backspace
#define CE_INSERT          ::CatEngine::KeyCode::Insert
#define CE_DELETE          ::CatEngine::KeyCode::Delete
#define CE_RIGHT           ::CatEngine::KeyCode::Right
#define CE_LEFT            ::CatEngine::KeyCode::Left
#define CE_DOWN            ::CatEngine::KeyCode::Down
#define CE_UP              ::CatEngine::KeyCode::Up
#define CE_PAGE_UP         ::CatEngine::KeyCode::PageUp
#define CE_PAGE_DOWN       ::CatEngine::KeyCode::PageDown
#define CE_HOME            ::CatEngine::KeyCode::Home
#define CE_END             ::CatEngine::KeyCode::End
#define CE_CAPS_LOCK       ::CatEngine::KeyCode::CapsLock
#define CE_SCROLL_LOCK     ::CatEngine::KeyCode::ScrollLock
#define CE_NUM_LOCK        ::CatEngine::KeyCode::NumLock
#define CE_PRINT_SCREEN    ::CatEngine::KeyCode::PrintScreen
#define CE_PAUSE           ::CatEngine::KeyCode::Pause
#define CE_F1              ::CatEngine::KeyCode::F1
#define CE_F2              ::CatEngine::KeyCode::F2
#define CE_F3              ::CatEngine::KeyCode::F3
#define CE_F4              ::CatEngine::KeyCode::F4
#define CE_F5              ::CatEngine::KeyCode::F5
#define CE_F6              ::CatEngine::KeyCode::F6
#define CE_F7              ::CatEngine::KeyCode::F7
#define CE_F8              ::CatEngine::KeyCode::F8
#define CE_F9              ::CatEngine::KeyCode::F9
#define CE_F10             ::CatEngine::KeyCode::F10
#define CE_F11             ::CatEngine::KeyCode::F11
#define CE_F12             ::CatEngine::KeyCode::F12
#define CE_F13             ::CatEngine::KeyCode::F13
#define CE_F14             ::CatEngine::KeyCode::F14
#define CE_F15             ::CatEngine::KeyCode::F15
#define CE_F16             ::CatEngine::KeyCode::F16
#define CE_F17             ::CatEngine::KeyCode::F17
#define CE_F18             ::CatEngine::KeyCode::F18
#define CE_F19             ::CatEngine::KeyCode::F19
#define CE_F20             ::CatEngine::KeyCode::F20
#define CE_F21             ::CatEngine::KeyCode::F21
#define CE_F22             ::CatEngine::KeyCode::F22
#define CE_F23             ::CatEngine::KeyCode::F23
#define CE_F24             ::CatEngine::KeyCode::F24
#define CE_F25             ::CatEngine::KeyCode::F25

/* Keypad */
#define CE_KP_0            ::CatEngine::KeyCode::KP0
#define CE_KP_1            ::CatEngine::KeyCode::KP1
#define CE_KP_2            ::CatEngine::KeyCode::KP2
#define CE_KP_3            ::CatEngine::KeyCode::KP3
#define CE_KP_4            ::CatEngine::KeyCode::KP4
#define CE_KP_5            ::CatEngine::KeyCode::KP5
#define CE_KP_6            ::CatEngine::KeyCode::KP6
#define CE_KP_7            ::CatEngine::KeyCode::KP7
#define CE_KP_8            ::CatEngine::KeyCode::KP8
#define CE_KP_9            ::CatEngine::KeyCode::KP9
#define CE_KP_DECIMAL      ::CatEngine::KeyCode::KPDecimal
#define CE_KP_DIVIDE       ::CatEngine::KeyCode::KPDivide
#define CE_KP_MULTIPLY     ::CatEngine::KeyCode::KPMultiply
#define CE_KP_SUBTRACT     ::CatEngine::KeyCode::KPSubtract
#define CE_KP_ADD          ::CatEngine::KeyCode::KPAdd
#define CE_KP_ENTER        ::CatEngine::KeyCode::KPEnter
#define CE_KP_EQUAL        ::CatEngine::KeyCode::KPEqual

#define CE_LEFT_SHIFT      ::CatEngine::KeyCode::LeftShift
#define CE_LEFT_CONTROL    ::CatEngine::KeyCode::LeftControl
#define CE_LEFT_ALT        ::CatEngine::KeyCode::LeftAlt
#define CE_LEFT_SUPER      ::CatEngine::KeyCode::LeftSuper
#define CE_RIGHT_SHIFT     ::CatEngine::KeyCode::RightShift
#define CE_RIGHT_CONTROL   ::CatEngine::KeyCode::RightControl
#define CE_RIGHT_ALT       ::CatEngine::KeyCode::RightAlt
#define CE_RIGHT_SUPER     ::CatEngine::KeyCode::RightSuper
#define CE_MENU            ::CatEngine::KeyCode::Menu



