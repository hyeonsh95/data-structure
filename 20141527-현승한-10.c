/*
 * mission1.c
 *
 * Created: 2019-06-06 오후 6:37:50
 * Author : 414
 */ 

#include <avr/io.h>
#define F_CPU 16000000UL
#include <util/delay.h>

unsigned char fnd[20]={0x00,0x00,0x00,0x3F,0x06,0x3F,0x40,0x06,0x5B,0x4F,0x66,0x40,0x6D,0x7D,0x27,0x7F,0x00,0x00,0x00,0x00};

//010-1234-5678
unsigned char fnd_sel[4] = {0x08, 0x04,0x02,0x01}; //좌->우로 하고자 한다면 반대로 설정(08,04...)



int main(void){

	int sel,digit,del;
	
	DDRG=0x0F;
	DDRC=0xFF;

	while(1){	
		for(digit=0;digit<17;digit++){
			for(del=0;del<25;del++){  //delay_ms_set = 20ms*del				
				for(sel=0;sel<4;sel++){
					PORTC=fnd[digit+sel];
					PORTG=fnd_sel[sel];
					_delay_ms(5); //20ms * 25 = 500ms의 delay 설정.					
				}
			}
		}
	}
	return 0;
}

