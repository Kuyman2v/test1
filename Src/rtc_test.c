/*
 *  Copyright 2008 by Spectrum Digital Incorporated.
 *  All rights reserved. Property of Spectrum Digital Incorporated.
 */

/*
 *  Real Time Counter (RTC) Test
 *
 */
#include "C6747.h"
#include "C6747_rtc.h"
#include "stdio.h"

C6747_time starttime;
C6747_time newtime = { // Values of time to be set
    0x08,                 // Calender value for seconds
    0x31,                 // Calender value for minutes
    0x17,                 // Calender value for hours
    0x11,                 // Calender value for days 
    0x02,                 // Calender value for months 
    0x09,                 // Calender value for years
    0x03,                 // Calender value for weeks
};

/* ------------------------------------------------------------------------ *
 *                                                                          *
 *  rtc_test( )                                                             *
 *      Setting and retrieving time values from RTC                              *
 *                                                                          *
 * ------------------------------------------------------------------------ */
Int16 rtc_test( )
{
   

}

