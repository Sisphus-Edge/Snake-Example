#ifndef OVER__H
#define OVER__H
#include "lcd.h"
BMP over={
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xFF,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xFF,
0xFF,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xFF,0xFF,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x07,0xFF,0xFF,0xFF,0xFF,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x00,0x01,0xE0,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x00,0x03,0xFF,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFC,0x00,0x03,0xFF,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x00,0x03,0xFF,0xFF,0xFF,0xFF,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x07,0xFF,0xFF,0xFF,0xFF,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x7F,0xFF,0xFF,0xFF,0xFF,0xF0,0x70,
0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x7F,0xFF,0xFF,0xFF,0xFF,0xF0,0xFE,0x00,0xFF,0xC0,0x00,0x00,0x00,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x7F,
0xFF,0xFF,0xFF,0xFF,0xF0,0xFF,0x81,0xFF,0x80,0x00,0x00,0x00,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x81,0xFE,0xB0,0x00,0x00,0x00,0x01,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xF0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC3,0xFF,0xB0,0x00,0x00,0x00,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xEF,0xFF,0xC0,
0x00,0x00,0x00,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x00,0x00,0x00,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF1,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xD0,0x00,0x00,0x00,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF1,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xD0,0x00,0x00,0x00,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xF1,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xD0,0x00,0x00,0x00,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF1,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x00,0x00,0x00,
0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF3,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0x00,0x00,0x00,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF3,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFE,0x00,0x00,0x00,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF3,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF3,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x80,0x00,0x00,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,0x00,0x00,0x01,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xF7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,0x00,0x00,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xD0,0x00,0x00,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xD0,0x00,0x00,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF7,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE0,0x00,0x00,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0x00,0x00,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xF7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE0,0x00,0x00,0x01,0xFF,0xF8,0x03,0xFF,0xFF,0xFF,0xF7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE0,0x00,0x00,
0x01,0xFF,0xF8,0x03,0xFF,0xFF,0xFF,0xF7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xEC,0x00,0x00,0x01,0xFF,0xF8,0x03,0xFF,0xFF,0xFF,0xF7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xEC,0x00,0x00,0x01,0xFF,0xF8,0x03,0xFF,0xFF,0xFF,0xF7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x00,0x00,0x00,0x01,0xFF,0xF8,0x03,0xFF,0xFF,0xFF,0xF7,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x20,0x00,0x00,0x01,0xFF,0xF8,0x03,0xFF,0xFF,0xFF,0xF7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x20,0x00,0x00,0x01,0xFF,0xF8,
0x03,0xFF,0xFF,0xFF,0xF7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x20,0x00,0x00,0x00,0xFF,0xF8,0x03,0xFF,0xFF,0xFF,0xF7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xE0,0x00,0x00,0x00,0xFF,0xF8,0x03,0xFF,0xFF,0xFF,0xF7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x20,0x00,0x00,0x00,0xFF,0xF8,0x03,0xFF,0xFF,0xFF,0xF7,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xB0,0x00,0x00,0x00,0xFF,0xF8,0x03,0xFF,0xFF,0xFF,0xF7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xB0,0x00,0x00,0x00,0xFF,0xF8,0x03,0xFF,0xFF,
0xFF,0xF7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xD0,0x00,0x00,0x00,0x7F,0xF8,0x03,0xFF,0xFF,0xFF,0xF7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,
0x00,0x7F,0xF8,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x00,0x00,0x00,0x7F,0xF8,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFC,0x00,0x00,0x00,0x7F,0xF8,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF9,0x00,0x00,0x00,0x7F,0xF8,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xEF,0xFF,0xFF,0xFF,0xFF,0xFD,0x00,0x00,0x00,0x03,0xF8,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xDF,0xFF,0xFF,0xFF,0xFF,0xFE,0x80,0x00,0x00,0x03,0xF8,
0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x80,0x00,0x00,0x03,0xF8,0x03,0xFF,0xFF,0xFF,0xFB,0xFF,0xFF,0xFF,0xFF,0xFF,0xBF,0xFF,0xFF,0xFF,0xFF,
0xFF,0x00,0x00,0x00,0x03,0xF8,0x03,0xFF,0xFF,0xFF,0xF8,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0x00,0x00,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0xF9,0xFF,0xFF,0xFF,0xFF,
0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x50,0x00,0x00,0x00,0x3F,0xFF,0xFF,0xFF,0xFF,0xF9,0xFF,0xFF,0xFF,0xFF,0xFC,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0x00,0x00,0x00,0x00,0x3F,0xFF,0xFF,0xFF,
0xFF,0xF9,0xFF,0xFF,0xFF,0xFF,0xF8,0x7F,0xFF,0xFF,0xFF,0xFF,0xF8,0x00,0x00,0x00,0x00,0x3F,0xFF,0xFF,0xFF,0xFF,0xFB,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0x00,0x00,
0x00,0x00,0x3F,0xFF,0xFF,0xFF,0xFF,0xF3,0xFF,0xFF,0xFF,0xFF,0xFF,0xDF,0xFF,0xFF,0xFF,0xFF,0xF8,0x00,0x00,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF3,0xFF,0xFF,0xFF,0xFF,0xFF,0xDF,0xFF,
0xFF,0xDF,0x7F,0xFD,0x40,0x00,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF7,0xFF,0xFF,0xFF,0xFF,0xFF,0xDF,0xFF,0xFF,0xE0,0xFF,0xFC,0x00,0x00,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE7,0xFF,
0xFF,0xFF,0xFF,0xFF,0xDF,0xFF,0xFF,0xE1,0xFF,0xFC,0x00,0x00,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE3,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF3,0xFF,0xFC,0x00,0x00,0x03,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xE3,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF7,0xFF,0xFC,0x00,0x00,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC3,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xF8,0x00,0x00,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC3,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF7,0xC0,0x00,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC3,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0x00,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x83,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0x00,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0x83,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xA0,0x00,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x83,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,0x00,
0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFB,0xF4,0x00,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0x00,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFB,0xC0,0x00,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFB,0x80,0x00,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0x00,0x01,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFA,0x00,0x00,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0x00,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x00,0x00,0x01,0xFF,0xFF,
0xFF,0xFF,0xFF,0xC0,0x00,0x00,0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFA,0xC0,0x00,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0x00,0x00,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0x10,0x00,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x10,0x00,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0x1F,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xF8,0x3F,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0x08,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0x3F,0xFF,0xFF,0xFF,0xFF,0xFD,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,
0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,0x00,0x00,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x1F,0xFF,0xFF,0xFF,0xFF,0xF8,0xFF,0xFF,0xFF,0xFF,0xFF,0xEF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x1F,0xFF,0xFF,0xFF,0xFF,0xF9,0xFF,
0xFF,0xFF,0xFF,0xF8,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0x00,0x00,0x00,0x1F,0xFF,0xFF,0xFF,0xFF,0xF9,0xFF,0xFF,0xFF,0xFF,0xF0,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xEC,0x00,0x00,0x00,0x1F,
0xFF,0xFF,0xFF,0xFF,0xFB,0xFF,0xFF,0xFF,0xFF,0xE0,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x00,0x00,0x00,0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0x3F,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFE,0x00,0x00,0x00,0x00,0x03,0xFF,0xFF,0xFF,0xFB,0xFF,0xFF,0xFF,0xFF,0x80,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x00,0x00,0x00,0x00,0x03,0xFF,0xFF,0xFF,0xFB,0xFF,0xFF,0xFF,0xE0,
0x00,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x00,0x00,0x00,0x00,0x03,0xFF,0xFF,0xFF,0xFB,0xFF,0xFF,0xFF,0xC0,0x00,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x00,0x00,0x00,0x00,0x03,0xFF,0xFF,
0xFF,0xF3,0xFF,0xFF,0xFF,0xC0,0x00,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x00,0x00,0x00,0x00,0x03,0xFF,0xFF,0xFF,0xF3,0xFF,0xFF,0xFF,0x80,0x00,0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x00,
0x07,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x0F,0xFE,0x00,0x07,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0x80,0x00,0x07,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFD,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0x00,0x07,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0x00,0x07,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFD,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0x00,0x07,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFC,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0x00,0x07,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xF0,0x00,0x07,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFD,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0x00,0x07,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFD,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0x00,0x07,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFD,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0x00,0x07,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFD,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0x00,0x07,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFD,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x00,
0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFD,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE0,0x00,0x07,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFD,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xC0,0x80,0x07,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF9,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE1,0x00,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF1,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE1,0x00,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF1,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE1,0x80,0x01,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xE1,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE1,0x80,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC1,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xE0,0x80,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC1,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE0,0x80,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0x01,0xFF,0xF0,0x1F,0xFF,
0xE3,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE0,0x80,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0x01,0xFF,0xF0,0x1F,0xFF,0xE3,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE0,0x80,0x00,0x00,0x00,0xFF,0xFF,0xFF,
0xFF,0x01,0xFF,0xF0,0x1F,0xFF,0xE3,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0x01,0xFF,0xF0,0x1F,0xFF,0xE3,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x00,
0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0x01,0xFF,0xF0,0x1F,0xFF,0xE3,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x80,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0x01,0xFF,0xF0,0x1F,0xFF,0xF3,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xF0,0x80,0x00,0x00,0x00,0x03,0xFF,0xFF,0xFF,0x01,0xFF,0xF0,0x1F,0xFF,0xF3,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x40,0x00,0x00,0x00,0x03,0xFF,0xFF,0xFF,0x01,0xFF,
0xF8,0x1F,0xFF,0xF3,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x40,0x00,0x00,0x00,0x03,0xFF,0xFF,0xFF,0x01,0xFF,0xF8,0x1F,0xFF,0xF3,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF1,0x80,0x00,0x00,0x00,
0x03,0xFF,0xFF,0xFF,0x01,0xFF,0xF8,0x1F,0xFF,0xF3,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0x01,0xFF,0xF0,0x1F,0xFF,0xC3,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0x1E,0x80,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0x01,0xFF,0xF8,0x1F,0xFF,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x0E,0x80,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFE,0x01,0xFF,0xF8,0x1F,0xFC,
0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,0x0E,0x80,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFC,0x01,0xFF,0xF8,0x1F,0xF0,0x01,0xFF,0xFF,0xFF,0xFF,0xF8,0x00,0x0F,0x40,0x00,0x00,0x01,0xFF,0xFF,0xFF,
0xF8,0x01,0xFF,0xF8,0x0F,0xC0,0x01,0xFF,0xFF,0xFF,0xFF,0xF8,0x00,0x0F,0x00,0x00,0x00,0x01,0xFF,0xFF,0xFF,0x87,0xFD,0xFF,0xF8,0x00,0x00,0x01,0xFF,0xFF,0xFF,0xFF,0x80,0x00,0x0F,0x00,
0x00,0x07,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x00,0x00,0x01,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x0F,0x80,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE0,0x00,0x00,0x01,0xFF,0xFF,
0xFF,0xFF,0x80,0x00,0x00,0x00,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,0x00,0x00,0x01,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,
0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xE0,0x00,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x00,0x00,0x00,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x80,0x00,0x0F,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFE,0x07,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x80,0x00,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0x80,0x00,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,0x00,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0x00,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,0x00,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x80,0x00,0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x80,0x00,
0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x80,0x00,0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFD,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFE,0x80,0x00,0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x00,0x00,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0x00,0x03,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE8,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x8F,0xFF,0xE8,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0xFF,0xFF,0xFF,0x8F,
0xFF,0xF0,0x00,0x00,0x00,0x03,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFC,0x0F,0xFF,0xF8,0x01,0xFF,0xFF,0xFF,0x8F,0xFF,0xF0,0x00,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFC,0x0F,0xFF,
0xF8,0x00,0xFF,0xFF,0xFF,0x8F,0xFF,0xF0,0x00,0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFC,0x0F,0xFF,0xF8,0x00,0xFF,0xFF,0xFF,0x8F,0xFF,0xF0,0x00,0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFE,0xFF,0xFC,0x0F,0xFF,0xF8,0x00,0xFF,0xFF,0xFF,0x8F,0xFF,0xE0,0x00,0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFC,0x0F,0xFF,0xF8,0x00,0xFF,0xFF,0xFF,0x87,0xFF,0xE0,0x00,
0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFC,0x0F,0xFF,0xF8,0x00,0x7F,0xFF,0xFF,0x87,0xFF,0xE0,0x00,0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFC,0x0F,0xFF,0xF8,0x00,0x7F,
0xFF,0xFF,0x87,0xFF,0xE0,0x00,0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x07,0xFF,0xF8,0x00,0x7F,0xFF,0xFF,0x07,0xFF,0xC0,0x00,0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFC,0x07,0xFF,0xF8,0x00,0x3F,0xFF,0xFF,0x07,0xFF,0xC0,0x00,0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFC,0x07,0xFF,0xFC,0x00,0x3F,0xFF,0xFF,0x07,0xFF,0xC0,0x00,0x1F,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x07,0xFF,0xF8,0x00,0x3F,0xFF,0xFF,0x07,0xFF,0xC0,0x00,0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x07,0xFF,0xFC,0x00,0x3F,0xFF,0xFE,0x07,
0xFF,0x80,0x00,0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x07,0xFF,0xFC,0x00,0x1F,0xFF,0xFF,0xFF,0xFE,0x80,0x00,0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x07,0xFF,
0xFC,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0x00,0x00,0x1F,0xFF,0xFF,0xFF,0xFF,0xE0,0x0F,0xFF,0xFF,0xFC,0x07,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF4,0x00,0x00,0x1F,0xFF,0xC0,0x07,0xFC,0x00,
0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xEC,0x00,0x00,0x1F,0xFC,0x00,0x07,0xFC,0x00,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF4,0x00,0x00,
0x1F,0xFC,0x00,0x07,0xFC,0x00,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE0,0x00,0x00,0x1F,0xFC,0x00,0x07,0xFC,0x00,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xA0,0x00,0x00,0x1F,0xFC,0x00,0x07,0xFC,0x00,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE0,0x00,0x00,0x1F,0xFC,0x00,0x07,0xFC,0x00,0x0F,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x00,0x00,0x1F,0xFC,0x00,0x07,0xFC,0x00,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0x00,0x00,0x1F,0xFC,0x00,
0x07,0xFC,0x00,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0x00,0x00,0x1F,0xFC,0x00,0x07,0xFC,0x00,0x0F,0xFF,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xC0,0x00,0x00,0x1F,0xFC,0x00,0x07,0xFC,0x00,0x0F,0xFF,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0x00,0x00,0x1F,0xFC,0x00,0x07,0xFC,0x00,0x0F,0xFF,0x03,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0x00,0x00,0x1F,0xFC,0x00,0x07,0xFC,0x00,0x0F,0xFF,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF1,0xFF,0x00,0x00,0x00,0x1F,0xFC,0x00,0x07,0xFC,0x00,
0x0F,0xFF,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0x00,0x00,0x00,0x00,0x1F,0xFC,0x00,0x07,0xFC,0x00,0x0F,0xFF,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x00,0x00,0x00,0x00,
0x1F,0xFC,0x00,0x07,0xFC,0x00,0x0F,0xFF,0x00,0xFF,0xFF,0xFF,0x9F,0xFE,0x00,0x7F,0xF0,0x00,0x00,0x00,0x00,0x1F,0xFC,0x00,0x07,0xFC,0x00,0x0F,0xFF,0x00,0x1F,0xFF,0xFF,0x00,0x00,0x00,
0x7F,0xE0,0x00,0x00,0x00,0x00,0x3F,0xFC,0x00,0x07,0xFC,0x00,0x0F,0xFF,0x00,0x07,0xC0,0x00,0x00,0x00,0x00,0x3F,0xC0,0x00,0x00,0x00,0x00,0x3F,0xFC,0x00,0x03,0xFC,0x00,0x0F,0xFF,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xC0,0x00,0x00,0x00,0x00,0x3F,0xFC,0x00,0x03,0xFC,0x00,0x0F,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x80,0x00,0x00,0x00,0x00,0x3F,0xFC,0x00,
0x03,0xFC,0x00,0x0F,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x00,0x00,0x3F,0xFC,0x00,0x00,0x00,0x00,0x0F,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x3F,0xFC,0x00,0x00,0x00,0x00,0x07,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFC,0x00,0x00,0x00,0x00,0x03,0xFF,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFC,0x00,0x00,0x00,0x00,0x01,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xF8,0x00,0x00,0x00,0x00,
0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x3F,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00
},
4179,
199,
166
};

#endif
