#include QMK_KEYBOARD_H

#define _COLEMAK 0
#define _LOWER 1
#define _RAISE 2
#define _FUNC 3
#define _COMB 4

// For _QWERTY layer
#define RSE_SPC LT(_RAISE, KC_SPC)
#define LOW_SPC LT(_LOWER, KC_SPC)
#define COMB_SPC LT(_COMB, KC_SPC)

// For _RAISE layer
#define CTL_ESC  LCTL_T(KC_ESC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_COLEMAK] = LAYOUT_split_3x6_3(
        KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                               KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN,    KC_GRV,
        KC_ESC, KC_A,    KC_R,    KC_S,    KC_T,    KC_G,                               KC_M,    KC_N,    KC_E,    KC_I,    KC_O, KC_QUOT,
        KC_LSFT, KC_X,    KC_C,    KC_D,    KC_V,    KC_Z,                               KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                                            KC_LGUI, COMB_SPC, KC_BSPC,           KC_ENT, KC_LCTL,  KC_RALT
  ),
  [_COMB] = LAYOUT_split_3x6_3(
      KC_GRV, KC_1,    KC_2,   KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
      _______, KC_HOME, KC_END , KC_MINS, KC_EQL , KC_PGDN,                      KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT,  KC_BSLS,_______,
      _______, KC_DEL , XXXXXXX, KC_UNDS, KC_PLUS, KC_PGUP,                       KC_LBRC, KC_RBRC,XXXXXXX, XXXXXXX, XXXXXXX,_______,
                                          _______, _______, _______,    _______  , _______, _______
  ),



  [_LOWER] = LAYOUT_split_3x6_3(
      _______, KC_EXLM, KC_AT,  KC_HASH, KC_DLR,  KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,
      _______, KC_1,    KC_2,   KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
      _______, XXXXXXX , KC_TILD,KC_GRV, KC_LBRC, KC_LCBR,                       KC_RCBR, KC_RBRC, KC_COMM,KC_DOT,  KC_SLSH, _______,
                                          _______,  _______, _______,    _______, _______, KC_COLON 
    ),


  [_RAISE] = LAYOUT_split_3x6_3(
      _______, KC_DEL , XXXXXXX, KC_UNDS, KC_PLUS, KC_PGUP,                      XXXXXXX, XXXXXXX, XXXXXXX, KC_BSLS, KC_PIPE,_______,
      _______, KC_HOME, KC_END , KC_MINS, KC_EQL , KC_PGDN,                      KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, KC_APP ,_______,
      _______, KC_LT  , KC_GT  , KC_COPY, KC_PSTE, KC_SCLN,                      KC_MPLY, KC_MPRV, KC_MNXT, KC_VOLD, KC_VOLU,_______,
                                          _______, _______, _______,    _______  , _______, _______
  ),

  [_FUNC] = LAYOUT_split_3x6_3(
      _______, KC_F1  , KC_F2  , KC_F3   , KC_F4 ,  KC_F5 ,                     KC_F6   , KC_F7  , KC_F8  , KC_F9  , KC_F10 ,_______,
      _______, KC_F11 , KC_F12 , XXXXXXX, XXXXXXX, XXXXXXX,                     XXXXXXX , XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,_______,
      _______, KC_CAPS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                     XXXXXXX , XXXXXXX, XXXXXXX, XXXXXXX, _______  ,_______,
                                          _______, _______, _______,    _______, _______   , _______
  )
};