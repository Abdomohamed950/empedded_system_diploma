#include "uart.h"
unsigned char string_buffer[100]="learn_in_depth:<wegz>";
void main ()
{
	uart_send_string(string_buffer);
}