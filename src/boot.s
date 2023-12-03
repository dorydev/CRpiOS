#define LOCAL_CONTROL   0xff800000
#define LOCAL_PRESCALER 0xff800008
#define OSC_FREQ        54000000
#define MAIN_STACK      0x400000

.section ".text.boot"

.global _start

_start:

    ldr     x0, = 0xff800000  // Sort out the timer
    str     wzr, [x0]


    // Check if processor ID is 0 (execute in main core)

    mrs     x1, mpidr_el1
    and     x1, x1, #3
    cbz     x1, 2f

//if not in main core --> hang in a wait loop

1:  wfe
    b   1b

//if in main core:

2:
    
    ldr     x1, =_start
    mov     sp, x1

    ldr     x1, =__bss_start
    ldr     x1, =__bss_size

3:  cbz     w2, 4f
    str     xzr, [x1], #8
    sub     w2, w2, #1
    cbnz    w2, 3b          //loop if non-zero

4:  bl      main_kernel
    b       1b
