/* Copyright 2017 REPLACE_WITH_YOUR_NAME
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
#include "xd75.h"

// Layer shorthand
#define _ML 0

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

#if defined(MIDI_ENABLE) && defined(MIDI_ADVANCED)
 [_ML] = LAYOUT_ortho_5x15(
  MI_Gs_1,  MI_A_1,  MI_As_1, MI_B_1,  MI_C_2,  MI_Cs_2,  MI_D_2,   MI_Ds_2,   MI_E_2,   MI_F_2,  MI_Fs_2,    MI_G_2,   MI_Gs_2,   MI_A_2,    MI_As_2,
  MI_Ds_1,  MI_E_1,  MI_F_1,  MI_Fs_1, MI_G_1,  MI_Gs_1,  MI_A_1,   MI_As_1,   MI_B_1,   MI_C_2,  MI_Cs_2,    MI_D_2,   MI_Ds_2,   MI_E_2,    MI_F_2,
  MI_As,    MI_B,    MI_C_1,  MI_Cs_1, MI_D_1,  MI_Ds_1,  MI_E_1,   MI_F_1,    MI_Fs_1,  MI_G_1,  MI_Gs_1,    MI_A_1,   MI_As_1,   MI_B_1,    MI_C_2,
  MI_F,     MI_Fs,   MI_G,    MI_Gs,   MI_A,    MI_As,    MI_B,     MI_C_1,    MI_Cs_1,  MI_D_1,  MI_Ds_1,    MI_E_1,   MI_F_1,    MI_Fs_1,   MI_G_1,
  MI_C,     MI_Cs,   MI_D,    MI_Ds,   MI_E,    MI_F,     MI_Fs,    MI_G,      MI_Gs,    MI_A,    MI_As,      MI_B,     MI_C_1,    MI_Cs_1,   MI_D_1
 )
#endif
};

