#include "driverlib.h"
#include "mymsp430.h"

volatile uint32_t MCLK=0,SMCLK=0,ACLK=0;



void main( void )
{
	/* Stop watchdog timer */
	WDT_A_hold(WDT_A_BASE);

	//Clk_Using_Crystal_Init(4000000);
	Clk_Using_DCO_Init(24000,8000);

	MCLK=UCS_getMCLK();
	SMCLK=UCS_getSMCLK();
	ACLK=UCS_getACLK();

	while(1)
	{

	}
}



