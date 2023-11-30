#pragma once

#include "../common/main.h"
#include "../common/common.h"

//Auxilliary

#define AUX_ENABLES_REG     = AUX_BASE + 4
#define AUX_MU_IO_REG       = AUX_BASE + 64
#define AUX_MU_IER_REG      = AUX_BASE + 68
#define AUX_MU_IIR_REG      = AUX_BASE + 72
#define AUX_MU_LCR_REG      = AUX_BASE + 76
#define AUX_MU_MCR_REG      = AUX_BASE + 80
#define AUX_MU_LSR_REG      = AUX_BASE + 84
#define AUX_MU_CNTL_REG     = AUX_BASE + 96
#define AUX_MU_BRAUD_REG    = AUX_BASE + 104

//other

#define AUX_UART_CLOCK  = 500000000
#define UART_MAX_QUEUE  = 16 * 1024

//--------------------------------------------------

/*
    Other struct for auxilliary regs:

*/

/*struct Auxilliary_register {

    reg32 AUX_IRQ;
    reg32 AUX_ENABLES;
    reg32 AUX_MU_IO;
    reg32 AUX_MU_IER;
    reg32 AUX_MU_IIR;
    reg32 AUX_MU_LCR;
    reg32 AUX_MU_MCR;
    reg32 AUX_MU_LSR;
    reg32 AUX_MU_MSR;
    reg32 AUX_MU_SCRATCH;
    reg32 AUX_MU_CNTL;
    reg32 AUX_MU_STAT;
    reg32 AUX_MU_BAUD;

};

#define REGS_AUX ((struct Auxilliary_register *)(PBASE + 0x7e215000))*/

//0x7e215000 --> memory adress