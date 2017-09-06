/*********************************************************************
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
*                           www.segger.com                           *
**********************************************************************
*                                                                    *
* C-file generated by                                                *
*                                                                    *
*        Bitmap Converter for emWin V5.22.                           *
*        Compiled Jul  4 2013, 12:18:24                              *
*        (c) 1998 - 2013 Segger Microcontroller GmbH && Co. KG       *
*                                                                    *
**********************************************************************
*                                                                    *
* Source file: _shake                                                *
* Dimensions:  64 * 58                                               *
* NumColors:   4                                                     *
*                                                                    *
**********************************************************************
*/

#include <stdlib.h>

#include "GUI.h"

#ifndef GUI_CONST_STORAGE
  #define GUI_CONST_STORAGE const
#endif

extern GUI_CONST_STORAGE GUI_BITMAP bm_shake;

/*********************************************************************
*
*       Palette
*
*  Description
*    The following are the entries of the palette table.
*    The entries are stored as a 32-bit values of which 24 bits are
*    actually used according to the following bit mask: 0xBBGGRR
*
*    The lower   8 bits represent the Red   component.
*    The middle  8 bits represent the Green component.
*    The highest 8 bits represent the Blue  component.
*/
static GUI_CONST_STORAGE GUI_COLOR _Colors_shake[] = {
  0x000000, 0x555555, 0xAAAAAA, 0xFFFFFF
};

static GUI_CONST_STORAGE GUI_LOGPALETTE _Pal_shake = {
  4,  // Number of entries
  0,  // No transparency
  &_Colors_shake[0]
};

static GUI_CONST_STORAGE unsigned char _ac_shake[] = {
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFA, 0xAA, 0xBF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEA, 0x56, 0xAF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFE, 0x94, 0x00, 0x56, 0xFF, 0xFF, 0xFF, 0xFA, 0x40, 0x00, 0x16, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xE5, 0x00, 0x55, 0x00, 0x6F, 0xFF, 0xFF, 0x94, 0x01, 0x55, 0x00, 0x6F, 0xFF, 0xFF,
  0xFF, 0xFF, 0x40, 0x5A, 0xFF, 0xA5, 0x06, 0xFF, 0xFE, 0x41, 0x6B, 0xFF, 0xA5, 0x06, 0xFF, 0xFF,
  0xFF, 0xF9, 0x06, 0xBF, 0xFF, 0xFE, 0x41, 0xBF, 0xE4, 0x16, 0xFF, 0xFF, 0xFE, 0x40, 0xBF, 0xFF,
  0xFF, 0xE4, 0x1B, 0xFF, 0xFF, 0xFF, 0xE4, 0x2F, 0x90, 0x6F, 0xFF, 0xFF, 0xFF, 0xE4, 0x2F, 0xFF,
  0xFF, 0x90, 0xBF, 0xFF, 0xFF, 0xFF, 0xF9, 0x06, 0x42, 0xFF, 0xFF, 0xFF, 0xFF, 0xF9, 0x0B, 0xFF,
  0xFF, 0x42, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x40, 0x0B, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x46, 0xFF,
  0xFE, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xD0, 0x2F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x91, 0xFF,
  0xFD, 0x1B, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x90, 0xBF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0xBF,
  0xF8, 0x2F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x42, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF4, 0x7F,
  0xE4, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xF9, 0x0B, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x2F,
  0xE0, 0xBF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE4, 0x2F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD, 0x1F,
  0xD1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x90, 0xBF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x1F,
  0xD1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x42, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x1B,
  0x82, 0xFF, 0xFF, 0xFF, 0xFF, 0xF9, 0x0B, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x4B,
  0x82, 0xFF, 0xFF, 0xFF, 0xFF, 0xE4, 0x2F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x4B,
  0x82, 0xFF, 0xFF, 0xFF, 0xFF, 0x90, 0xBF, 0xFF, 0xFF, 0xFE, 0x6F, 0xFF, 0xFF, 0xFF, 0xFF, 0x4B,
  0x82, 0xFF, 0xFF, 0xFF, 0xFE, 0x42, 0xFF, 0xFF, 0xFF, 0xF8, 0x1B, 0xFF, 0xFF, 0xFF, 0xFF, 0x4B,
  0x82, 0xFF, 0xFF, 0xFF, 0xF9, 0x0B, 0xFF, 0xFF, 0xFF, 0xE0, 0x06, 0xFF, 0xFF, 0xFF, 0xFF, 0x4B,
  0x91, 0xFF, 0xFF, 0xFF, 0xE4, 0x2F, 0xFF, 0xFF, 0xFF, 0x41, 0x81, 0xBF, 0xFF, 0xFF, 0xFE, 0x1B,
  0xD1, 0xFF, 0xFF, 0xFF, 0x90, 0xBF, 0xFF, 0xFF, 0xFD, 0x07, 0xE0, 0x6F, 0xFF, 0xFF, 0xFE, 0x1F,
  0xE0, 0xBF, 0xFF, 0xFF, 0x81, 0xBF, 0xFF, 0xFF, 0xE4, 0x1F, 0xF8, 0x1B, 0xFF, 0xFF, 0xFD, 0x2F,
  0xE4, 0x7F, 0xFF, 0xFF, 0xE0, 0x6F, 0xFF, 0xFF, 0x90, 0xBF, 0xFE, 0x06, 0xFF, 0xFF, 0xF8, 0x6F,
  0xF4, 0x2F, 0xFF, 0xFF, 0xF8, 0x06, 0xFF, 0xF9, 0x02, 0xFF, 0xFF, 0x81, 0xBF, 0xFF, 0xE4, 0x7F,
  0xF8, 0x1F, 0xFF, 0xFF, 0xEA, 0x40, 0x55, 0x50, 0x1B, 0xFF, 0xFF, 0xE0, 0x6F, 0xFF, 0xD1, 0xBF,
  0xFD, 0x0B, 0xFF, 0xFE, 0x41, 0xA5, 0x00, 0x05, 0xBF, 0xFF, 0xFF, 0xF8, 0x1B, 0xFF, 0x82, 0xFF,
  0xFF, 0x42, 0xFF, 0xF8, 0x10, 0x6F, 0xAA, 0xAF, 0xFF, 0xFF, 0xFF, 0xFE, 0x06, 0xFE, 0x07, 0xFF,
  0xFF, 0x81, 0xBF, 0xE0, 0xA9, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xAF, 0xFF, 0x41, 0xF9, 0x1B, 0xFF,
  0xFF, 0xE0, 0x6F, 0x92, 0xFE, 0x0B, 0xFF, 0xFF, 0xFF, 0xFF, 0x4B, 0xFF, 0xD0, 0x64, 0x6F, 0xFF,
  0xFF, 0xF8, 0x1A, 0x47, 0xFF, 0x45, 0xBF, 0xFF, 0xFF, 0xFF, 0x42, 0xFF, 0xF8, 0x01, 0xBF, 0xFF,
  0xFF, 0xFE, 0x05, 0x1F, 0xFE, 0x00, 0x2F, 0xFF, 0xFF, 0xFF, 0xD0, 0xBF, 0xFD, 0x02, 0xFF, 0xFF,
  0xFF, 0xFF, 0x80, 0x6F, 0xF9, 0x19, 0x0B, 0xFF, 0xFF, 0xFF, 0xE4, 0x2F, 0xFF, 0x42, 0xFF, 0xFF,
  0xFF, 0xFF, 0xD1, 0xBF, 0xE4, 0x7F, 0x47, 0xFF, 0xFE, 0xBF, 0xF9, 0x0B, 0xFF, 0xD0, 0xBF, 0xFF,
  0xFF, 0xFF, 0x86, 0xFF, 0xD1, 0xFF, 0x82, 0xFF, 0xF9, 0x6F, 0xFE, 0x42, 0xFF, 0xF4, 0x7F, 0xFF,
  0xFF, 0xFE, 0x0B, 0xFF, 0x46, 0xFF, 0x81, 0x6F, 0xF9, 0x1B, 0xFF, 0x90, 0xBF, 0xF8, 0x2F, 0xFF,
  0xFF, 0xFD, 0x1F, 0xFE, 0x1B, 0xFF, 0x40, 0x07, 0xFE, 0x46, 0xFF, 0xE4, 0x2F, 0xF8, 0x2F, 0xFF,
  0xFF, 0xFD, 0x2F, 0xF9, 0x2F, 0xFD, 0x06, 0x91, 0xFF, 0x91, 0xBF, 0xF9, 0x0B, 0xF4, 0x6F, 0xFF,
  0xFF, 0xFD, 0x1F, 0xE4, 0xBF, 0xF8, 0x2F, 0xE1, 0xBF, 0xE4, 0x6F, 0xFE, 0x41, 0x90, 0xBF, 0xFF,
  0xFF, 0xFE, 0x46, 0x91, 0xFF, 0xE0, 0x7F, 0xE4, 0x6B, 0xF9, 0x1B, 0xFF, 0x80, 0x01, 0xFF, 0xFF,
  0xFF, 0xFF, 0x80, 0x06, 0xFF, 0x91, 0xFF, 0xE0, 0x06, 0xFE, 0x46, 0xFF, 0xD0, 0x1B, 0xFF, 0xFF,
  0xFF, 0xFF, 0xE5, 0x0B, 0xFE, 0x46, 0xFF, 0x90, 0x50, 0xBF, 0x91, 0xBF, 0xD1, 0xBF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0x4B, 0xFD, 0x1B, 0xFF, 0x46, 0xF8, 0x2F, 0xE4, 0x6F, 0x91, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0x46, 0xE4, 0x2F, 0xFD, 0x1B, 0xFD, 0x2F, 0xF9, 0x1A, 0x42, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0x91, 0x50, 0xBF, 0xF8, 0x2F, 0xFD, 0x2F, 0xFE, 0x00, 0x0B, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xE4, 0x01, 0xFF, 0xE0, 0xBF, 0xF8, 0x1F, 0xFF, 0x41, 0x6F, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFE, 0x82, 0xFF, 0x91, 0xFF, 0xE0, 0x06, 0xFF, 0x46, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xD1, 0xFE, 0x46, 0xFF, 0x91, 0x81, 0xBE, 0x47, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xE1, 0xB9, 0x1B, 0xFF, 0x47, 0xE4, 0x55, 0x1B, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xF4, 0x00, 0x2F, 0xFD, 0x1F, 0xF8, 0x00, 0x6F, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x40, 0x7F, 0xF4, 0x6F, 0xFD, 0x06, 0xBF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xA4, 0x7F, 0xE0, 0x2F, 0xFD, 0x1B, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x6F, 0x91, 0x0B, 0xF8, 0x2F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD, 0x15, 0x0A, 0x41, 0x90, 0x6F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x40, 0x1F, 0xD0, 0x01, 0xBF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEA, 0xBF, 0xF9, 0x5A, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
};

GUI_CONST_STORAGE GUI_BITMAP bm_shake = {
  64, // xSize
  58, // ySize
  16, // BytesPerLine
  2, // BitsPerPixel
  _ac_shake,  // Pointer to picture data (indices)
  &_Pal_shake   // Pointer to palette
};

/*************************** End of file ****************************/
