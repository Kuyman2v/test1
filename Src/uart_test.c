/*
 *  Copyright 2008 by Spectrum Digital Incorporated.
 *  All rights reserved. Property of Spectrum Digital Incorporated.
 */

/*
 *  UART Test
 *
 */

#include "C6747_uart.h"

#define	uartcs		*(Uint8 *)0x64000030

Uint8 uart_rx[256];
Uint8 uart_tx[256];

/* ------------------------------------------------------------------------ *
 *                                                                          *
 *  uart_test( )                                                            *
 *      Simple UART loopback test.                                          *
 *      Will write then read back the byte sent to the RS232 connector.     *
 *                                                                          *
 * ------------------------------------------------------------------------ */
void UARTINT()
{
	PINMUX8 = 0x20000000;//UART2_RXD
	PINMUX9 = 0x00000002;//UART2_TXD
	PINMUX11 = 0x00001100;//UART1_TXD,UART1_RXD
	PINMUX18 = 0x00000010;//EMA_WE
	PINMUX13 = 0x11000000;// EMA_D[1],EMA_D[0]
	PINMUX14 = 0x11111111;//EMA_D[9]-EMA_D[2]
	PINMUX15 = 0x11000011;//EMA_A[1]-EMA_A[0], EMA_D[11],EMA_D[10]
	PINMUX16 = 0x00111111;//EMA_A[7]-EMA_A[2]
	PINMUX17 = 0x20000000;//EMA_CS[4]
}

Int16 uart_test(Int16 NUM)
{

    Int16 i, errors = 0;
    UART_Handle uart0;

    Int32 timeout = 0;
    Int32 test_timeout = 0x100000;

    /* Open Uart Handle */
    uart0 = C6747_UART_open( NUM, 115200 );

    if ( uart0 == ( UART_Handle )-1 )
        return -1;

    /* Setup buffers */
    for ( i = 0 ; i < 0x100 ; i++ )
    {
        uart_tx[i] = i;
        uart_rx[i] = 0;
    }

    /* UART Test */
    for ( i = 64 ; i < 96 ; i++ )
    {
        /* uart_tx */
        timeout = test_timeout;
        while( C6747_UART_xmtReady( uart0 ) )  // Wait for uart_tx ready
        {
            if ( timeout-- < 0 )
                return -1;
        }

        C6747_UART_putChar( uart0, uart_tx[i] );    // Write 1 byte


        /* uart_rx */
        timeout = test_timeout;
        while( C6747_UART_rcvReady( uart0 ) )  // Wait for uart_rx ready
        {
            if ( timeout-- < 0 )
                return -1;
        }

        C6747_UART_getChar( uart0, &uart_rx[i] );   // Read 1 byte

    }

    /* Compare uart_tx & uart_rx buffers */
    for ( i = 64 ; i < 96 ; i++ )
        if ( uart_tx[i] != uart_rx[i] )
            errors++;

    return errors;
}
