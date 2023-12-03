#include "../common/main.h"

void uart_init();
void uart_writeText(char *buffer);


void mmio_write(long reg, unsigned int val);
unsigned int mmio_read(long reg);