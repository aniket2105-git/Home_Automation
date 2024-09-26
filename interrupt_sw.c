#include"header.h"
 int f ;
void ext_sw1_inter()__irq{
		f^=1;
		EXTINT=1;
		VICVectAddr=0;	
}
void ext_config(void){
	
	EXTMODE=1;
	EXTPOLAR=0;	
	VICIntSelect=0;
	VICVectCntl0=14|(1<<6);
	VICVectAddr0=(unsigned int)ext_sw1_inter;
	VICIntEnable|=(1<<14);
	PINSEL1|=1;
}




