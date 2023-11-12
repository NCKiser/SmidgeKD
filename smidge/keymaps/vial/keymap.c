/* Copyright 2021 Noah Kiser
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_S,  KC_T,   KC_R,   KC_A,
        KC_O,  KC_I,   KC_Y,   KC_E,
               KC_TAB, KC_SPC, KC_BSPC
    ),
    [1] = LAYOUT(
        _______, _______, _______, _______,
        _______, _______, _______, _______,
                 _______, _______, _______
    ),
    [2] = LAYOUT(
        _______, _______, _______, _______,
        _______, _______, _______, _______,
                 _______, _______, _______
    ),
    [3] = LAYOUT(
        _______, _______, _______, _______,
        _______, _______, _______, _______,
                 _______, _______, _______
    )

};

