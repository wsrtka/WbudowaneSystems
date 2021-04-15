#include "mini_uart.h"
#include "printf.h"

void kernel_main(void)
{
	uart_init();
	init_printf(0, putc);
	uart_send_string("Kernel is initialized!\r\n");

	// Print current exception level
	int el = get_el();
	printf("Exception level: %d \r\n", el);

	while (1) {
		uart_send(uart_recv());
	}
}