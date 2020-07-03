#include QMK_KEYBOARD_H

#define _COLMAK  0
#define _NUMPAD  2
#define _SYM     3
#define _MOUSE   4
#define _MEDIA   5
#define _FN      6

#define MO_FN    MO(_FN)
#define MO_MEDI  MO(_MEDIA)
#define MO_NUMP  MO(_NUMPAD)
#define MO_MOUS  MO(_MOUSE)
#define TG_COLM  TG(_COLMAK)
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
#define K_DIVVY  LCTL(LGUI(KC_TAB))

#define MSFT_A  LSFT_T(KC_A)
#define MSFT_S  LSFT_T(KC_S)
#define MSFT_T  LSFT_T(KC_T)
#define MSFT_N  RSFT_T(KC_N)
#define MSFT_E  RSFT_T(KC_E)
#define MSFT_O  RSFT_T(KC_O)

#define MALT_R  LALT_T(KC_R)
#define MALT_I  RALT_T(KC_I)

#define LSYM_QT LT(_SYM, KC_QUOT)

#define ___X___  KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
// Colemak with left-hand mod-DH
[_COLMAK] = LAYOUT(\
KC_GRV , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                   KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_MINS, \
KC_TAB , KC_Q   , KC_W   , KC_F   , KC_P   , KC_B   ,                   KC_J   , KC_L   , KC_U   , KC_Y   , KC_SCLN, KC_BSLS, \
KC_LCTL, MSFT_A , MALT_R , KC_S   , MSFT_T , KC_G   ,                   KC_H   , MSFT_N , KC_E   , MALT_I , MSFT_O , LSYM_QT, \
KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_D   , KC_V   , KC_ESC , KC_BSPC, KC_K   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT, \
                           MO_MOUS, MO_NUMP, KC_LGUI, KC_SPC , KC_ENT , MO_FN  , KC_RGUI, MO_MEDI),

[_NUMPAD] = LAYOUT(\
___X___, ___X___, ___X___, ___X___, ___X___, ___X___,                   ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, \
K_DIVVY, _______, _______, _______, _______, _______,                   KC_PAST, KC_7   , KC_8   , KC_P9  , ___X___, ___X___, \
KC_F11 , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,                   KC_PMNS, KC_4   , KC_5   , KC_6   , KC_P0  , ___X___, \
KC_F12 , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , _______, _______, KC_PPLS, KC_1   , KC_2   , KC_3   , _______, ___X___, \
                           _______, _______, _______, _______, _______, _______, _______, _______),

[_SYM] = LAYOUT(\
___X___, ___X___, ___X___, ___X___, ___X___, ___X___,                   ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, \
___X___, KC_EXLM, KC_AT  , KC_HASH, KC_DLR , KC_PERC,                   KC_CIRC, KC_AMPR, KC_ASTR, ___X___, ___X___, ___X___, \
___X___, KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                   ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, \
___X___, KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, \
                           ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___),

[_MOUSE] = LAYOUT(\
___X___, ___X___, ___X___, ___X___, ___X___, ___X___,                   ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, \
_______, _______, _______, _______, _______, _______,                   _______, _______, KC_MS_U, _______, _______, _______, \
_______, _______, _______, _______, _______, _______,                   KC_WH_D, KC_MS_L, KC_MS_D, KC_MS_R, _______, _______, \
_______, _______, _______, _______, _______, _______, TG_MOUS, KC_BTN2, KC_WH_U, _______, _______, _______, _______, _______, \
                           _______, _______, _______, _______, KC_BTN1, _______, _______, _______),

[_MEDIA] = LAYOUT(\
___X___, ___X___, ___X___, ___X___, ___X___, ___X___,                   ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, \
___X___, ___X___, ___X___, ___X___, ___X___, ___X___,                   ___X___, ___X___, ___X___, KC_MPRV, KC_MPLY, KC_MNXT, \
___X___, ___X___, ___X___, ___X___, ___X___, ___X___,                   ___X___, ___X___, ___X___, KC_MUTE, KC_VOLD, KC_VOLU, \
___X___, ___X___, ___X___, ___X___, ___X___, ___X___, K_SLEEP, ___X___, ___X___, ___X___, ___X___, ___X___, KC_BRID, KC_BRIU, \
                           ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, ___X___),

[_FN] = LAYOUT(\
___X___, ___X___, ___X___, ___X___, ___X___, ___X___,                   ___X___, ___X___, ___X___, ___X___, ___X___, ___X___, \
_______, KC_GRV , KC_LCBR, KC_RCBR, KC_UNDS, KC_PLUS,                   _______, K_BACK , KC_UP  , K_FWD  , _______, _______, \
_______, KC_BSLS, KC_LPRN, KC_RPRN, KC_MINS, KC_EQL ,                   KC_WH_D, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, \
_______, _______, KC_LBRC, KC_RBRC, KC_GRV , KC_TILD, _______, _______, KC_WH_U, _______, K_LTAB , K_RTAB , K_LSCR , K_RSCR , \
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
    case _MEDIA:
      oled_write_ln_P(PSTR("     MEDIA     "), true);
      break;
    default:
      oled_write_ln_P(PSTR("               "), false);
  }
}

#endif
