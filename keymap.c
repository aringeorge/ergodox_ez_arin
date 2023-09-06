#include QMK_KEYBOARD_H
#include "version.h"
// atmega32u4
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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    KC_ESCAPE,      KC_EXLM,        KC_AT,          KC_HASH,         KC_DLR,         KC_PERC,        KC_CIRC,                                       KC_AMPR,        KC_ASTR,        KC_LPRN,        KC_RPRN,        KC_MINUS,       KC_PLUS,        KC_EQUAL,
    KC_TAB,         KC_Q,           KC_W,           KC_E,            KC_R,           KC_T,           MO(1),                                         MO(1),          KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_SLASH,
    KC_CAPS_LOCK,   KC_A,           KC_S,           KC_D,            KC_F,           KC_G,                                                                          KC_H,           KC_J,           KC_K,           KC_L,           KC_SEMICOLON,   KC_ENTER,
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,            KC_V,           KC_B,           TO(2),                                         TO(2),          KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_UP,          KC_RIGHT_SHIFT,
    KC_LEFT_CTRL,   KC_LGUI,        KC_LALT,        KC_LEFT_BRACKET, KC_RIGHT_BRACKET,                                                                                              KC_LCBR,        KC_RCBR,        KC_LEFT,        KC_DOWN,        KC_RIGHT,
                                                                                                    KC_LABK,        KC_RABK,        KC_HOME,        KC_END,
                                                                                                                    KC_QUES,        KC_PAGE_UP,
                                                                                    KC_SPACE,       KC_DELETE,      KC_BACKSLASH,   KC_PAGE_DOWN,   KC_BACKSPACE,      KC_SPACE
  ),
  [1] = LAYOUT_ergodox_pretty(
    KC_ESCAPE,      KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_KP_MINUS,    KC_KP_PLUS,     KC_PRINT_SCREEN,
    KC_TAB,         KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_QUOTE,       KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_UNDS,        KC_7,           KC_8,           KC_9,           KC_KP_SLASH,    KC_NO,
    KC_NO,          KC_F5,          KC_F6,          KC_F7,          KC_F8,          KC_GRAVE,                                                                       KC_PIPE,        KC_4,           KC_5,           KC_6,           KC_KP_ASTERISK, KC_ENTER,
    KC_LEFT_SHIFT,  KC_F9,          KC_F10,         KC_F11,         KC_F12,         KC_DQUO,        TO(0),                                          TO(2),          KC_TILD,        KC_1,           KC_2,           KC_3,           KC_UP,          KC_RIGHT_SHIFT,
    KC_LEFT_CTRL,   KC_LGUI,        KC_LALT,        KC_NO,          KC_NO,                                                                                                          KC_0,           KC_DOT,         KC_LEFT,        KC_DOWN,        KC_RIGHT,
                                                                                                    KC_NO,          KC_NO,          KC_HOME,        KC_END,
                                                                                                                    KC_NO,          KC_PAGE_UP,
                                                                                    KC_SPACE,       KC_DELETE,      KC_NO,          KC_PAGE_DOWN,   KC_BACKSPACE,      KC_SPACE
  ),
  [2] = LAYOUT_ergodox_pretty(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_6,                                           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,       KC_EQUAL,        KC_BACKSPACE,
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           TO(0),                                          TO(0),          KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,            KC_BACKSLASH,
    MO(4),          KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SEMICOLON,    KC_ENTER,
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           TO(1),                                          TO(1),          KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,        KC_DELETE,
    KC_LEFT_CTRL,   MO(5),          KC_LALT,        MO(6),          MO(3),                                                                                                          KC_QUOTE,       KC_GRAVE,       KC_TILD,        KC_LEFT_BRACKET, KC_RIGHT_BRACKET,
                                                                                                    KC_HOME,        KC_END,         KC_LEFT,        KC_RIGHT,
                                                                                                                    KC_PAGE_UP,     KC_UP,
                                                                                    KC_SPACE,       KC_LGUI,        KC_PAGE_DOWN,   KC_DOWN,        KC_APPLICATION, KC_SPACE
  ),
  [3] = LAYOUT_ergodox_pretty(
    KC_ESCAPE,      KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,       KC_EQUAL,                                       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_6,            KC_BACKSPACE,
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           TO(0),                                          TO(0),          KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,            KC_BACKSLASH,
    KC_NO,          KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SEMICOLON,    KC_ENTER,
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           TO(1),                                          TO(1),          KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,        KC_DELETE,
    KC_LEFT_CTRL,   KC_NO,          KC_LALT,        KC_NO,          KC_TRANSPARENT,                                                                                                 KC_QUOTE,       KC_GRAVE,       KC_TILD,        KC_LEFT_BRACKET, KC_RIGHT_BRACKET,
                                                                                                    KC_HOME,        KC_END,         KC_LEFT,        KC_RIGHT,
                                                                                                                    KC_PAGE_UP,     KC_UP,
                                                                                    KC_SPACE,       KC_LGUI,        KC_PAGE_DOWN,   KC_DOWN,        KC_APPLICATION, KC_SPACE
  ),
  [4] = LAYOUT_ergodox_pretty(
    KC_ESCAPE,      LSFT(KC_7),     LSFT(KC_8),     LSFT(KC_9),     LSFT(KC_0),     LSFT(KC_MINUS), LSFT(KC_EQUAL),                                 KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_6,            KC_BACKSPACE,
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           TO(0),                                          TO(0),          KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,            KC_BACKSLASH,
    KC_TRANSPARENT, KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SEMICOLON,    KC_ENTER,
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           TO(1),                                          TO(1),          KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,        KC_DELETE,
    KC_LEFT_CTRL,   KC_NO,          KC_LALT,        KC_NO,          KC_NO,                                                                                                          KC_QUOTE,       KC_GRAVE,       KC_TILD,        KC_LEFT_BRACKET, KC_RIGHT_BRACKET,
                                                                                                    KC_HOME,        KC_END,         KC_LEFT,        KC_RIGHT,
                                                                                                                    KC_PAGE_UP,     KC_UP,
                                                                                    KC_SPACE,       KC_LGUI,        KC_PAGE_DOWN,   KC_DOWN,        KC_APPLICATION, KC_SPACE
  ),
  [5] = LAYOUT_ergodox_pretty(
    KC_ESCAPE,      LCTL(KC_7),     LCTL(KC_8),     LCTL(KC_9),     LCTL(KC_0),     LCTL(KC_MINUS), LCTL(KC_EQUAL),                                 KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_6,            KC_BACKSPACE,
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           TO(0),                                          TO(0),          KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,            KC_BACKSLASH,
    KC_NO,          KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SEMICOLON,    KC_ENTER,
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           TO(1),                                          TO(1),          KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,        KC_DELETE,
    KC_LEFT_CTRL,   KC_TRANSPARENT, KC_LALT,        KC_NO,          KC_NO,                                                                                                          KC_QUOTE,       KC_GRAVE,       KC_TILD,        KC_LEFT_BRACKET, KC_RIGHT_BRACKET,
                                                                                                    KC_HOME,        KC_END,         KC_LEFT,        KC_RIGHT,
                                                                                                                    KC_PAGE_UP,     KC_UP,
                                                                                    KC_SPACE,       KC_LGUI,        KC_PAGE_DOWN,   KC_DOWN,        KC_APPLICATION, KC_SPACE
  ),
  [6] = LAYOUT_ergodox_pretty(
    KC_ESCAPE,      LALT(KC_7),     LALT(KC_8),     LALT(KC_9),     LALT(KC_0),     LALT(KC_MINUS), LALT(KC_EQUAL),                                 KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_6,            KC_BACKSPACE,
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           TO(0),                                          TO(0),          KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,            KC_BACKSLASH,
    KC_NO,          KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SEMICOLON,    KC_ENTER,
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           TO(1),                                          TO(1),          KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,        KC_DELETE,
    KC_LEFT_CTRL,   KC_NO,          KC_LALT,        KC_TRANSPARENT, KC_NO,                                                                                                          KC_QUOTE,       KC_GRAVE,       KC_TILD,        KC_LEFT_BRACKET, KC_RIGHT_BRACKET,
                                                                                                    KC_HOME,        KC_END,         KC_LEFT,        KC_RIGHT,
                                                                                                                    KC_PAGE_UP,     KC_UP,
                                                                                    KC_SPACE,       KC_LGUI,        KC_PAGE_DOWN,   KC_DOWN,        KC_APPLICATION, KC_SPACE
  ),
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  }
  return true;
}

void matrix_init_user(void) {
    ergodox_led_all_set(LED_BRIGHTNESS_LO);
}

bool led_update_user(led_t led_state)   {
  static uint8_t lastCapsState = 0;
  if (lastCapsState != led_state.caps_lock)   {
      if (led_state.caps_lock)    {          
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
      }
      else  {
        ergodox_right_led_1_off();
        ergodox_right_led_2_off();
        ergodox_right_led_3_off();
        layer_state_set_user(layer_state);
      }
      lastCapsState = led_state.caps_lock;
      return false;
  }
  return true;
}
    

layer_state_t layer_state_set_user(layer_state_t state) {
  uint8_t layer = biton32(state);
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
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      break;
    case 4:
      ergodox_right_led_3_on();
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


