
#include <avr/io.h>
#include <avr/sfr_defs.h>
#include <util/delay.h>
int ir1,ir2,ir3,ir4,ir5;
int main()
{
	DDRA = 0xFF;
	DDRD = 0x00;
	
	while(1){
		
		
		ir1 = bit_is_clear(PIND,2);
		ir2 = bit_is_clear(PIND,3);
		ir3 = bit_is_clear(PIND,4);
		ir4 = bit_is_clear(PIND,5);
		ir5 = bit_is_clear(PIND,6);
		
		
		
		if((ir1==1 && ir2 == 1 && ir3 == 0 && ir4 == 1 && ir5 == 1) || (ir1==1 && ir2 == 0 && ir3 == 0 && ir4 == 0 && ir5 == 1) || (ir1==0 && ir2 == 0 && ir3 == 0 && ir4 == 0 && ir5 == 0))
		{
			PORTA = 0b10100000;
		}
		if((ir1==1 && ir2 == 0 && ir3 == 1 && ir4 == 1 && ir5 == 1) || (ir1==0 && ir2 == 0 && ir3 == 1 && ir4 == 1 && ir5 == 1) || (ir1==0 && ir2 == 0 && ir3 == 0 && ir4 == 1 && ir5 == 1) || (ir1==0 && ir2 == 1 && ir3 == 1 && ir4 == 1 && ir5 == 1) || (ir1==1 && ir2 == 0 && ir3 == 0 && ir4 == 1 && ir5 == 1) || (ir1==0 && ir2 == 0 && ir3 == 0 && ir4 == 0 && ir5 == 1))
		{
			
			
			//PORTA = 0b00000000;
			//_delay_us(20);
			PORTA = 0b10010000; // Smooth Left
			
		}
		
		
		//if((ir1==0 && ir2 == 0 && ir3 == 0 && ir4 == 1 && ir5==1))
		//{
			
		//
			//PORTA = 0b00000000;
			//_delay_us(20);
			//PORTA = 0b10010000; // Sharp Left
			//}
			
		
		/*if((ir1==0 && ir2 == 0 && ir3 == 1 && ir4 == 1 && ir5==1))
		{
			while(ir3==0)
			{
				
			
			//PORTA = 0b00000000;
			//_delay_us(20);
			PORTA = 0b10010000; // Sharp Left
			}
		}*/
		
		if((ir1 == 1 && ir2 == 1 && ir3 == 1 && ir4 == 0 && ir5== 1) || (ir1 == 1 && ir2 == 1 && ir3 == 1 && ir4 == 0 && ir5== 0) || (ir1 == 1 && ir2 == 1 && ir3 == 0 && ir4 == 0 && ir5== 0) || (ir1 == 1 && ir2 == 1 && ir3 == 1 && ir4 == 1 && ir5== 0) || (ir1 == 1 && ir2 == 0 && ir3 == 0 && ir4 == 0 && ir5== 0) || (ir1 == 1 && ir2 == 1 && ir3 == 0 && ir4 == 0 && ir5== 1))
		{
		
		 
			//PORTA = 0b00000000;
			//_delay_us(20);
			PORTA = 0b01100000; // Smooth Right
		 
		}
		if(ir1 == 1 && ir2 == 1 && ir3 == 1 && ir4 == 1 && ir5== 1)
		{
	
	
				//PORTA = 0b00000000;
				_delay_us(400);
				PORTA = 0b01010000; // back
			
		}
		
		/*if( ir1==1 && ir2 == 1 && ir3 == 0 && ir4 == 0 && ir5 == 0 )
		{
			while(ir3==0)
			{
				
			//PORTA = 0b00000000;
			//_delay_us(20);
			PORTA = 0b01100000; // Sharp Right
			}
		}
		if( ir1==1 && ir2 == 1 && ir3 == 1 && ir4 == 0 && ir5 == 0 )
		{
			while(ir3==0)
			{
				
				//PORTA = 0b00000000;
				//_delay_us(20);
				PORTA = 0b01100000; // Sharp Right
			}
		}
		
		*/
		
		
		
	}
}