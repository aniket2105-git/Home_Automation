#include"header.h"

void uart_init(unsigned int bRate){
	unsigned int a[]={15,60,30,15,15},pclk=a[VPBDIV]*1000000,res=pclk/(16*bRate);
	PINSEL0|=0x5;
	U0LCR=0x83;
	U0DLL=res&0xFF;
	U0DLM=(res>>8)&0xFF;
	U0LCR=0x3;
}
void uart_tx(unsigned char data){
	U0THR=data;
	while(THRE==0);
}
unsigned char uart_rx(void){
	while(RBR==0);
	return U0RBR;
}
void uart_str_tx(char *p){
	while(*p){
		U0THR=*p;
	while(THRE==0);
		p++;
	}
}


