#include "quantum.h"
#include "qbart.h"

const uint16_t PROGMEM jk_combo[] = {KC_J, KC_K, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {[JK_TO_ESC] = COMBO(jk_combo, KC_ESC)};

qk_tap_dance_action_t tap_dance_actions[] = {
    [_WIN]  = ACTION_TAP_DANCE_DOUBLE(KC_LGUI, LGUI(KC_TAB)),
    [_LBRC] = ACTION_TAP_DANCE_DOUBLE(KC_LBRC, KC_LCBR),
    [_RBRC] = ACTION_TAP_DANCE_DOUBLE(KC_RBRC, KC_RCBR),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KX_GO_ASSIGN:
            if (record->event.pressed) {
                // go assign operator
                SEND_STRING(":=");
            }
            break;
        case KX_GO_CHAN:
            if (record->event.pressed) {
                // go chan operator
                SEND_STRING("<-");
            }
            break;
        case KX_CXX_ARROW:
            if (record->event.pressed) {
                // fast c++ deref
                SEND_STRING("->");
            }
            break;
        case KX_GOLANG:
            if (!record->event.pressed) {
                // switch to workspace 1 -> open new tab -> type prefix to search for
                SEND_STRING(SS_LWIN("1") SS_DELAY(200) SS_LCTL("t") "golang ");
            }
            break;
    }
    return true;
};

void process_combo_event(uint16_t combo_index, bool pressed) {
    switch (combo_index) {}
}
