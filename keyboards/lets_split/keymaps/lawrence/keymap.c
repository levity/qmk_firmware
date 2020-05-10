#include QMK_KEYBOARD_H

#define _COLMAK  0
#define _NUMPAD  1
#define _FN      2

#define MO_FN    MO(_FN)
#define MO_MEDI  MO(_MEDIA)
#define MO_NUMP  MO(_NUMPAD)
#define TG_COLM  TG(_COLMAK)
#define TG_QWER  TG(_QWERTY)
#define TG_MOUS  TG(_MOUSE)
#define TG_NUMP  TG(_NUMPAD)

#define K_BACK   LGUI(KC_LBRC)
#define K_FWD    LGUI(KC_RBRC)
#define K_LTAB   SGUI(KC_LBRC)
#define K_RTAB   SGUI(KC_RBRC)
#define K_SH_BS  RSFT_T(KC_BSLS)
#define K_SLEEP  RGUI(RALT(KC_PWR))
#define K_LAPP   LSFT(LGUI(KC_TAB))
#define K_RAPP   LGUI(KC_TAB)
#define K_LSCR   LCTL(LSFT(KC_LEFT))
#define K_RSCR   LCTL(LSFT(KC_RGHT))

#define MT_LSFT  LSFT_T(KC_A)
#define MT_RSFT  RSFT_T(KC_O)

#define MT_LALT  LALT_T(KC_R)
#define MT_RALT  RALT_T(KC_I)

#define MT_LGUI  LGUI_T(KC_T)
#define MT_RGUI  RGUI_T(KC_N)

#define ___X___  KC_NO

// TODO / ideas
// dedicated F-key layer
// no left shift
// do something with those unused keys on the bottom row
// third layer accessed by holding down both Fn layer keys

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
// Colemak with left-hand mod-DH
[_COLMAK] = LAYOUT(\
KC_ESC , KC_Q   , KC_W   , KC_F   , KC_P   , KC_B   ,       KC_J   , KC_L   , KC_U   , KC_Y   , KC_SCLN, KC_BSPC, \
KC_LCTL, MT_LSFT, MT_LALT, KC_S   , KC_T   , KC_G   ,       KC_H   , KC_N   , KC_E   , MT_RALT, MT_RSFT, KC_QUOT, \
KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_D   , KC_V   ,       KC_K   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, K_SH_BS, \
KC_TAB , MO_NUMP, _______, MO_FN  , KC_LGUI, KC_SPC ,       KC_ENT , MO_FN  , ___X___, ___X___, ___X___, ___X___),

[_NUMPAD] = LAYOUT(\
_______, ___X___, ___X___, ___X___, ___X___, ___X___,       KC_PSLS, KC_P7  , KC_P8  , KC_P9  , ___X___, ___X___, \
_______, _______, _______, _______, _______, _______,       KC_PAST, KC_P4  , KC_P5  , KC_P6  , ___X___, ___X___, \
_______, _______, _______, _______, _______, _______,       KC_PMNS, KC_P1  , KC_P2  , KC_P3  , ___X___, ___X___, \
_______, _______, _______, _______, _______, _______,       KC_PPLS, KC_PEQL, KC_P0  , KC_PDOT, _______, _______),

[_FN] = LAYOUT(\
KC_GRV , _______, KC_LCBR, KC_RCBR, KC_GRV , KC_TILD,       _______, K_BACK , KC_UP  , K_FWD  , _______, _______, \
_______, _______, KC_LPRN, KC_RPRN, KC_EQL , KC_PLUS,       _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, \
_______, _______, KC_LBRC, KC_RBRC, KC_MINS, KC_UNDS,       _______, _______, K_LTAB , K_RTAB , KC_BSLS, _______, \
RESET  , _______, _______, _______, _______, _______,       _______, _______, _______, _______, _______, _______),
};
