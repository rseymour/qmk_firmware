#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define _ML 0

#define _______ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  #if defined(MIDI_ENABLE) && defined(MIDI_ADVANCED)
  [_ML] = LAYOUT_ortho_3x10(
    MI_As, MI_B,  MI_C_1, MI_Cs_1, MI_D_1, MI_Ds_1,   MI_E_1,    MI_F_1,  MI_Fs_1,  MI_G_1,
    MI_F,  MI_Fs, MI_G,   MI_Gs,   MI_A,   MI_As,     MI_B,      MI_C_1,  MI_Cs_1,  MI_D_1,
    MI_C,  MI_Cs, MI_D,   MI_Ds,   MI_E,   MI_F,      MI_Fs,     MI_G,    MI_Gs,    MI_A
  )
  #endif
};
