#include "../include/struct/io.h"

void main_kernel()
{
    uart_init();
    uart_writeText("Hello World!\n");

    while(1);
}