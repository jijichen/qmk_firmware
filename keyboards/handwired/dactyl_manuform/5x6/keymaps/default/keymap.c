/* A standard layout for the Dactyl Manuform 5x6 Keyboard */

#include QMK_KEYBOARD_H


#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _NAV 3

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)
#define NAV MO(_NAV)
#define MEPREV KC_MEDIA_PREV_TRACK
#define MENEXT KC_MEDIA_NEXT_TRACK

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT_bob(
         KC_GRV , KC_1  , KC_2  , KC_3  , KC_4  ,  KC_5  ,                         KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,KC_ESC,
LT(NAV, KC_TAB) , KC_Q  , KC_W  , KC_E  , KC_R  ,  KC_T  ,                         KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,KC_BSPC,
        KC_LCTL , KC_A  , KC_S  , KC_D  , KC_F  ,  KC_G  ,                         KC_H  , KC_J  , KC_K  , KC_L  ,KC_SCLN,KC_QUOT,
        KC_LSFT , KC_Z  , KC_X  , KC_C  , KC_V  ,  KC_B  ,                         KC_N  , KC_M  ,KC_COMM,KC_DOT ,KC_SLSH,KC_RSFT,
          RAISE, LOWER ,  LGUI_T(KC_SPC),  LALT_T(KC_SPC),                         LT(LOWER, KC_ENT), LT(RAISE, KC_BSPC) , MEPREV  , MENEXT  ,
                                KC_MUTE ,   NAV ,  NAV   ,                         KC_ENT, NAV, KC_MEDIA_PLAY_PAUSE
  ),

 [_LOWER] = LAYOUT_bob(
     KC_GRV , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                         KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , _______,
     KC_GRV , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                         KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , _______,
     _______, _______, _______, _______, _______, _______,                         KC_MINS, KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS, KC_TILD,
     _______, _______, _______, _______, _______, _______,                         _______, _______, _______, _______, _______, _______,
                       _______, _______, _______, _______,                         _______, _______, _______, _______,
                                _______, _______, _______,                         _______, _______, _______
  ),

  [_RAISE] = LAYOUT_bob(
     KC_TILD, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                         KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,
     KC_TILD, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                         KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,
     RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, _______, _______,                         KC_UNDS,  KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE,  KC_GRV,
     RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, _______, _______,                         _______, _______, _______, _______, _______, _______,
                       _______, _______, _______, _______,                         _______, _______, _______, _______,
                                _______, _______, _______,                         _______, _______, _______
  ),

  [_NAV] = LAYOUT_bob(
       RESET, _______, _______, _______, _______, _______,                         _______, _______, _______, _______, _______, _______,
     _______, _______, KC_UP  , _______, _______, _______,                         _______, _______, _______, _______, _______, _______,
     _______, KC_LEFT, KC_DOWN,KC_RIGHT, _______, _______,                         KC_LEFT, KC_DOWN,  KC_UP, KC_RIGHT,   KC_UP, _______,
     _______, _______, _______, _______, _______, _______,                         _______, _______, _______, KC_LEFT, KC_DOWN, KC_RIGHT,
                       _______, _______, _______, _______,                         _______, _______, _______, _______,
                                _______, _______, _______,                         _______, _______, _______
  ),
};
