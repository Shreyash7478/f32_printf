/*
Shreyash H. Turkar
2020
*/

#pragma once

#include<stdio.h>
#include<stdarg.h>
#include<inttypes.h>

/*
parameter one
+------------+--------------+-------------+-------------+
| Text Color |   BG Color   |      F0     |      F1     |
+------------+--------------+-------------+-------------+
0            7              15            23            31
*/


//Foreground or Text Color
#define F_BLACK   (uint32_t)(30<<24)
#define F_RED     (uint32_t)(31<<24)
#define F_GREEN   (uint32_t)(32<<24)
#define F_YELLOW  (uint32_t)(33<<24)
#define F_BLUE    (uint32_t)(34<<24)
#define F_MAGENTA (uint32_t)(35<<24)
#define F_CYAN    (uint32_t)(36<<24)
#define F_WHITE   (uint32_t)(37<<24)

//Background Color
#define B_BLACK   (uint32_t)(40<<16)
#define B_RED     (uint32_t)(41<<16)
#define B_GREEN   (uint32_t)(42<<16)
#define B_YELLOW  (uint32_t)(43<<16)
#define B_BLUE    (uint32_t)(44<<16)
#define B_MAGENTA (uint32_t)(45<<16)
#define B_CYAN    (uint32_t)(46<<16)
#define B_WHITE   (uint32_t)(47<<16)

//Formating
#define F0_BOLD      (uint32_t)(1<<16)
#define F0_UNDERLINE (uint32_t)(4<<16)
#define F0_INVERSE   (uint32_t)(7<<16)

//Extra Formating
#define F1_BOLD      (uint32_t)(1)
#define F1_UNDERLINE (uint32_t)(4)
#define F1_INVERSE   (uint32_t)(7)


//Internal Mechanism
#define __GETFCOLOR__(A)  (A>>24 & 0xff)
#define __GETBCOLOR__(A)   (A>>16 & 0xff)
#define __GETF0__(A)       (A>>8 & 0xff)
#define __GETF1__(A)       (A & 0xff)
#define EMPTY (uint8_t)0


//Text Color, Backgrund color & 2 formating options
void f32_printf(uint32_t,char *,...);
