/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

#define PRODUCT_ID      0x3536
#define DEVICE_VER      0x0001
#define PRODUCT         Dactyl-Manuform (5x6)

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 12
#define MATRIX_COLS 6

// wiring of each half
#define MATRIX_COL_PINS { D4, C6, D7, E6, B4, B5 }
#define MATRIX_ROW_PINS { F6, F7, B1, B3, B2, B6 }

#define DIODE_DIRECTION COL2ROW

// WS2812 RGB LED strip input and number of LEDs
#define RGB_DI_PIN D3
#define RGBLED_NUM 15

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

// Encoders
#define ENCODERS_PAD_A { D5 }
#define ENCODERS_PAD_B { B7 }

// #define ENCODERS_PAD_A_RIGHT { B7 }
// #define ENCODERS_PAD_B_RIGHT { D5 }

#define ENCODER_RESOLUTION 4
// #define ENCODER_RESOLUTION 1 // Use this for debugging

#define RGBLIGHT_SPLIT true
// #define RGBLIGHT_MODE_BREATHING 1
// #define RGBLIGHT_MODE_RAINBOW_MOOD 2
// #define RGBLIGHT_MODE_RAINBOW_SWIRL 3
// #define RGBLIGHT_EFFECT_SNAKE true
#define RGBLIGHT_ANIMATIONS
// #define RGBLIGHT_EFFECT_BREATHING true
