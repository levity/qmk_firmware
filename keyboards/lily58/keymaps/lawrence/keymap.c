#include QMK_KEYBOARD_H

#define _BASE    0
#define _COLMAK  1
#define _FN      2
#define _MOUSE   3
#define _NUMPAD  4

#define MO_FN    MO(2)
#define TG_COLM  TG(1)
#define TG_MOUS  TG(3)
#define TG_NUMP  TG(4)

#define K_BACK   LGUI(KC_LBRC)
#define K_FWD    LGUI(KC_RBRC)
#define K_LTAB   SGUI(KC_LBRC)
#define K_RTAB   SGUI(KC_RBRC)
#define K_SH_GR  LSFT_T(KC_GRV)
#define K_SH_BS  RSFT_T(KC_BSLS)
#define ___X___  KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT(\
KC_GESC, KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                   KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_EQL , \
KC_TAB,  KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,                   KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_MINS, \
KC_LCTL, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   ,                   KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT, \
K_SH_GR, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , TG_COLM, KC_BSPC, KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, K_SH_BS, \
                           KC_LALT, MO_FN  , KC_LGUI, KC_SPC , KC_ENT , MO_FN  , KC_RGUI, KC_RALT \
),

  [_COLMAK] = LAYOUT(\
KC_GESC, KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                   KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_EQL , \
KC_TAB,  KC_Q   , KC_W   , KC_F   , KC_P   , KC_G   ,                   KC_J   , KC_L   , KC_U   , KC_Y   , KC_SCLN, KC_MINS, \
KC_LCTL, KC_A   , KC_R   , KC_S   , KC_T   , KC_D   ,                   KC_H   , KC_N   , KC_E   , KC_I   , KC_O   , KC_QUOT, \
KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , TG_COLM, KC_BSPC, KC_K   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, K_SH_BS, \
                           KC_LALT, MO_FN  , KC_LGUI, KC_SPC , KC_ENT , MO_FN  , KC_RGUI, KC_RALT \
),

  [_FN] = LAYOUT(\
KC_GRV , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,                   KC_F6  , KC_F7  , KC_F8  , KC_LCBR, KC_RCBR, ___X___, \
_______, _______, _______, KC_UP  , _______, _______,                   ___X___, ___X___, KC_UP  , KC_LBRC, KC_RBRC, KC_BSLS, \
_______, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______,                   ___X___, KC_LEFT, KC_DOWN, KC_RGHT, ___X___, ___X___, \
_______, _______, _______, _______, _______, _______, _______, _______, TG_NUMP, TG_MOUS, K_LTAB , K_RTAB , ___X___, ___X___, \
                           _______, _______, _______, _______, _______, _______, _______, _______ \
),

  [_MOUSE] = LAYOUT(\
TG_MOUS, _______, _______, _______, _______, _______,                   KC_VOLU, KC_MPRV, KC_MPLY, KC_MNXT, ___X___, ___X___, \
_______, _______, _______, KC_UP  , _______, _______,                   KC_VOLD, ___X___, KC_MS_U, ___X___, ___X___, ___X___, \
_______, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______,                   KC_WH_D, KC_MS_L, KC_MS_D, KC_MS_R, ___X___, ___X___, \
_______, _______, _______, _______, _______, _______, _______, KC_BTN2, KC_WH_U, ___X___, K_LTAB , K_RTAB , ___X___, _______, \
                           _______, _______, _______, _______, KC_BTN1, KC_ACL2, KC_ACL0, TG_MOUS \
),

  [_NUMPAD] = LAYOUT(\
TG_NUMP, ___X___, ___X___, ___X___, ___X___, ___X___,                   KC_PSLS, KC_P7  , KC_P8  , KC_P9  , ___X___, ___X___, \
_______, ___X___, ___X___, KC_UP  , ___X___, ___X___,                   KC_PAST, KC_P4  , KC_P5  , KC_P6  , ___X___, ___X___, \
_______, ___X___, KC_LEFT, KC_DOWN, KC_RGHT, ___X___,                   KC_PMNS, KC_P1  , KC_P2  , KC_P3  , ___X___, ___X___, \
_______, _______, _______, _______, _______, _______, _______, _______, KC_PPLS, KC_PEQL, KC_P0  , KC_PDOT, ___X___, ___X___, \
                           _______, _______, _______, _______, _______, KC_LPRN, KC_RPRN, TG_NUMP \
),
};

// static void render_logo(void) {
//   static const char PROGMEM qmk_logo[] = {
//     0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x94,
//     0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 0xB0, 0xB1, 0xB2, 0xB3, 0xB4,
//     0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE, 0xCF, 0xD0, 0xD1, 0xD2, 0xD3, 0xD4, 0x00
//   };
//
//   oled_write_P(qmk_logo, false);
// }

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
    case _COLMAK:
      oled_write_ln_P(PSTR("     COLMK     "), true);
      break;
    default:
      oled_write_ln_P(PSTR("               "), false);
  }
}

#endif
