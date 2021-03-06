#pragma once

#include "config.h"
#include QMK_KEYBOARD_H
/* #include "quantum.h" */

enum my_layers {
    L_BASE = 0,  // qwerty
    L_SYM,       // keyboard nav
    L_NAV,       // mouse nav + keyboard nav
    L_ONE,       // shortcuts
};

enum tap_dance {
    _WIN,
    _LBRC,
    _RBRC,
};

enum custom_keys {
    KX_GOLANG = SAFE_RANGE,
    KX_CXX_ARROW,
    KX_GO_ASSIGN,
    KX_GO_CHAN,
};

enum combos {
    JK_TO_ESC,
};
