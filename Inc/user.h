/*
 * user.h
 *
 *  Created on: 2017年4月6日
 *      Author: LQ
 */

#ifndef USER_
#define USER_

/******
#define SYSCLK_1_FREQ     (312000000)
#define SYSCLK_2_FREQ     (SYSCLK_1_FREQ/2)
#define UART_TTP_FREQ       (SYSCLK_2_FREQ)
#define TTP_Baud    1000000//1250000  //2000000  // 2400000  //
#define Referencetime_4us  96
#define TimerPeriod_EXTEND 1
#define TimerPeriod  Referencetime_4us*TimerPeriod_EXTEND
//extern int Time[100];

extern unsigned short TimeRange[21];
extern volatile unsigned int TimeSlice1;
extern volatile unsigned int TimeSlice2;
extern unsigned int count;
extern  volatile signed int TestPosition1,TestPosition2,TestPosition3,TestPosition4;
#define UART0_Send   GPIO_SET_DATA45|=0x04000000
#define UART0_Recive  GPIO_CLR_DATA45|=0x04000000
#define UART1_Send   GPIO_SET_DATA23|=0x00004000
#define UART1_Recive  GPIO_CLR_DATA23|=0x00004000

#define UART2_Send    GPIO_SET_DATA45|=0x00200002  //高电平是发送数据
#define UART2_Recive GPIO_CLR_DATA45|=0x00200002

#if 0
#define TTPSend UART1_Send
#define TTPRecive UART1_Recive
#define TtpId 1
#elif 1
#define TTPSend UART2_Send
#define TTPRecive UART2_Recive
#define TtpId 2
#elif 0
#define TTPSend UART0_Send
#define TTPRecive UART0_Recive
#define TtpId 0
#endif

extern Uint8 WorkFlag;
extern Uint8 WorkMode;
extern Uint8 WorKMode;
extern Uint8 MoterMode;
extern Uint8 DownOrder[55];
extern Int32 SineN;
extern volatile Uint8 ReciveValue[55];
extern volatile signed int  CurrentOrder1, CurrentOrder2, CurrentOrder3, CurrentOrder4;
extern volatile signed int  LastOrder1, LastOrder2, LastOrder3, LastOrder4;
#define LED_REDOPEN  GPIO_OUT_DATA45&=~(1<<5);//4_5置零
#define LED_REDCLOSE  GPIO_OUT_DATA45|=(1<<5);   //4_5置一

#define LED_BULEOPEN  GPIO_OUT_DATA45&=~(1<<9);//4_9置零
#define LED_BULECLOSE  GPIO_OUT_DATA45|=(1<<9);   //4_9置一

#define LED_YELLOWOPEN  GPIO_OUT_DATA45&=~(1<<11);//4_9置零
#define LED_YELLOWCLOSE  GPIO_OUT_DATA45|=(1<<11);   //4_9置一



// interrupt  --------------------------------------------------
#define IMH (*(unsigned int *)0x019c0000)
#define IML (*(unsigned int *)0x019c0004)
cregister unsigned int IER,IFR,CSR,ICR,ISTP,ISR;
//#define INTmux1 (*(unsigned int *)0x01800140)
#define INTmux1 (*(unsigned int *)0x01800104)
#define INTmux2 (*(unsigned int *)0x01800108)

#define EVTCLR0 (*(unsigned int *)0x01800040)
#define EVTCLR1 (*(unsigned int *)0x01800044)
#define EVTCLR2 (*(unsigned int *)0x01800044)
******/

#endif /* USER_ */
