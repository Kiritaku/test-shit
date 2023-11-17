// Copyright 2023 Kiritaku (@Kiritaku)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = LAYOUT(
		KC_TRNS,
		KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
		KC_P4,   KC_P5,   KC_P6,   KC_PEQL,
		KC_P1,   KC_P2,   KC_P3,   KC_PENT,
		KC_P0,   KC_TRNS, KC_PDOT
	),

};


/* `ENCODER_MAP_ENABLE = yes` must be added to the rules.mk at the KEYMAP level. See QMK docs. */
/* Remove the following code if you do not enable it in your keymap (e.g. default keymap). */
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
	// Define CCW & CW rotation keys for layout level
	[0] = { ENCODER_CCW_CW(KC_VOLU, KC_VOLD) }
};
#endif

#if defined(OLED_ENABLE)

// Draw to OLED
bool oled_task_user(void) {
    // Set cursor position
    oled_set_cursor(0, 1);
    
	// Write a funny
	oled_write("Hello", false);

    return false;
};
#endif