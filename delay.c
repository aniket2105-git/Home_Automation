#include"header.h"
 
 void ms_delay(unsigned int ms){
	 unsigned int a[]={15,60,30,15,15},pclk=a[VPBDIV]*1000;
	 T0PC=0;
	 T0PR=pclk-1;
	 T0TC=0;
	 T0TCR=1;
	 while(T0TC<ms);
	 T0TCR=0;	 
 }

 
 
 
 
 
 
 
 
 


 