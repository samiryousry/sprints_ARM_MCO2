#define SYSCTL_RGCGPIO_R   (*(volatile uint32_t *)0x400FE608U) //General-Purpose Input/Output Peripheral Ready
	  //GPIO Port F Run Mode Clock Gating Control
#define GPIO_PortF_DIR_R   (*(volatile uint32_t *)0x40025400U)
	#define GPIO_PortF_AFSEL_R  (*(volatile uint32_t *)0x4002551cU)//?? 
	#define GPIO_PortF_DATA_R           (*(volatile uint32_t *)0x400253fcU)