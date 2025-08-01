/* menu_settings.h */
#ifndef MENU_SET_H
#define MENU_SET_H

#include "main.h"
#include "lcd.h"
#include "string.h"
#include "pid.h"
#include "moving_average.h"
#include "hysteresis.h"
#include "type_packers.h"
#include "flash.h"
#include "stusb4500.h"
#include "buzzer.h"
#include "debug.h"
#include <math.h>
#include <stdio.h>
#include <float.h>
#include <stdbool.h>

/* Function to left align a string from float */
void left_align_float(char* str, float number, int8_t len);

// ==== Display parameter string in menu ====
// Universal output of menu item value: symbolic or numeric with alignment
void display_menu_value(uint16_t index, float value, uint8_t selected, uint8_t editing,
                        uint16_t x, uint16_t y, uint16_t colors_text, uint16_t colors_background);

// menu parameter constraints
void normalize_param(uint16_t index);

void settings_menu();

#endif // MENU_SET_H
