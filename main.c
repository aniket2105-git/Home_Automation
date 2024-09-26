#include"header.h"
extern int f,c1,c2;
int main(){
		
	IODIR0|=LED;
	IOSET0|=LED;
	lcd_init();
	uart_init(9600);
	ext_config();
	while(1){
		lcd_str_tx("HOME AUTOMATION");	
		
//===================================== AUTO MODE =====================================
		
		while(f==0){	
			   IOSET0=LED3;			
			 auto_mode();
			if(f==1){
					lcd_cmd(0xC0);
    			lcd_str_tx("                     ");
				break;
			}
		}
		
//===================================== MANUAL MODE =====================================
		
		while(f==1){
			IOCLR0=LED3;
				manual_mode();
				if(f==0){
					lcd_cmd(0xC0);
    			lcd_str_tx("                     ");
				break;
			}
		}
	}
}
