#include QMK_KEYBOARD_H

#define _COLMAK  0
#define _QWERTY  1
#define _NUMPAD  2
#define _MOUSE   3
#define _MEDIA   4
#define _FN      5

#define MO_FN    MO(_FN)
#define MO_MEDI  MO(_MEDIA)
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

#define MT_LSFT  LSFT_T(KC_A)
#define MT_RSFT  RSFT_T(KC_O)

#define MT_LALT  LALT_T(KC_R)
#define MT_RALT  RALT_T(KC_I)

#define MT_LGUI  LGUI_T(KC_T)
#define MT_RGUI  RGUI_T(KC_N)

#define ___X___  KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
// Colemak with left-hand mod-DH
[_COLMAK] = LAYOUT(\
KC_GRV , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                   KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_EQL , \
KC_TAB , KC_Q   , KC_W   , KC_F   , KC_P   , KC_B   ,                   KC_J   , KC_L   , KC_U   , KC_Y   , KC_SCLN, KC_MINS, \
KC_LCTL, MT_LSFT, MT_LALT, KC_S   , KC_T   , KC_G   ,                   KC_H   , KC_N   , KC_E   , MT_RALT, MT_RSFT, KC_QUOT, \
KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_D   , KC_V   , KC_ESC , KC_BSPC, KC_K   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, K_SH_BS, \
                           KC_LALT, MO_FN  , KC_LGUI, KC_SPC , KC_ENT , MO_FN  , KC_RGUI, MO_MEDI),

[_QWERTY] = LAYOUT(\
KC_GRV , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                   KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_EQL , \
KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,                   KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_MINS, \
KC_LCTL, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   ,                   KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT, \
KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_ESC , KC_BSPC, KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, K_SH_BS, \
                           KC_LALT, MO_FN  , KC_LGUI, KC_SPC , KC_ENT , MO_FN  , KC_RGUI, MO_MEDI),

[_NUMPAD] = LAYOUT(\
_______, ___X___, ___X___, ___X___, ___X___, ___X___,                   KC_PSLS, KC_P7  , KC_P8  , KC_P9  , ___X___, ___X___, \
_______, _______, _______, _______, _______, _______,                   KC_PAST, KC_P4  , KC_P5  , KC_P6  , ___X___, ___X___, \
_______, _______, _______, _______, _______, _______,                   KC_PMNS, KC_P1  , KC_P2  , KC_P3  , ___X___, ___X___, \
_______, _______, _______, _______, _______, _______, TG_NUMP, _______, KC_PPLS, KC_PEQL, KC_P0  , KC_PDOT, ___X___, ___X___, \
                           _______, _______, _______, _______, _______, _______, _______, _______),

[_MOUSE] = LAYOUT(\
_______, _______, _______, _______, _______, _______,                   ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, \
_______, _______, _______, _______, _______, _______,                   ___X___, K_BACK , KC_MS_U, K_FWD  , ___X___, ___X___, \
_______, _______, _______, _______, _______, _______,                   KC_WH_D, KC_MS_L, KC_MS_D, KC_MS_R, ___X___, ___X___, \
_______, _______, _______, _______, _______, _______, TG_MOUS, KC_BTN2, KC_WH_U, ___X___, K_LTAB , K_RTAB , ___X___, _______, \
                           _______, _______, _______, _______, KC_BTN1, _______, _______, _______),

[_MEDIA] = LAYOUT(\
___X___, ___X___, ___X___, ___X___, ___X___, ___X___,                   ___X___, ___X___, ___X___, ___X___, KC_BRID, KC_BRIU, \
___X___, ___X___, ___X___, ___X___, ___X___, ___X___,                   ___X___, ___X___, ___X___, KC_MUTE, KC_VOLD, KC_VOLU, \
___X___, ___X___, ___X___, ___X___, ___X___, ___X___,                   ___X___, ___X___, ___X___, KC_MPRV, KC_MPLY, KC_MNXT, \
___X___, ___X___, ___X___, ___X___, ___X___, ___X___, K_SLEEP, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, \
                           ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___),

[_FN] = LAYOUT(\
_______, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,                   KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , \
_______, _______, KC_LCBR, KC_RCBR, KC_GRV , KC_TILD,                   ___X___, K_BACK , KC_UP  , K_FWD  , ___X___, KC_F12 , \
_______, _______, KC_LPRN, KC_RPRN, KC_EQL , KC_PLUS,                   ___X___, KC_LEFT, KC_DOWN, KC_RGHT, ___X___, ___X___, \
_______, _______, KC_LBRC, KC_RBRC, KC_MINS, KC_UNDS, TG_QWER, _______, TG_NUMP, TG_MOUS, K_LTAB , K_RTAB , KC_BSLS, ___X___, \
                           _______, _______, _______, _______, _______, _______, _______, _______),
};

extern uint8_t is_master;
const char *read_logo(void);

#ifdef OLED_DRIVER_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  // if (is_master) return rotation;
  return OLED_ROTATION_270;
}


void oled_task_user(void) {
  // if (is_master) {
  //   oled_write(read_logo(), false);
  //   return;
  // }

  switch (get_highest_layer(layer_state)) {
    case _FN:
      oled_write_ln_P(PSTR("      FN       "), true);
      break;
    case _MOUSE:
      oled_write_ln_P(PSTR("     MOUSE     "), true);
      break;
    case _NUMPAD:
      oled_write_ln_P(PSTR("      NUM      "), true);
      break;
    case _QWERTY:
      oled_write_ln_P(PSTR("     QWERT     "), true);
      break;
    case _MEDIA:
      oled_write_ln_P(PSTR("     MEDIA     "), true);
      break;
    default:
      oled_write_ln_P(PSTR("               "), false);
  }
}

#endif
