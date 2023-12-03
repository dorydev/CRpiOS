#pragma once

#include "../common/main.h"
#include "../peripherals/auxilliary.h"

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

//SPI 1

#define AUX_SPI1_CNTL0_REG
#define AUX_SPI1_CNTL1_REG
#define AUX_SPI_STAT_REG
#define AUX_SPI1_PEEK_REG
#define AUX_SPI1_IO_REG_a
#define AUX_SPI1_IO_REG_b
#define AUX_SPI1_IO_REG_c
#define AUX_SPI1_IO_REG_d
#define AUX_SPI1_TXHOLD_REG_a 
#define AUX_SPI1_TXHOLD_REG_b
#define AUX_SPI1_TXHOLD_REG_c
#define AUX_SPI1_TXHOLD_REG_d

//SPI 2

#define AUX_SPI2_CNTL0_REG
#define AUX_SPI2_CNTL1_REG
#define AUX_SPI2_STAT_REG
#define AUX_SPI2_PEEK_REG
#define AUX_SPI2_IO_REG_a
#define AUX_SPI2_IO_REG_b
#define AUX_SPI2_IO_REG_c
#define AUX_SPI2_IO_REG_d
#define AUX_SPI2_TXHOLD_REG_a 
#define AUX_SPI2_TXHOLD_REG_b
#define AUX_SPI2_TXHOLD_REG_c
#define AUX_SPI2_TXHOLD_REG_d

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

/*enum 
{
    AUX_BASE            = PBASE + 0x215000,
    AUX_ENABLES_REG     = AUX_BASE + 4,
    AUX_MU_IO_REG       = AUX_BASE + 64,
    AUX_MU_IER_REG      = AUX_BASE + 68,
    AUX_MU_IIR_REG      = AUX_BASE + 72,
    AUX_MU_LCR_REG      = AUX_BASE + 76,
    AUX_MU_MCR_REG      = AUX_BASE + 80,
    AUX_MU_LSR_REG      = AUX_BASE + 84,
    AUX_MU_CNTL_REG     = AUX_BASE + 96,
    AUX_MU_BRAUD_REG    = AUX_BASE + 104,

};*/

//0x7e215000 --> memory adress