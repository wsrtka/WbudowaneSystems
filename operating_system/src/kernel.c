#include "mini_uart.h"
#include "printf.h"

void kernel_main(void)
{
	uart_init();
	init_printf(0, putc);
	uart_send_string("Hello, world!\r\n");

	while (1) {
		uart_send(uart_recv());
	}
}