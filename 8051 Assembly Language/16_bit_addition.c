#include <reg51.h>

void delay(int opt);

sbit b = P2^5;

void main(){
	unsigned int x = P1;
	while(1){
		b = 1;
		delay(1);
		b = 0;
		delay(2);
	}
}

void delay(int opt){
	int i;
	
	//3 millisecond delay
	if(opt==1){
		TL0 = 0x3F;
		TH0 = 0xF3;
		TMOD = 0x01;
		TR0 = 1;
		
		while(TF0==0);
		TR0 = 0;
		TF0 = 0;
	}
	
	//10 ms delay
	
	if(opt==2){
		TL0 = 0xFF;
		TH0 = 0xDB;
		TMOD = 0x01;
		TR0 = 1;
		
		while(TF0==0);
		TR0 = 0;
		TF0 = 0;
	}
}