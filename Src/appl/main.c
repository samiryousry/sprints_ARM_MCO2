#include <stdint.h>
#include "systick.h""
#include "led_port_registers.h"
#include "functions.h"
	 
int main(void)
{ 	uint32_t ui32loop =0;
	SYSCTL_RGCGPIO_R =0x00000020U; //GPIO Port F Run Mode Clock Gating Control
	 ui32loop = SYSCTL_RGCGPIO_R ;
	GPIO_PortF_DIR_R |=0x0000000EU ; //setting the second bit on port f
	GPIO_PortF_AFSEL_R = 0x0000000EU ; //cofigure as gpio
	
	 GPIO_PortF_DATA_R &= ~(1 << 1); //clear 2nd bit
while(1)
{GPIO_PortF_DATA_R |= 0x10U ; //high
	One_Second_Delay() ;
	
	GPIO_PortF_DATA_R &= 0x00U; //low
	One_Second_Delay() ;
}
}


