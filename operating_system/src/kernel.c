#include "mini_uart.h"
#include "printf.h"
#include "utils.h"

void kernel_main(void)
{
	uart_init();
	init_printf(0, putc);
	irq_vector_init();
	timer_init();
	enable_interrupt_controller();
	enable_irq();

	while (1){
	
	printf("Kernel initialized!\r\n");

	int el = get_el();
    printf("Exception level: %d \r\n", el);
	}
}