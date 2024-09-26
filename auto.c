#include"header.h"
extern int f;
void auto_mode(void){
			char c;
				
			
				lcd_cmd(0xC0);
				lcd_str_tx("  #AUTO MODE#");
				uart_str_tx("\r\nA.ON LED1\r\n");
				uart_str_tx("B.OFF LED1\r\n");
				uart_str_tx("C.ON LED2\r\n");
				uart_str_tx("D.OFF LED2\r\n");
				uart_str_tx("M.MODE CHANGE\r\n");
				c=uart_rx();
				uart_tx(c);
				switch(c){
					case'b':
						IOSET0=LED1;
						break;
					case'a':
						IOCLR0=LED1;
						break;
					case'd':
						IOSET0=LED2;
						break;
					case'c':
						IOCLR0=LED2;
						break;
					case'm':
						f^=1;
						break;
					default:
						uart_str_tx("\r\nWarning: Wrong Choice\r\n");
						break;
						
				}
	}	