#include "mini_uart.h"

void kernel_main(void)
{
	uart_init();
	init_printf(0, putc);
	uart_send_string("Hello, world!\r\n");

	int el = get_el();
    printf("Exception level: %d \r\n", el);

	while (1) {
		uart_send(uart_recv());
	}
}