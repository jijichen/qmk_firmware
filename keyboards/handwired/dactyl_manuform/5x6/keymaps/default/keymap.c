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

  [_QWERTY] = LAYOUT_cyz(
        KC_GRV          , KC_1    , KC_2    , KC_3    , KC_4    ,  KC_5    ,                         KC_6              , KC_7              , KC_8   , KC_9   , KC_0   , KC_MINUS,
        KC_TAB          , KC_Q    , KC_W    , KC_E    , KC_R    ,  KC_T    ,                         KC_Y              , KC_U              , KC_I   , KC_O   , KC_P   , KC_EQUAL,
        LT(NAV, KC_ESC) , KC_A    , KC_S    , KC_D    , KC_F    ,  KC_G    ,                         KC_H              , KC_J              , KC_K   , KC_L   , KC_SCLN, KC_QUOT,
        KC_LSFT         , KC_Z    , KC_X    , KC_C    , KC_V    ,  KC_B    ,                         KC_N              , KC_M              , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT,
                                    KC_LEFT , KC_RIGHT, KC_SPC  ,  KC_LSFT ,                         LT(LOWER, KC_BSPC), LT(RAISE, KC_ENT) , KC_UP  , KC_DOWN,
                                              KC_MUTE , KC_LGUI ,  KC_LCTL ,                         KC_RALT, KC_RGUI, KC_MEDIA_PLAY_PAUSE
  ),

 [_LOWER] = LAYOUT_cyz(
     KC_GRV , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                         KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , _______,
     KC_GRV , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                         KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , _______,
     _______, _______, _______, _______, _______, _______,                         KC_MINS, KC_EQL , KC_LBRC, KC_RBRC, KC_BSLS, KC_BSLS,
     KC_F12 , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,                         KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 ,
                       _______, _______, _______, _______,                         _______, _______, _______, _______,
                                _______, _______, _______,                         _______, _______, _______
  ),

  [_RAISE] = LAYOUT_cyz(
     KC_TILD, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                         KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,
     KC_TILD, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                         KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,
     RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, _______, _______,                         KC_UNDS, KC_LPRN, KC_RPRN, KC_LCBR, KC_RCBR, KC_PIPE,
     RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, _______, _______,                         _______, _______, _______, _______, _______, _______,
                       _______, _______, _______, _______,                         _______, _______, _______, _______,
                                _______, _______, _______,                         _______, _______, _______
  ),

  [_NAV] = LAYOUT_cyz(
       RESET, _______, _______, _______, _______, _______,                         _______, _______, _______, _______, _______, EEP_RST,
     _______, _______, _______, KC_UP  , _______, _______,                         _______, KC_LBRC, KC_RBRC, _______, _______, _______,
     _______, _______, KC_LEFT, KC_DOWN,KC_RIGHT, _______,                         _______, KC_LPRN, KC_RPRN, KC_LCBR, KC_RCBR, KC_BSLS,
     _______, _______, _______, _______, _______, _______,                         _______, _______, _______, _______, _______, _______,
                       _______, _______, _______, _______,                         _______, _______, _______, _______,
                                _______, _______, _______,                         _______, _______, _______
  ),
};
