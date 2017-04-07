
22017/02/04加入了定时器，并且是在485运行，要注意切换延时，否则还没发送完，就切换为接收了。。。实验是正确的
3\ 2017/02/23 9600 发给电脑大时隙 可以正常发送 。。。
a中断是单步后才开始进入的 
b 162,000,000 dsp当做字符串处理。。。计算波特率出差了。。。。。
4电脑单独发  dsp可以收到了
5收发
6、公式输入2400000.实际2.4923兆，已经可以接到数据

//    	  if((TimerFlag>TimeRange[2])&&(TimerFlag<=TimeRange[3]))
//    	     	   {
//    	     		   TTPRecive;
//    	     	       TtpRec(uartTtp);
//    	     	       receivedown[2].Flag=ReciveValue[2];
//    	     	       receivedown[2].TimId=ReciveValue[3];
//    	     	       receivedown[2].FraId=ReciveValue[4];
//    	     	       receivedown[2].ToAdd=ReciveValue[5];
//    	     	       receivedown[2].LenDat=ReciveValue[6];
//    	     	       receivedown[2].FirCrc=ReciveValue[7];
//
//    	     	       length=(int)(ReciveValue[6]);
//    	     	       for(i=0;i<length;i++)
//    	     	       {
//    	     	    	   j=i+8;
//    	     	    	   receivedown[2].SenDat[i]=ReciveValue[j];
//    	     	       }
//    	     	       j++;
//    	     	       receivedown[2].EndCrc[0]=ReciveValue[j];
//    	     	       j++;
//    	     	       receivedown[2].EndCrc[1]=ReciveValue[j];
//    	     	       j++;
//    	     	       receivedown[2].EndCrc[2]=ReciveValue[j];
//    	     	       j++;
//    	     	       receivedown[2].EndCrc[3]=ReciveValue[j];
//    	     	        // receivedown[TimeSlice1].Crc32Check;
//    	     	        receivedown[2].Crc8Check=CRC8(&receivedown[2],6);
//    	     	        CheckLength=length+4;
//    	     	        receivedown[2].Crc32Check=CRC32(&receivedown[2],CheckLength);
//    	     	       // for(i=0; i<55; i++)
//    	     	        //   {
//    	     	        // 	  ReciveValue[i]=0x00;
//    	     	        //   }
//    	     	         while(TimerFlag<=TimeRange[3])     {};
//    	     	   }
//      	   if((TimerFlag>TimeRange[3])&&(TimerFlag<=TimeRange[4]))
//        	     	   {
//        	     		   TTPRecive;
//        	     	       TtpRec(uartTtp);
//        	     	       receivedown[3].Flag=ReciveValue[2];
//        	     	       receivedown[3].TimId=ReciveValue[3];
//        	     	       receivedown[3].FraId=ReciveValue[4];
//        	     	       receivedown[3].ToAdd=ReciveValue[5];
//        	     	       receivedown[3].LenDat=ReciveValue[6];
//        	     	       receivedown[3].FirCrc=ReciveValue[7];
//
//        	     	       length=(int)(ReciveValue[6]);
//        	     	       for(i=0;i<length;i++)
//        	     	       {
//        	     	    	   j=i+8;
//        	     	    	   receivedown[3].SenDat[i]=ReciveValue[j];
//        	     	       }
//        	     	       j++;
//        	     	       receivedown[3].EndCrc[0]=ReciveValue[j];
//        	     	       j++;
//        	     	       receivedown[3].EndCrc[1]=ReciveValue[j];
//        	     	       j++;
//        	     	       receivedown[3].EndCrc[2]=ReciveValue[j];
//        	     	       j++;
//        	     	       receivedown[3].EndCrc[3]=ReciveValue[j];
//        	     	        // receivedown[TimeSlice1].Crc32Check;
//        	     	        receivedown[3].Crc8Check=CRC8(&receivedown[3],6);
//        	     	        CheckLength=length+4;
//        	     	        receivedown[3].Crc32Check=CRC32(&receivedown[3],CheckLength);
//        	     	       // for(i=0; i<55; i++)
//        	     	        //   {
//        	     	        // 	  ReciveValue[i]=0x00;
//        	     	        //   }
//        	     	         while(TimerFlag<=TimeRange[4])     {};
//        	     	   }
//      	 if((TimerFlag>TimeRange[4])&&(TimerFlag<=TimeRange[5]))
//      	        	     	   {
//      	        	     		   TTPRecive;
//      	        	     	       TtpRec(uartTtp);
//      	        	     	       receivedown[4].Flag=ReciveValue[2];
//      	        	     	       receivedown[4].TimId=ReciveValue[3];
//      	        	     	       receivedown[4].FraId=ReciveValue[4];
//      	        	     	       receivedown[4].ToAdd=ReciveValue[5];
//      	        	     	       receivedown[4].LenDat=ReciveValue[6];
//      	        	     	       receivedown[4].FirCrc=ReciveValue[7];
//
//      	        	     	       length=(int)(ReciveValue[6]);
//      	        	     	       for(i=0;i<length;i++)
//      	        	     	       {
//      	        	     	    	   j=i+8;
//      	        	     	    	   receivedown[4].SenDat[i]=ReciveValue[j];
//      	        	     	       }
//      	        	     	       j++;
//      	        	     	       receivedown[4].EndCrc[0]=ReciveValue[j];
//      	        	     	       j++;
//      	        	     	       receivedown[4].EndCrc[1]=ReciveValue[j];
//      	        	     	       j++;
//      	        	     	       receivedown[4].EndCrc[2]=ReciveValue[j];
//      	        	     	       j++;
//      	        	     	       receivedown[4].EndCrc[3]=ReciveValue[j];
//      	        	     	        // receivedown[TimeSlice1].Crc32Check;
//      	        	     	        receivedown[4].Crc8Check=CRC8(&receivedown[4],6);
//      	        	     	        CheckLength=length+4;
//      	        	     	        receivedown[4].Crc32Check=CRC32(&receivedown[4],CheckLength);
//      	        	     	       // for(i=0; i<55; i++)
//      	        	     	        //   {
//      	        	     	        // 	  ReciveValue[i]=0x00;
//      	        	     	        //   }
//      	        	     	         while(TimerFlag<=TimeRange[5])     {};
//      	        	     	   }
//      	 	 if((TimerFlag>TimeRange[5])&&(TimerFlag<=TimeRange[6]))
//      	        	     	   {
//      	        	     		   TTPRecive;
//      	        	     	       TtpRec(uartTtp);
//      	        	     	       receivedown[5].Flag=ReciveValue[2];
//      	        	     	       receivedown[5].TimId=ReciveValue[3];
//      	        	     	       receivedown[5].FraId=ReciveValue[4];
//      	        	     	       receivedown[5].ToAdd=ReciveValue[5];
//      	        	     	       receivedown[5].LenDat=ReciveValue[6];
//      	        	     	       receivedown[5].FirCrc=ReciveValue[7];
//
//      	        	     	       length=(int)(ReciveValue[6]);
//      	        	     	       for(i=0;i<length;i++)
//      	        	     	       {
//      	        	     	    	   j=i+8;
//      	        	     	    	   receivedown[5].SenDat[i]=ReciveValue[j];
//      	        	     	       }
//      	        	     	       j++;
//      	        	     	       receivedown[5].EndCrc[0]=ReciveValue[j];
//      	        	     	       j++;
//      	        	     	       receivedown[5].EndCrc[1]=ReciveValue[j];
//      	        	     	       j++;
//      	        	     	       receivedown[5].EndCrc[2]=ReciveValue[j];
//      	        	     	       j++;
//      	        	     	       receivedown[5].EndCrc[3]=ReciveValue[j];
//      	        	     	        // receivedown[TimeSlice1].Crc32Check;
//      	        	     	        receivedown[5].Crc8Check=CRC8(&receivedown[3],6);
//      	        	     	        CheckLength=length+4;
//      	        	     	        receivedown[5].Crc32Check=CRC32(&receivedown[3],CheckLength);
//      	        	     	       // for(i=0; i<55; i++)
//      	        	     	        //   {
//      	        	     	        // 	  ReciveValue[i]=0x00;
//      	        	     	        //   }
//      	        	     	         while(TimerFlag<=TimeRange[6])     {};
//      	        	     	   }
//      	 	 	 if((TimerFlag>TimeRange[6])&&(TimerFlag<=TimeRange[7]))
//      	        	     	   {
//      	        	     		   TTPRecive;
//      	        	     	       TtpRec(uartTtp);
//      	        	     	       receivedown[6].Flag=ReciveValue[2];
//      	        	     	       receivedown[6].TimId=ReciveValue[3];
//      	        	     	       receivedown[6].FraId=ReciveValue[4];
//      	        	     	       receivedown[6].ToAdd=ReciveValue[5];
//      	        	     	       receivedown[6].LenDat=ReciveValue[6];
//      	        	     	       receivedown[6].FirCrc=ReciveValue[7];
//
//      	        	     	       length=(int)(ReciveValue[6]);
//      	        	     	       for(i=0;i<length;i++)
//      	        	     	       {
//      	        	     	    	   j=i+8;
//      	        	     	    	   receivedown[6].SenDat[i]=ReciveValue[j];
//      	        	     	       }
//      	        	     	       j++;
//      	        	     	       receivedown[6].EndCrc[0]=ReciveValue[j];
//      	        	     	       j++;
//      	        	     	       receivedown[6].EndCrc[1]=ReciveValue[j];
//      	        	     	       j++;
//      	        	     	       receivedown[6].EndCrc[2]=ReciveValue[j];
//      	        	     	       j++;
//      	        	     	       receivedown[6].EndCrc[3]=ReciveValue[j];
//      	        	     	        // receivedown[TimeSlice1].Crc32Check;
//      	        	     	        receivedown[6].Crc8Check=CRC8(&receivedown[6],6);
//      	        	     	        CheckLength=length+4;
//      	        	     	        receivedown[6].Crc32Check=CRC32(&receivedown[6],CheckLength);
//      	        	     	       // for(i=0; i<55; i++)
//      	        	     	        //   {
//      	        	     	        // 	  ReciveValue[i]=0x00;
//      	        	     	        //   }
//      	        	     	         while(TimerFlag<=TimeRange[7])     {};
//      	        	     	   }
//      	 if((TimerFlag>TimeRange[7])&&(TimerFlag<=TimeRange[8]))
//      	        	     	   {
//      	        	     		   TTPRecive;
//      	        	     	       TtpRec(uartTtp);
//      	        	     	       receivedown[7].Flag=ReciveValue[2];
//      	        	     	       receivedown[7].TimId=ReciveValue[3];
//      	        	     	       receivedown[7].FraId=ReciveValue[4];
//      	        	     	       receivedown[7].ToAdd=ReciveValue[5];
//      	        	     	       receivedown[7].LenDat=ReciveValue[6];
//      	        	     	       receivedown[7].FirCrc=ReciveValue[7];
//
//      	        	     	       length=(int)(ReciveValue[6]);
//      	        	     	       for(i=0;i<length;i++)
//      	        	     	       {
//      	        	     	    	   j=i+8;
//      	        	     	    	   receivedown[7].SenDat[i]=ReciveValue[j];
//      	        	     	       }
//      	        	     	       j++;
//      	        	     	       receivedown[7].EndCrc[0]=ReciveValue[j];
//      	        	     	       j++;
//      	        	     	       receivedown[7].EndCrc[1]=ReciveValue[j];
//      	        	     	       j++;
//      	        	     	       receivedown[7].EndCrc[2]=ReciveValue[j];
//      	        	     	       j++;
//      	        	     	       receivedown[7].EndCrc[3]=ReciveValue[j];
//      	        	     	        // receivedown[TimeSlice1].Crc32Check;
//      	        	     	        receivedown[7].Crc8Check=CRC8(&receivedown[7],6);
//      	        	     	        CheckLength=length+4;
//      	        	     	        receivedown[7].Crc32Check=CRC32(&receivedown[7],CheckLength);
//      	        	     	       // for(i=0; i<55; i++)
//      	        	     	        //   {
//      	        	     	        // 	  ReciveValue[i]=0x00;
//      	        	     	        //   }
//      	        	     	         while(TimerFlag<=TimeRange[8])     {};
//      	        	     	   }

02_24_12/19

02_24、按照时隙可以接受到数据
_清华数据长度没有定义，位置是按照4byte，转速是按照2byte.
0225这边发送，另一个板子模仿驱动器，在数组5--6接到数据，然后在0--1 发回数据单腿控制器接到数据存储到结构体5中
0308、加入了uart1中断
