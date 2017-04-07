/*
 *  Copyright 2008 by Spectrum Digital Incorporated.
 *  All rights reserved. Property of Spectrum Digital Incorporated.
 */

/*
 *  LED implementation
 *
 */

//#include "C6747.h"
//#include "C6747_led.h"
//#include "C6747_gpio.h"
#include "includes.h"
/* ------------------------------------------------------------------------ *
 *                                                                          *
 *  _LED_init( )                                                            *
 *                                                                          *
 *      Clear LEDs                                                          *
 *                                                                          *
 * ------------------------------------------------------------------------ */
Int16 C6747_LED_init( )
{
    /* Enable LED Outputs */
    C6747_GPIO_setDirection( 12, GPIO_OUT );  // DS1
    C6747_GPIO_setDirection( 13, GPIO_OUT );  // DS2
    C6747_GPIO_setDirection( 14, GPIO_OUT );  // DS3
    C6747_GPIO_setDirection( 15, GPIO_OUT );  // DS4

    /* Turn OFF all LEDs */
    return C6747_LED_setall( 0x0F );
}

/* ------------------------------------------------------------------------ *
 *                                                                          *
 *  _LED_getall( pattern )                                                  *
 *                                                                          *
 *      Get all   LED values                                                *
 *                                                                          *
 * ------------------------------------------------------------------------ */
Int16 C6747_LED_getall( Uint16 *pattern )
{
    Uint16 retval;

	retval = C6747_GPIO_getInput(12)  |
	    (C6747_GPIO_getInput(13) << 1) |
		(C6747_GPIO_getInput(14) << 2) |
		(C6747_GPIO_getInput(15) << 3);

    *pattern = retval;

    return 0;
}

/* ------------------------------------------------------------------------ *
 *                                                                          *
 *  _LED_setall( pattern )                                                  *
 *                                                                          *
 *      Set all LED values                                                  *
 *                                                                          *
 * ------------------------------------------------------------------------ */
Int16 C6747_LED_setall( Uint16 pattern )
{
    if (pattern & 0x01)
        C6747_GPIO_setOutput( 12, 1);
    else
        C6747_GPIO_setOutput( 12, 0);

    if (pattern & 0x02)
        C6747_GPIO_setOutput( 13, 1);
    else
        C6747_GPIO_setOutput( 13, 0);

    if (pattern & 0x04)
        C6747_GPIO_setOutput( 14, 1);
    else
        C6747_GPIO_setOutput( 14, 0);

    if (pattern & 0x08)
        C6747_GPIO_setOutput( 15, 1);
    else
        C6747_GPIO_setOutput( 15, 0);

    return 0;
}

/* ------------------------------------------------------------------------ *
 *                                                                          *
 *  _LED_on( number )                                                       *
 *                                                                          *
 *      number <- LED# [0:3]                                                *
 *                                                                          *
 * ------------------------------------------------------------------------ */
Int16 C6747_LED_on( Uint16 number )
{
    Uint16 led_state;
    Uint16 led_bit_on;

    led_bit_on = 1 << ( 3 - number );

    /*
     *  Get then set LED
     */
    if ( C6747_LED_getall( &led_state ) )
        return -1;

    led_state = led_state & ( ~led_bit_on );

    if ( C6747_LED_setall( led_state ) )
        return -1;

    return 0;
}

/* ------------------------------------------------------------------------ *
 *                                                                          *
 *  _LED_off( number )                                                      *
 *                                                                          *
 *      number <- LED# [0:7]                                                *
 *                                                                          *
 * ------------------------------------------------------------------------ */
Int16 C6747_LED_off( Uint16 number )
{
    Uint16 led_state;
    Uint16 led_bit_off;

    led_bit_off = 1 << ( 3 - number );

    /*
     *  Get then set LED
     */
    if ( C6747_LED_getall( &led_state ) )
        return -1;

    led_state = led_state | led_bit_off;

    if ( C6747_LED_setall( led_state ) )
        return -1;

    return 0;
}

/* ------------------------------------------------------------------------ *
 *                                                                          *
 *  _LED_toggle( number )                                                   *
 *                                                                          *
 *      number <- LED# [0:7]                                                *
 *                                                                          *
 * ------------------------------------------------------------------------ */
Int16 C6747_LED_toggle( Uint16 number )
{
    Uint16 led_state;
    Uint16 new_led_state;
    Uint16 led_bit_toggle;


    led_bit_toggle = 1 << ( 3 - number );

    /*
     *  Get then set LED
     */
    if ( C6747_LED_getall( &led_state ) )
        return -1;

    if ( ( led_state & led_bit_toggle ) == 0 )
        new_led_state = led_state | led_bit_toggle;     /* Turn OFF */
    else
        new_led_state = led_state & ~led_bit_toggle;    /* Turn ON */

    if ( C6747_LED_setall( new_led_state ) )
        return -1;

    return 0;
}
