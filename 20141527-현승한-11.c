/*
 * GccApplication3.c
 *
 * Created: 2019-06-11 오후 8:45:54
 * Author : 414
 */ 

#include <avr/io.h>
#define F_CPU 16000000UL
#include <util/delay.h>
#define CDS_1 100 
#define CDS_2 200
#define CDS_3 300
#define CDS_4 400
#define CDS_5 500
#define CDS_6 600
#define CDS_7 800
#define CDS_8 1000 
void init_adc();
unsigned short read_adc();
void show_adc(unsigned short value);
void show_fnd(unsigned short value);
int main(void)
{
	unsigned short value;
	DDRA = 0xff;
	DDRC = 0xff;
	DDRG = 0x0f;
	init_adc();
	while(1)
	{
		value = read_adc();
		show_adc(value);
		show_fnd(value);
		_delay_ms(500);
	}
}
void init_adc()
{
	ADMUX = 0x00;
	ADCSRA = 0x87;
}	

unsigned short read_adc()
{
	unsigned char adc_low, adc_high;
	unsigned short value;
	ADCSRA |= (1<<ADSC); 
	while ((ADCSRA & (1<<ADIF)) == 0);
	adc_low = ADCL; 
	adc_high = ADCH; 
	value = (adc_high << 8) | adc_low;

	return value;
}

void show_adc(unsigned short value)
{
	if (value <= CDS_1)
	PORTA = 0xff;
	else if(value <= CDS_2)
	PORTA = 0x7f;
	else if(value <= CDS_3)
	PORTA = 0x3f;
	else if(value <= CDS_4)
	PORTA = 0x1f;
	else if(value <= CDS_5)
	PORTA = 0x0f;
	else if(value <= CDS_6)
	PORTA = 0x07;
	else if (value <= CDS_7)
	PORTA = 0x03;
	else if (value <= CDS_8)
	PORTA = 0x01;
	else
	PORTA = 0x00;
}

void show_fnd(unsigned short value)
{
	PORTG = 0x0f;
	PORTC = value;
}

