#define LOCAL_CONTROL   0xff800000
#define LOCAL_PRESCALER 0xff800008
#define OSC_FREQ        54000000
#define MAIN_STACK      0x400000

.section ".text.boot"

.global _start

_start:

    .org 0x80000

    ldr     x5, =_start
    mov     sp, x5

    //clear BSS

    ldr     x5, =__bss_start
    ldr     w6, =__bss_size


1:  cbz     w6, 2f
    str     xzr, [x5], #8
    sub     w6, w6, #1
    cbnz    w6, 1b


//jump to C code (kernel.c)

2:  bl      kernel_main

//halt for failsafe
halt:
    wfe
    b halt


//-----------------

// Entry point for the kernel. Registers:
// x0 -> 32 bit pointer to DTB in memory (primary core only) / 0 (secondary cores)
// x1 -> 0
// x2 -> 0
// x3 -> 0
// x4 -> 32 bit kernel entry point, _start location