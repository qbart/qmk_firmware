#pragma once

#define IGNORE_MOD_TAP_INTERRUPT
#define TAPPING_TERM 200

#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX 50

#undef MOUSEKEY_WHEEL_TIME_TO_MAX
#define MOUSEKEY_WHEEL_TIME_TO_MAX 60

#undef DEBOUNCE
#define DEBOUNCE 45
// Memory saving
#ifdef CONSOLE_ENABLE
#    define NO_DEBUG
#    define NO_PRINT
#endif

#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

#undef RGBLIGHT_ANIMATIONS

#define ONESHOT_TAP_TOGGLE 5 /* Tapping this number of times holds the key until tapped once again. */
#define ONESHOT_TIMEOUT 5000 /* Time (in ms) before the one shot key is released */
