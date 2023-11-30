//include main values for GPIO(AUX) regs adress.

#include "../include/common/main.h"
//#include "../include/peripherals/auxilliary.h"

//define baud auxilliary

#define AUX_MU_BAUD(baud) ((AUX_UART_CLOCK/(baud*8))-1)

//MMIO write/read function 

void mmio_write(long reg, unsigned int val)
{
    *(volatile unsigned int *)&reg = val;
}

unsigned int mmio_read(long reg)
{
    return *(volatile unsigned int *)&reg;
}

//GPIO function

unsigned int gpio_call(unsigned int pin_number, unsigned int value, unsigned int base, unsigned int field_size, unsigned int field_max)
{
    unsigned int field_mask = (1 << field_size) - 1;

    if (pin_number > field_max) return 0;
    if (value > field_mask) return 0;

    unsigned int num_fields = 32 / field_size;
    unsigned int reg = base + ((pin_number / num_fields) * 4);
    unsigned int shift = (pin_number % num_fields) * field_size;

    unsigned int curval = mmio_read(reg);
    curval &= ~(field_mask << shift);
    curval |= value << shift;
    mmio_write(reg, curval);

    return 1;
}

unsigned int gpio_set  ()
{
    return 0;
}
unsigned int gpio_clear(unsigned int pin_number, unsigned int value)
{
    return 0;
}
unsigned int gpio_pull (unsigned int pin_number, unsigned int value)
{
    return 0;
}
unsigned int gpio_func (unsigned int pin_number, unsigned int value)
{
    return 0;
}

void gpio_Alt5(unsigned int pin_number)
{
    return;
}

void uart_init()
{
    return;
}

unsigned int uart_isWriteByteReady()
{
    return 0;
}

unsigned int uart_writeByteBlockingActual(unsigned char ch)
{
    return 0;
}

void uart_writeText(char *buffer)
{
    return;
}