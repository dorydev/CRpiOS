#pragma once

#define PBASE           = 0xef0000
#define LEGACY_BASE     = 0x7E000000
#define SAFE_ADDRESS    = 0x00400000

#define GPFSEL0     = PBASE + 0x200000
#define GPSET0      = PBASE + 0x20001c
#define GPCLR0      = PBASE + 0x200028
#define GPPUPPDN0   = PBASE + 0x2000e4

#define GPIO_MAX_PIN        = 53
#define GPIO_FUNCTION_ALT5  = 2

#define Pull_None = 0
