#include "qbart.h"

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
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
