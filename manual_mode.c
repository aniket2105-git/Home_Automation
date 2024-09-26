#include"header.h"
 int c1,c2;
void manual_mode(void){
			
	
				lcd_cmd(0xC0);
				lcd_str_tx(" #MANUAL MODE#");
				if(sw1==0){
					while(sw1==0);
						c1++;
				}
				if(c1%2!=0){
					
					IOCLR0=LED1;
				}
				else{
					IOSET0=LED1;
				}
				if(sw2==0){
					while(sw2==0);
						c2++;
				}
				if(c2%2!=0){
					
					IOCLR0=LED2;
				}
				else{
					IOSET0=LED2;
				}
				
}



