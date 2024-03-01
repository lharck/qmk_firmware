/* Copyright 2015-2021 Jack Humbert
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

enum planck_layers {
 _QWERTY,
 _RIGHT,
 _LEFT,
 _GAME,
 _GAME_TWO,
 _TRI,
};


#define L_LEFT MO(_LEFT_LAYER)
#define L_RIGHT MO(_RIGHT_LAYER)

// #define COMBO_ONLY_FROM_LAYER _QWERTY
// const uint16_t PROGMEM test_combo1[] = {KC_X, KC_V, COMBO_END};
// combo_t key_combos[] = {
//     COMBO(test_combo1, TG(_GAME)),
// };



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTY] = LAYOUT_planck_grid(
 _______, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, _______,
 _______, LGUI_T(KC_A), LALT_T(KC_S), LCTL_T(KC_D), LSFT_T(KC_F), KC_G, KC_H, RSFT_T(KC_J), RCTL_T(KC_K), LALT_T(KC_L), RGUI_T(KC_SCLN), _______,
 _______, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, _______,
 _______, _______, _______, LT(_LEFT, KC_TAB), KC_ENT, _______, _______, KC_SPACE, LT(_RIGHT, KC_BSPC), _______, _______, _______
), 

[_LEFT] = LAYOUT_planck_grid(
 _______, KC_ESC, KC_7, KC_8, KC_9, KC_INS, _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END, _______
 _______, LGUI_T(KC_CAPS), LALT_T(KC_4), LCTL_T(KC_5), LSFT_T(KC_6), KC_DEL, KC_TILDE, RSFT_T(KC_LEFT), RCTL_T(KC_DOWN), LALT_T(KC_UP), RGUI_T(KC_RIGHT), _______
 _______, KC_TAB, KC_1, KC_2, KC_3, KC_0, _______, _______, _______, _______, _______, _______
 _______, _______, _______, _______, MO(_TRI), _______ ,_______, MO(_TRI), _______, _______, _______, _______
),

[_RIGHT] = LAYOUT_planck_grid(
 KC_GRAVE, KC_LBRC, KC_RBRC, KC_LCBR, KC_RCBR, _______, _______, KC_CIRC, KC_LPRN, KC_RPRN, KC_DLR, KC_PERC, 
 KC_ASTR, KC_MINUS, KC_PLUS, KC_EQUAL, _______,  _______, _______, _______, KC_AMPR, KC_PIPE, KC_EXLM, KC_QUOT,
 KC_HASH, KC_UNDS, KC_AT, KC_TILDE, KC_BSLS,  _______, _______,  _______, _______, _______, _______, _______,
 _______, _______, _______, MO(_TRI), _______,  _______, _______,  _______, MO(_TRI), _______, _______, _______
),

[_GAME] = LAYOUT_planck_grid(
 KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, _______
 KC_LALT, KC_A, KC_S, KC_D, KC_F, _______, _______, KC_H, KC_J, KC_K, KC_L, KC_SCLN,
 KC_LSFT, KC_Z, KC_X, KC_C, KC_V, _______, _______, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH,
 KC_LCTL, _______, _______, LT(_LEFT, KC_SPACE), LT(_GAME_TWO, KC_SPACE), _______, _______, KC_SPACE, KC_BSPC, _______, _______, _______
),

[_GAME_TWO] = LAYOUT_planck_grid(
 KC_T, KC_Y, KC_U, KC_I, KC_O, _______, _______, _______, _______, _______, _______, _______,
 KC_G, KC_H, KC_J, KC_K, KC_L, _______, _______, _______, _______, _______, _______, _______,
 KC_B, KC_N, KC_M, _______, KC_P, _______, _______, _______, _______, _______, _______, _______,
 _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
),

[_TRI] = LAYOUT_planck_grid(
 QK_BOOT, KC_F7, KC_F8, KC_F9, KC_F10, _______, _______, _______, _______, _______, _______, _______,
 _______, KC_F4, KC_F5, KC_F6, KC_F11, _______, _______, _______, _______, _______, _______, _______,
 _______, KC_F1, KC_F2, KC_F3, KC_F12, _______, _______, _______, _______, _______, _______, _______,
 _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
)
};

