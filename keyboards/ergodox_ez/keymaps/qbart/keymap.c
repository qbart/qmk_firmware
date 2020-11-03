#include "config.h"
#include QMK_KEYBOARD_H

enum {
    L_BASE = 0,
    L_SYM,
    L_NAV,
};

enum {
    _WIN,
};

// clang-format off
qk_tap_dance_action_t tap_dance_actions[] = {
  [_WIN]    = ACTION_TAP_DANCE_DOUBLE(KC_LGUI, LGUI(KC_TAB)),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[L_BASE] = LAYOUT_ergodox(
    // left hand ---------------------------------------------------------------------------------------------------
    KC_GRV         ,KC_1           ,KC_2           ,KC_3           ,KC_4           ,KC_5           ,KC_HASH,
    KC_TAB         ,KC_Q           ,KC_W           ,KC_E           ,KC_R           ,KC_T           ,KC_LCBR,
LT(L_SYM, KC_QUOT) ,KC_A           ,KC_S           ,KC_D           ,KC_F           ,KC_G           ,
    KC_DQT         ,LCTL_T(KC_Z)   ,KC_X           ,KC_C           ,KC_V           ,KC_B           ,KC_LBRC,
    KC_RALT        ,KC_EXLM        ,KC_PIPE        ,KC_AMPR        ,KC_LSPO             ,
    // left thumb --------------------------------------------------------------------------------------------------
                                                                                   KC_DEL,          KC_F5,
                                                                                                    SGUI(KC_V),
                                                                    KC_SPC,      TD(_WIN),          KC_ESC,
    // right hand --------------------------------------------------------------------------------------------------
    KC_AT          ,KC_6           ,KC_7           ,KC_8           ,KC_9           ,KC_0           ,KC_BSPC,
    KC_RCBR        ,KC_Y           ,KC_U           ,KC_I           ,KC_O           ,KC_P           ,KC_ASTR,
                    KC_H           ,KC_J           ,KC_K           ,KC_L           ,KC_SCLN        ,KC_EQL,
    KC_RBRC        ,KC_N           ,KC_M           ,KC_COMMA       ,KC_DOT         ,RCTL_T(KC_SLSH),KC_MINUS,
                                    KC_RSPC        ,KC_DLR         ,XXXXXXX        ,KC_LEAD        ,TO(L_NAV),
    // right thumb -------------------------------------------------------------------------------------------------
    KC_CAPS,        KC_BSLS,
    XXXXXXX,
    XXXXXXX,           KC_ESC,        KC_ENT
),

[L_SYM] = LAYOUT_ergodox(
    // left hand ---------------------------------------------------------------------------------------------------
    KC_BRK         ,KC_F1           ,KC_F2           ,KC_F3           ,KC_F4           ,KC_F5           ,KC_F11,
    KC_PSCR        ,_______        ,_______        ,_______        ,_______        ,_______        ,_______        ,
    _______        ,KC_LCTL        ,KC_LALT        ,_______        ,_______        ,_______        ,
    _______        ,_______        ,_______        ,_______        ,_______        ,_______        ,_______,
    _______        ,_______        ,_______        ,_______        ,_______        ,
    // left thumb --------------------------------------------------------------------------------------------------
                                                                                   _______,          RESET,
                                                                                                    _______,
                                                                     _______,      _______,         _______,
    // right hand --------------------------------------------------------------------------------------------------
    KC_F12         ,KC_F6           ,KC_F7           ,KC_F8           ,KC_F9           ,KC_0           ,XXXXXXX,
    _______        ,_______         ,_______         ,_______         ,_______         ,_______        ,XXXXXXX,
                    _______         ,KC_LEFT         ,KC_DOWN         ,KC_UP           ,KC_RIGHT       ,XXXXXXX,
    _______        ,_______         ,_______         ,_______         ,_______         ,_______        ,XXXXXXX,
                                     _______         ,_______         ,_______         ,_______        ,XXXXXXX,
    // right thumb -------------------------------------------------------------------------------------------------
    _______,        _______,
    _______,
    _______,        _______,        _______
),

[L_NAV] = LAYOUT_ergodox(
    // left hand ---------------------------------------------------------------------------------------------------
    _______        ,_______        ,_______        ,_______        ,_______        ,_______        ,_______,
    XXXXXXX        ,XXXXXXX        ,KC_WH_D        ,KC_MS_U        ,KC_WH_U        ,XXXXXXX        ,_______        ,
    XXXXXXX        ,KC_WH_L        ,KC_MS_L        ,KC_MS_D        ,KC_MS_R        ,KC_WH_R        ,
    XXXXXXX        ,XXXXXXX        ,XXXXXXX        ,XXXXXXX        ,XXXXXXX        ,XXXXXXX        ,_______,
    XXXXXXX        ,XXXXXXX        ,XXXXXXX        ,XXXXXXX        ,XXXXXXX        ,
    // left thumb --------------------------------------------------------------------------------------------------
                                                                                   _______,         _______,
                                                                                                    _______,
                                                                     KC_BTN1,      KC_BTN2,         _______,
    // right hand --------------------------------------------------------------------------------------------------
    _______        ,_______         ,_______         ,_______         ,_______         ,_______        ,XXXXXXX,
    _______        ,XXXXXXX         ,XXXXXXX         ,XXXXXXX         ,XXXXXXX         ,XXXXXXX        ,XXXXXXX,
                    XXXXXXX         ,KC_LEFT         ,KC_DOWN         ,KC_UP           ,KC_RIGHT       ,XXXXXXX,
    _______        ,XXXXXXX         ,XXXXXXX         ,XXXXXXX         ,XXXXXXX         ,XXXXXXX        ,XXXXXXX,
                                     _______         ,_______         ,_______         ,_______        ,TO(L_BASE),
    // right thumb -------------------------------------------------------------------------------------------------
    _______,        _______,
    _______,
    _______,        _______,        _______
),
};
// clang-format on
