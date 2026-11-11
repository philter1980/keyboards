// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layers {
    _BASE,
    _CURSOR
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


    [_BASE] = LAYOUT(
        KC_NO,   KC_5,    KC_4,    KC_3,    KC_2,    KC_1,    KC_ESC,
        KC_NO,   KC_T,    KC_R,    KC_E,    KC_W,    KC_Q,    KC_PGUP,
        KC_NO,   KC_G,    KC_F,    KC_D,    KC_S,    KC_A,    KC_PGDN,
        KC_NO,   KC_B,    KC_V,    KC_C,    KC_X,    KC_Z,    KC_LSFT,
        KC_SPC,  MO(_CURSOR),  KC_NO,   KC_LALT, KC_LCTL, KC_DEL,  KC_NO
    ),

    [_CURSOR] = LAYOUT(
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_BSLS,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_TAB,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_NO,  KC_DEL,
        KC_SPC,  KC_NO,  KC_NO,   KC_LALT,  KC_LCTL,   KC_DEL,   KC_NO
    )
};
