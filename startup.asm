.include "hardware/system/system.inc"

.section .text._start
.global _start
.type _start, @function

_start:
    l32r    a1, .L_STACK_TOP
    movi    a0, 0

    l32r    a2, .L_vector_table
    wsr     a2, VECBASE
    rsync

    l32r    a2, .L_TG0_WDT_WP
    l32r    a3, .L_WDT_KEY
    s32i    a3, a2, 0

    l32r    a2, .L_TG0_WDT_CFG0
    movi    a3, 0
    s32i    a3, a2, 0

    l32r    a2, .L_TG1_WDT_WP
    l32r    a3, .L_WDT_KEY
    s32i    a3, a2, 0

    l32r    a2, .L_TG1_WDT_CFG0
    movi    a3, 0
    s32i    a3, a2, 0

    l32r    a2, .L_RTC_WDT_WP
    l32r    a3, .L_WDT_KEY
    s32i    a3, a2, 0

    l32r    a2, .L_RTC_WDT_CFG0
    movi    a3, 0
    s32i    a3, a2, 0

    l32r    a2, .L_RTC_SWD_WP
    l32r    a3, .L_SWD_KEY
    s32i    a3, a2, 0

    l32r    a2, .L_RTC_SWD_CFG
    l32r    a3, .L_SWD_DISABLE_VAL
    s32i    a3, a2, 0

    l32r    a2, .L_bss_start
    l32r    a3, .L_bss_end
    movi    a4, 0
.L_bss_loop:
    bgeu    a2, a3, .L_bss_done
    s32i    a4, a2, 0
    addi    a2, a2, 4
    j       .L_bss_loop
    
.L_bss_done:

    call0   kernel_entry

.L_panic_loop:
    waiti   0
    j       .L_panic_loop


.section .literal._start, "ax"
.align 4

.L_STACK_TOP:           .word 0x3FC90000
.L_vector_table:        .word _vector_table_base

.L_bss_start:           .word _bss_start
.L_bss_end:             .word _bss_end

.L_WDT_KEY:             .word 0x50D83AA1
.L_SWD_KEY:             .word 0x123B54D

# TG0 / TG1
.L_TG0_WDT_CFG0:        .word 0x6001F048
.L_TG0_WDT_WP:          .word 0x6001F064
.L_TG1_WDT_CFG0:        .word 0x60020048
.L_TG1_WDT_WP:          .word 0x60020064

# RTC WDT
.L_RTC_WDT_CFG0:        .word 0x60008090
.L_RTC_WDT_WP:          .word 0x600080A4

# SWD (Super WDT)
.L_RTC_SWD_CFG:         .word 0x600080AC
.L_RTC_SWD_WP:          .word 0x600080B0
.L_SWD_DISABLE_VAL:     .word 0xE0000000