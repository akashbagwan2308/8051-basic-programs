#include<reg51.h>
// for 11.0592MHz crystal
void delay(unsigned int itime)
{
unsigned int i,j;
for (i=0;i<itime;i++) // this is For(); loop delay used to define delay value in Embedded C
{
for (j=0;j<1275;j++);
}
}

void main(){
	
	while(1){
		P2 = 0xAA;
		delay(100);
		P2 = 0x55;
		delay(100);
	}
}