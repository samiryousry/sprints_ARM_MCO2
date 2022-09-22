 One_Second_Delay(void)
{
    NVIC_ST_CTRL_R = 0;            /* disable SysTick during setup */
    NVIC_ST_RELOAD_R = 15999999;    /* Reload Value goes here */
    NVIC_ST_CTRL_R |= 0x5;          /* enable SysTick with core clock */
    while( (NVIC_ST_CTRL_R & (1<<16) ) == 0)
        ;                           /* Monitoring bit 16 to be set */
    NVIC_ST_CTRL_R = 0;             /* Disabling SysTick Timer */
}