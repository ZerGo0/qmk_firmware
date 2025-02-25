 /* Copyright HarshitGoel96 2022
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

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.


enum custom_layers {
  _PLOVER
};

enum custom_keycodes {
  PLOVER
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_PLOVER] = LAYOUT_split_3x5_4(
        KC_Q,   KC_W,     KC_E,     KC_R, XXXXXXX,    KC_U, KC_I, KC_O,     KC_P,     KC_LBRC,
        KC_A,   KC_S,     KC_D,     KC_F, XXXXXXX,    KC_J, KC_K, KC_L,     KC_SCLN,  KC_QUOT,
        XXXXXXX,XXXXXXX,  XXXXXXX,  KC_G, KC_T,       KC_Y, KC_H, XXXXXXX,  XXXXXXX,  XXXXXXX,
                  XXXXXXX, KC_C, KC_V, XXXXXXX,         XXXXXXX,   KC_N,  KC_M,    XXXXXXX
    )
};