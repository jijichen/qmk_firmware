#include "5x6.h"


#ifdef SSD1306OLED
void led_set_kb(uint8_t usb_led) {
    // put your keyboard LED indicator (ex: Caps Lock LED) toggling code here
    led_set_user(usb_led);
}
#endif

void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder (on the left) */
        if (clockwise) {
          tap_code(KC_VOLU);
        } else {
          tap_code(KC_VOLD);
        }
    } else if (index == 1) { /* Second encoder (on the right) */
        if (clockwise) {
            tap_code(KC_PGUP);
        } else {
            tap_code(KC_PGDN);
        }
    }
}

void encoder_update_kb(uint8_t index, bool clockwise) {
    encoder_update_user(index, clockwise);
}

void matrix_init_kb(void) {
	matrix_init_user();
};
