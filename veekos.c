// Copyright 2026 Veekos
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H

// Matrix reference (from schematic, ROW2COL diode direction):
//        COL0   COL1   COL2   COL3   COL4   COL5
// ROW0   SW1    SW5    SW9    SW12   SW16   SW19
// ROW1   SW2    SW6    SW10   SW13   SW17   SW20
// ROW2   SW3    SW7    SW11   SW14   SW18   SW21
// ROW3   SW4    SW8    --     SW15   --     --
//
// Each entry below is ONE electrical switch (one matrix cell), listed in the
// exact order of LAYOUT_veekos_21 in keyboard.json: row0 col0->col5, then
// row1, row2, row3. A 2u/wide keycap still corresponds to a single switch
// here -- only the *cap* is larger, not the matrix footprint.
//
// !!! PLACEHOLDER LEGEND !!!
// I do not have your actual keycap legends (numpad? nav cluster? macros?).
// Replace the keycodes below (SW1..SW21 comments show which physical switch
// each one is) with whatever your 21 keycaps actually say. Everything else
// (matrix wiring, order) is correct per your schematic.

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_veekos_21(
        /* SW1  */ KC_P7,
        /* SW5  */ KC_P8,
        /* SW9  */ KC_P9,
        /* SW12 */ KC_PSLS,
        /* SW16 */ KC_PAST,
        /* SW19 */ KC_BSPC,

        /* SW2  */ KC_P4,
        /* SW6  */ KC_P5,
        /* SW10 */ KC_P6,
        /* SW13 */ KC_PMNS,
        /* SW17 */ KC_NUM,
        /* SW20 */ KC_TAB,

        /* SW3  */ KC_P1,
        /* SW7  */ KC_P2,
        /* SW11 */ KC_P3,
        /* SW14 */ KC_PPLS,
        /* SW18 */ KC_PDOT,
        /* SW21 */ KC_PENT,

        /* SW4  */ KC_P0,
        /* SW8  */ KC_PEQL,
        /* SW15 */ KC_MPLY
    )
};
