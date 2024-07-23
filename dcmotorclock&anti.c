//SWITCH
#include<LPC214X.h>
int main(){
while(1)
	{
IODIR1&=(~(1<<16));//set direction as input

IODIR0|=(1<<13);//set direction as output FOR CLOCKWISE
IODIR0|=(1<<14);//set direction as output FOR ANTICLOCKWISE
if((1<<16)&IOPIN1)
	{
IOCLR0|=(1<<14);
}
	else{
IOSET0|=(1<<14);
	}
		

	}
	}	
