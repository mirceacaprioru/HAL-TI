/**********************************************************
* Author: Mircea Caprioru, at home
* Date: 15 November 2014  
* File: hal_clock.c
* Description: initialization of system clock 
**********************************************************/

/*Includes*/
#include "hal_clock.h"

/**********************************************************
* Author: Mircea Caprioru, at home
* Date: 15 November 2014  
* Function: HAL_Clock_Init
* Description: initialization of system clock 
* Param IN: N/A
* Param OUT: N/A
**********************************************************/
void HAL_Clock_Init(void)
{
    //
    // Set the clocking to run directly from the PLL at 20 MHz.
    // The following code:
    // -sets the system clock divider to 2.5 (200 MHz PLL divide by 2.5 = 80 MHz)
    // -sets the system clock to use the PLL
    // -uses the main oscillator
    // -configures for use of 16 MHz crystal/oscillator input
    //
    SysCtlClockSet(SYSCTL_SYSDIV_2_5 | SYSCTL_USE_PLL | SYSCTL_OSC_MAIN |
                   SYSCTL_XTAL_16MHZ);
}