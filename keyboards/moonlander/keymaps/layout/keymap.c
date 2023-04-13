#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_korean.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_lithuanian_azerty.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"
#include "keymap_belgian.h"
#include "keymap_us_international.h"
#include "keymap_croatian.h"
#include "keymap_turkish_q.h"
#include "keymap_slovak.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define SE_SECT_MAC ALGR(KC_6)
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  HSV_0_255_255,
  HSV_84_243_255,
  HSV_179_255_255,
  HSV_131_255_255,
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           TG(4),                                          TT(1),          KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_EQUAL,       
    KC_TAB,         KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,           KC_PGUP,                                        KC_UP,          KC_J,           KC_L,           KC_U,           KC_Y,           KC_SCOLON,      KC_BSPACE,      
    KC_ESCAPE,      KC_A,           KC_R,           KC_S,           KC_T,           KC_G,           KC_PGDOWN,                                                                      KC_DOWN,        KC_M,           KC_N,           KC_E,           KC_I,           KC_O,           KC_ENTER,       
    KC_LSHIFT,      KC_Z,           KC_X,           KC_C,           KC_D,           KC_V,                                           KC_K,           KC_H,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RSHIFT,      
    KC_LCTRL,       KC_QUOTE,       KC_LBRACKET,    KC_RBRACKET,    KC_LALT,        KC_LPRN,                                                                                                        KC_RPRN,        KC_LEFT,        KC_RIGHT,       KC_BSLASH,      KC_END,         KC_RCTRL,       
    KC_LCTRL,       KC_LGUI,        KC_LCBR,                        KC_RCBR,        OSL(2),         KC_SPACE
  ),
  [1] = LAYOUT_moonlander(
    KC_7,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TAB,         KC_I,           KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_T,           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_CAPSLOCK,    KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_G,           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCOLON,      KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LSHIFT,      KC_Z,           KC_X,           KC_C,           KC_V,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LCTRL,       KC_LGUI,        KC_B,           KC_TRANSPARENT, KC_M,                                                                                                           TG(3),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_SPACE,       KC_TRANSPARENT, KC_8,                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_CAPSLOCK,    KC_INSERT,      KC_DELETE,      KC_HOME,        KC_END,         KC_PSCREEN,     KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_ENTER,       KC_HOME,        KC_MINUS,       KC_UNDS,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,                                         KC_TRANSPARENT, KC_EQUAL,       KC_PLUS,        KC_DQUO,        KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F11,         KC_F12,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 TO(0),          RGB_TOG,        KC_TRANSPARENT, KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, RGB_SPD,        RGB_SPI,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RGB_VAD,        RGB_VAI,        KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, RGB_SLD,        RGB_MOD,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, HSV_0_255_255,  HSV_84_243_255, HSV_179_255_255,HSV_131_255_255,KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, RGB_HUD,        RGB_HUI,        KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_ACCEL2,   KC_MS_ACCEL1,   KC_MS_ACCEL0,   KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_WH_LEFT,  KC_MS_WH_DOWN,  KC_MS_WH_UP,    KC_MS_WH_RIGHT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_MS_BTN4,     KC_MS_BTN3,     KC_MS_BTN2,     KC_MS_BTN1,     KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_UP,       KC_MS_RIGHT,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};



extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}


const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [1] = { {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {81,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {197,218,204}, {81,218,204} },

    [2] = { {0,0,0}, {0,0,0}, {30,245,237}, {0,0,0}, {0,0,0}, {0,0,0}, {229,251,255}, {86,255,255}, {229,251,255}, {229,251,255}, {0,0,0}, {229,251,255}, {78,255,160}, {229,251,255}, {229,251,255}, {0,0,0}, {229,251,255}, {0,0,0}, {229,251,255}, {0,0,0}, {0,0,0}, {229,251,255}, {0,0,0}, {229,251,255}, {0,0,0}, {0,0,0}, {229,251,255}, {177,211,255}, {229,251,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {177,211,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {177,211,255}, {229,251,255}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,255}, {177,211,255}, {0,0,0}, {0,0,0}, {0,0,0}, {82,255,255}, {177,211,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {255,218,204}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {43,235,255}, {214,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {43,235,255}, {214,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {205,255,255}, {0,0,0}, {131,219,255}, {0,0,0}, {0,0,0}, {205,255,255}, {17,255,255}, {179,255,255}, {213,240,255}, {0,0,0}, {205,255,255}, {17,255,255}, {76,255,242}, {213,240,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {139,253,255}, {0,0,0}, {0,0,0}, {0,0,0}, {255,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {197,218,204} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {214,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {43,235,255}, {214,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {43,235,255}, {214,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {43,235,255}, {214,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {139,225,244}, {214,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {139,225,244}, {214,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {139,225,244}, {214,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {139,225,244}, {214,218,204}, {255,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return;
  }
  if (keyboard_config.disable_layer_led) { return; }
  switch (biton32(layer_state)) {
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
    case HSV_0_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(0,255,255);
        }
        return false;
      case HSV_84_243_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(84,243,255);
        }
        return false;
      case HSV_179_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(179,255,255);
        }
        return false;
      case HSV_131_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(131,255,255);
        }
        return false;
    }
  return true;
}



