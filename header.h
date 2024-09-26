#include <LPC21xx.H>
//----------------------------- DELAY -----------------------------

void ms_delay(unsigned int ms);

//----------------------------- SWITCH -----------------------------

#define sw1 ((IOPIN0>>14)&1)
#define sw2 ((IOPIN0>>15)&1)
#define sw3 ((IOPIN0>>16)&1)

//----------------------------- LED -----------------------------

#define LED1 (1<<17)
#define LED2 (1<<18)
#define LED3 (1<<19)
#define LED (7<<17)



//----------------------------- LCD -----------------------------

#define RS (1<<17)
#define RW (1<<18)
#define EN (1<<19)

void lcd_data(unsigned char data);
void lcd_cmd(unsigned char cmd);
void lcd_init(void);
void lcd_str_tx(char *p);


//----------------------------- UART -----------------------------

#define THRE ((U0LSR>>5)&1)
#define RBR (U0LSR&1)

void uart_init(unsigned int bRate);
void uart_tx(unsigned char data);
unsigned char uart_rx(void);
void uart_str_tx(char *p);

//----------------------------- INTRRUPT -----------------------------

void ext_config(void);

//----------------------------- MAIN -----------------------------

void auto_mode(void);
void manual_mode(void);

