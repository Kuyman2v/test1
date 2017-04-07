/*
 *  Copyright 2008 by Spectrum Digital Incorporated.
 *  All rights reserved. Property of Spectrum Digital Incorporated.
 */

/*
 *  RTC header file
 *
 */
#include "C6747.h"
#ifndef RTC_
#define RTC_

/* ------------------------------------------------------------------------ *
 *  RTC Definitions                                                         *
 * ------------------------------------------------------------------------ */

#define RTC_BASE                        0x01C23000

#define RTC_SECS                *( volatile Uint32* )( RTC_BASE + 0x00 ) // Seconds Register
#define RTC_MINS                *( volatile Uint32* )( RTC_BASE + 0x04 ) // Minutes Register
#define RTC_HOUR                *( volatile Uint32* )( RTC_BASE + 0x08 ) // Hours Register
#define RTC_DAYS                *( volatile Uint32* )( RTC_BASE + 0x0C ) // Days Register
#define RTC_MONS                *( volatile Uint32* )( RTC_BASE + 0x10 ) // Months Register
#define RTC_YRS                 *( volatile Uint32* )( RTC_BASE + 0x14 ) // Years Register
#define RTC_WKS                 *( volatile Uint32* )( RTC_BASE + 0x18 ) // Day of the Week Register
#define RTC_ASEC                *( volatile Uint32* )( RTC_BASE + 0x20 ) // Seconds Alarm Register
#define RTC_AMIN                *( volatile Uint32* )( RTC_BASE + 0x24 ) // Minutes Alarm Register
#define RTC_AHOUR               *( volatile Uint32* )( RTC_BASE + 0x28 ) // Hours Alarm Register
#define RTC_ADAY                *( volatile Uint32* )( RTC_BASE + 0x2C ) // Days Alarm Register
#define RTC_AMONS               *( volatile Uint32* )( RTC_BASE + 0x30 ) // Months Alarm Register
#define RTC_AYRS                *( volatile Uint32* )( RTC_BASE + 0x34 ) // Years Alarm Register
#define RTC_CTRL                *( volatile Uint32* )( RTC_BASE + 0x40 ) // RTC control register
#define RTC_STAT                *( volatile Uint32* )( RTC_BASE + 0x44 ) // RTC status register
#define RTC_INEN                *( volatile Uint32* )( RTC_BASE + 0x48 ) // Interupt enable register
#define RTC_COMPL               *( volatile Uint32* )( RTC_BASE + 0x4C ) // Compensation (LSB) Register
#define RTC_COMPH               *( volatile Uint32* )( RTC_BASE + 0x50 ) // Compensation (MSB) Register
#define RTC_OSC                 *( volatile Uint32* )( RTC_BASE + 0x54 ) // Oscillator Register
#define RTC_SRCH0               *( volatile Uint32* )( RTC_BASE + 0x60 ) // Scratch 0 (General-Purpose) Register
#define RTC_SRCH1               *( volatile Uint32* )( RTC_BASE + 0x64 ) // Scratch 1 (General-Purpose) Register
#define RTC_SRCH2               *( volatile Uint32* )( RTC_BASE + 0x68 ) // Scratch 2 (General-Purpose) Register
#define RTC_KICK0               *( volatile Uint32* )( RTC_BASE + 0x6C ) // Kick 0 (Write Protect) Register
#define RTC_KICK1               *( volatile Uint32* )( RTC_BASE + 0x70 ) // Kick 1 (Write Protect) Register


/* ------------------------------------------------------------------------ *
 *  RTC strucures                                                           *
 * ------------------------------------------------------------------------ */

typedef struct C6747_time{			                 // Structure for Time
    Uint8 ss;//second
    Uint8 mm;//minute
    Uint8 hh;//hour
    Uint8 dd;//day
    Uint8 mn;//month
    Uint8 yy;//year
    Uint8 ww;
} C6747_time;

extern Int16 C6747_RTC_init( );
extern Int16 C6747_RTC_getTime(C6747_time *newtime);
extern Int16 C6747_RTC_setTime(C6747_time *newtime);
extern Int16 C6747_RTC_timerStart (Int16 timerinit);
extern Int16 C6747_RTC_timerStart (Int16 timerinit);
extern C6747_time starttime;
extern C6747_time newtime;
#endif
