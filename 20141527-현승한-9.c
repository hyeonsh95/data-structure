/*
 * GccApplication6.c
 *
 * Created: 2019-05-27 오전 11:00:32
 * Author : 414
 */ 

#include <avr/io.h>
#define F_CPU 16000000UL
#include <util/delay.h>

int main(void)
{
	DDRA = 0xff;
	int count = 0;
	while(1)
	{	
		count += 1;
		PORTA = count;
		_delay_ms(1000);
	}
}

