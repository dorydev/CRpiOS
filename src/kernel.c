#include "../include/struct/io.h"

void kernel_main()
{
    uart_init();
    uart_writeText("Hello World!\n");

    while(1);
}