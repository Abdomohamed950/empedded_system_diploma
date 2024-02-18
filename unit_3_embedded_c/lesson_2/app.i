# 1 "app.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "app.c"
# 1 "uart.h" 1


void uart_send_string(unsigned char *p_tx_string);
# 2 "app.c" 2
unsigned char string_buffer[100]="learn_in_depth:<wegz>";
void main ()
{
 uart_send_string(string_buffer);
}
