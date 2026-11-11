// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layers {
    _BASE,
    _CURSOR
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_BASE] = LAYOUT(
        KC_NO,   KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
        KC_NO,   KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_SLSH,
        KC_NO,   KC_H,    KC_J,    KC_K,    KC_L,    KC_NO,   KC_ENT,
        KC_NO,   KC_N,    KC_M,    KC_COMM, KC_UP, KC_MINS, KC_RSFT,
        KC_SPC,  MO(_CURSOR), KC_LEFT, KC_DOWN, KC_RGHT, KC_NO,   KC_NO
    ),

    [_CURSOR] = LAYOUT(
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_BSPC,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_LBRC, KC_RBRC,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_DOT,  KC_LABK, KC_DEL,
        KC_SPC,  KC_NO, KC_RALT,   KC_RCTL,   KC_RIGHT_GUI,   KC_NO,   KC_NO
    )
};
