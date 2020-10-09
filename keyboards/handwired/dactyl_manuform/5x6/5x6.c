#include "5x6.h"


#ifdef SSD1306OLED
void led_set_kb(uint8_t usb_led) {
    // put your keyboard LED indicator (ex: Caps Lock LED) toggling code here
    led_set_user(usb_led);
}
#endif

void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            // tap_code(KC_PGDN);
          tap_code(KC_R);
        } else {
          tap_code(KC_L);
            // tap_code(KC_PGUP);
        }
    } else if (index == 1) { /* Second encoder */
        if (clockwise) {
            tap_code(KC_U);

            // tap_code(KC_DOWN);
        } else {
            tap_code(KC_D);

            // tap_code(KC_UP);
        }
    }
}

void encoder_update_kb(uint8_t index, bool clockwise) {
    encoder_update_user(index, clockwise);
}

void matrix_init_kb(void) {

    // // green led on
    // DDRD |= (1<<5);
    // PORTD &= ~(1<<5);

    // // orange led on
    // DDRB |= (1<<0);
    // PORTB &= ~(1<<0);

	matrix_init_user();
};

