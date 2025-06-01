#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"

enum custom_keycodes {
  RGB_SLD = EZ_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  MAC_MISSION_CONTROL,
  MAC_SPOTLIGHT,
  MAC_SIRI,
  MAC_DND,
};


enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
  DANCE_5,
};

#define DUAL_FUNC_0 LT(4, KC_O)
#define DUAL_FUNC_1 LT(6, KC_G)
#define DUAL_FUNC_2 LT(11, KC_T)
#define DUAL_FUNC_3 LT(9, KC_8)
#define DUAL_FUNC_4 LT(14, KC_V)
#define DUAL_FUNC_5 LT(6, KC_Y)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    DUAL_FUNC_0,    FR_AMP,         FR_EACU,        FR_DQUO,        DUAL_FUNC_1,    TD(DANCE_0),    KC_LEFT,                                        KC_RIGHT,       FR_MINS,        FR_EGRV,        FR_UNDS,        FR_CCED,        FR_AGRV,        KC_BSPC,
    LT(1, KC_TAB),  FR_A,           FR_Z,           KC_E,           KC_R,           KC_T,           KC_HYPR,                                        KC_HYPR,        KC_Y,           DUAL_FUNC_2,    KC_I,           KC_O,           KC_P,           TD(DANCE_2),
    MT(MOD_LCTL, KC_ESCAPE),MT(MOD_LGUI, FR_Q),MT(MOD_LALT, KC_S),MT(MOD_LCTL, KC_D),MT(MOD_LSFT, KC_F),LT(1, KC_G),                                                                    LT(1, KC_H),    MT(MOD_RSFT, KC_J),MT(MOD_RCTL, KC_K),MT(MOD_RALT, KC_L),MT(MOD_RGUI, FR_M),KC_ENTER,
    KC_LEFT_SHIFT,  FR_W,           KC_X,           KC_C,           KC_V,           KC_B,           KC_MEH,                                         KC_MEH,         KC_N,           FR_COMM,        DUAL_FUNC_3,    DUAL_FUNC_4,    MT(MOD_RCTL, FR_EXLM),MT(MOD_RSFT, KC_ENTER),
    TD(DANCE_1),    MT(MOD_LALT, FR_LESS),MT(MOD_LCTL, KC_BSPC),MT(MOD_LSFT, KC_DELETE),MT(MOD_LGUI, KC_E),                                                                                                MT(MOD_RGUI, KC_SPACE),MT(MOD_RSFT, FR_LPRN),MT(MOD_RCTL, FR_RPRN),ST_MACRO_0,     TD(DANCE_3),
                                                                                                    KC_MAC_COPY,    KC_MAC_PASTE,   KC_LEFT,        KC_RIGHT,
                                                                                                                    KC_MAC_CUT,     KC_UP,
                                                                                    MT(MOD_LGUI, KC_ENTER),MT(MOD_LSFT, KC_TAB),LGUI(FR_Z),     KC_DOWN,        MT(MOD_RSFT, KC_BSPC),MT(MOD_RGUI, KC_SPACE)
  ),
  [1] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_TRANSPARENT,
    KC_TRANSPARENT, FR_HASH,        FR_ASTR,        FR_LCBR,        FR_RCBR,        FR_PIPE,        KC_TRANSPARENT,                                 KC_PAGE_UP,     KC_TRANSPARENT, KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_SLASH,    TO(0),
    TO(0),          FR_CCIRC,       FR_DLR,         FR_LPRN,        FR_RPRN,        KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_KP_MINUS,    KC_TRANSPARENT,
    KC_TRANSPARENT, FR_COMM,        FR_SCLN,        FR_LBRC,        FR_RBRC,        CW_TOGG,        KC_TRANSPARENT,                                 KC_PGDN,        ST_MACRO_1,     KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_PLUS,     KC_TRANSPARENT,
    KC_TRANSPARENT, FR_PERC,        FR_EXLM,        FR_LESS,        FR_GRTR,                                                                                                        KC_KP_0,        DUAL_FUNC_5,    FR_EQL,         FR_HASH,        FR_ASTR,
                                                                                                    LGUI(FR_A),     KC_TRANSPARENT, KC_HOME,        KC_END,
                                                                                                                    KC_TRANSPARENT, KC_PAGE_UP,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_PGDN,        KC_TRANSPARENT, TD(DANCE_4)
  ),
  [2] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_UP,MAC_MISSION_CONTROL,MAC_SPOTLIGHT,  MAC_SIRI,       MAC_DND,                                        KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,QK_BOOT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_MS_WH_DOWN,  KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_UP,       KC_TRANSPARENT, KC_TRANSPARENT, TO(0),
    TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_MS_WH_UP,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_MS_BTN1,     KC_MS_BTN2,     KC_TRANSPARENT, KC_TRANSPARENT, TO(0),
                                                                                                    KC_TRANSPARENT, KC_APPLICATION, KC_MS_WH_RIGHT, KC_MS_WH_LEFT,
                                                                                                                    KC_TRANSPARENT, KC_MS_WH_DOWN,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_WH_UP,    KC_TRANSPARENT, TD(DANCE_5)
  ),
};



uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MT(MOD_LALT, KC_S):
            return TAPPING_TERM + 100;
        default:
            return TAPPING_TERM;
    }
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_LBRC)SS_DELAY(10)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_RALT(SS_TAP(X_N))SS_DELAY(10)  SS_TAP(X_SPACE));
    }
    break;
    case MAC_MISSION_CONTROL:
      HCS(0x29F);
    case MAC_SPOTLIGHT:
      HCS(0x221);
    case MAC_SIRI:
      HCS(0xCF);
    case MAC_DND:
      HSS(0x9B);

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(FR_AT);
        } else {
          unregister_code16(FR_AT);
        }
      } else {
        if (record->event.pressed) {
          layer_on(2);
        } else {
          layer_off(2);
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(FR_APOS);
        } else {
          unregister_code16(FR_APOS);
        }
      } else {
        if (record->event.pressed) {
          register_code16(FR_GRV);
        } else {
          unregister_code16(FR_GRV);
        }  
      }  
      return false;
    case DUAL_FUNC_2:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_U);
        } else {
          unregister_code16(KC_U);
        }
      } else {
        if (record->event.pressed) {
          register_code16(FR_UGRV);
        } else {
          unregister_code16(FR_UGRV);
        }  
      }  
      return false;
    case DUAL_FUNC_3:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(FR_SCLN);
        } else {
          unregister_code16(FR_SCLN);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(FR_SCLN));
        } else {
          unregister_code16(LALT(FR_SCLN));
        }  
      }  
      return false;
    case DUAL_FUNC_4:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(FR_COLN);
        } else {
          unregister_code16(FR_COLN);
        }
      } else {
        if (record->event.pressed) {
          register_code16(FR_BSLS);
        } else {
          unregister_code16(FR_BSLS);
        }  
      }  
      return false;
    case DUAL_FUNC_5:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(FR_COMM);
        } else {
          unregister_code16(FR_COMM);
        }
      } else {
        if (record->event.pressed) {
          register_code16(FR_DOT);
        } else {
          unregister_code16(FR_DOT);
        }  
      }  
      return false;
  }
  return true;
}

uint8_t layer_state_set_user(uint8_t state) {
    uint8_t layer = biton(state);
  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();
  switch (layer) {
    case 1:
      ergodox_right_led_1_on();
      break;
    case 2:
      ergodox_right_led_2_on();
      break;
    case 3:
      ergodox_right_led_3_on();
      break;
    case 4:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      break;
    case 5:
      ergodox_right_led_1_on();
      ergodox_right_led_3_on();
      break;
    case 6:
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    case 7:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    default:
      break;
  }
  return state;
};


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[6];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(FR_LPRN);
        tap_code16(FR_LPRN);
        tap_code16(FR_LPRN);
    }
    if(state->count > 3) {
        tap_code16(FR_LPRN);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(FR_LPRN); break;
        case DOUBLE_TAP: layer_move(2); break;
        case DOUBLE_SINGLE_TAP: tap_code16(FR_LPRN); register_code16(FR_LPRN);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(FR_LPRN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(FR_LPRN); break;
    }
    dance_state[0].step = 0;
}
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_HOLD: register_code16(KC_LEFT_GUI); break;
        case DOUBLE_TAP: layer_move(1); break;
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_HOLD: unregister_code16(KC_LEFT_GUI); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(FR_CCIRC);
        tap_code16(FR_CCIRC);
        tap_code16(FR_CCIRC);
    }
    if(state->count > 3) {
        tap_code16(FR_CCIRC);
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(FR_CCIRC); break;
        case DOUBLE_TAP: layer_move(2); break;
        case DOUBLE_SINGLE_TAP: tap_code16(FR_CCIRC); register_code16(FR_CCIRC);
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(FR_CCIRC); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(FR_CCIRC); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(tap_dance_state_t *state, void *user_data);
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void on_dance_3(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(FR_DLR);
        tap_code16(FR_DLR);
        tap_code16(FR_DLR);
    }
    if(state->count > 3) {
        tap_code16(FR_DLR);
    }
}

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(FR_DLR); break;
        case SINGLE_HOLD: register_code16(KC_RIGHT_GUI); break;
        case DOUBLE_TAP: layer_move(2); break;
        case DOUBLE_SINGLE_TAP: tap_code16(FR_DLR); register_code16(FR_DLR);
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(FR_DLR); break;
        case SINGLE_HOLD: unregister_code16(KC_RIGHT_GUI); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(FR_DLR); break;
    }
    dance_state[3].step = 0;
}
void on_dance_4(tap_dance_state_t *state, void *user_data);
void dance_4_finished(tap_dance_state_t *state, void *user_data);
void dance_4_reset(tap_dance_state_t *state, void *user_data);

void on_dance_4(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_SPACE);
        tap_code16(KC_SPACE);
        tap_code16(KC_SPACE);
    }
    if(state->count > 3) {
        tap_code16(KC_SPACE);
    }
}

void dance_4_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(KC_SPACE); break;
        case DOUBLE_TAP: layer_move(0); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_SPACE); register_code16(KC_SPACE);
    }
}

void dance_4_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(KC_SPACE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_SPACE); break;
    }
    dance_state[4].step = 0;
}
void dance_5_finished(tap_dance_state_t *state, void *user_data);
void dance_5_reset(tap_dance_state_t *state, void *user_data);

void dance_5_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case DOUBLE_TAP: layer_move(0); break;
    }
}

void dance_5_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
    }
    dance_state[5].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset),
        [DANCE_5] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_5_finished, dance_5_reset),
};
