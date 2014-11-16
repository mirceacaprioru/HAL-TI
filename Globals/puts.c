/**
 * puts() is used by printf() to display or send a string.. This function
 *     determines where printf prints to. For this case it sends a string
 *     out over UART, another option could be to display the string on an
 *     LCD display.
 **/
void puts(uint8 * p_ucBuff) 
{
  char c;
  
  // Loops through each character in string 's'
  while (c = *p_ucBuff++) 
  {
    UART_SendChar(c);
  }
}

/**
 * puts() is used by printf() to display or send a character. This function
 *     determines where printf prints to. For this case it sends a character
 *     out over UART.
 **/
void putc(uint8 ucChar) 
{
  UART_SendChar(ucChar);
}