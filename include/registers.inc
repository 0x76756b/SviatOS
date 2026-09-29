# ==============================================================================
# ESP32-S3 System & Peripheral Registers Map
# Target: ESP32-S3 (Xtensa LX7 Dual-Core)
# ==============================================================================


# ------------------------------------------------------------------------------
# 1. System Clocks, Resets & PCR (Peripheral Clock & Reset)
# ------------------------------------------------------------------------------
.equ DR_REG_SYSTEM_BASE,                 0x600C0000
.equ SYSTEM_SYSCLK_CONF_REG,             0x600C0000
.equ SYSTEM_CPU_PERI_CLK_EN_REG,         0x600C0004
.equ SYSTEM_CPU_PERI_RST_EN_REG,         0x600C0008
.equ SYSTEM_CPU_PERI_CLK_EN1_REG,        0x600C000C
.equ SYSTEM_SYSCLK_CONF_REG,             0x600C0000
.equ SYSTEM_PERIP_CLK_EN0_REG,           0x600C0018
.equ SYSTEM_PERIP_CLK_EN1_REG,           0x600C001C
.equ SYSTEM_PERIP_RST_EN0_REG,           0x600C0020
.equ SYSTEM_PERIP_RST_EN1_REG,           0x600C0024
.equ SYSTEM_MEM_PD_MASK_REG,             0x600C0098
.equ SYSTEM_PERIP_CLK_ENABLE_REG,        0x600C00C0


# ------------------------------------------------------------------------------
# 2. Interrupt Matrix (Core 0 & Core 1)
# ------------------------------------------------------------------------------
.equ INTERRUPT_CORE0_BASE,               0x600C2000
.equ INTERRUPT_CORE1_BASE,               0x600C2400

.equ INT_CORE0_CPU_INT_ENABLE_REG,       0x600C2104
.equ INT_CORE0_CPU_INT_TYPE_REG,         0x600C210C
.equ INT_CORE0_CPU_INT_EIP_STATUS_REG,   0x600C2114

.equ INT_CORE1_CPU_INT_ENABLE_REG,       0x600C2504
.equ INT_CORE1_CPU_INT_TYPE_REG,         0x600C250C
.equ INT_CORE1_CPU_INT_EIP_STATUS_REG,   0x600C2514


# ------------------------------------------------------------------------------
# 3. GPIO Matrix Output Signal Muxing & Signal IDs
# ------------------------------------------------------------------------------
.equ GPIO_BASE,                          0x60004000

.equ GPIO_FUNC0_OUT_SEL_REG,             0x60004500
.equ GPIO_FUNC1_OUT_SEL_REG,             0x60004504
.equ GPIO_FUNC2_OUT_SEL_REG,             0x60004508
.equ GPIO_FUNC3_OUT_SEL_REG,             0x6000450C
.equ GPIO_FUNC4_OUT_SEL_REG,             0x60004510
.equ GPIO_FUNC5_OUT_SEL_REG,             0x60004514
.equ GPIO_FUNC6_OUT_SEL_REG,             0x60004518
.equ GPIO_FUNC7_OUT_SEL_REG,             0x6000451C
.equ GPIO_FUNC8_OUT_SEL_REG,             0x60004520
.equ GPIO_FUNC9_OUT_SEL_REG,             0x60004524
.equ GPIO_FUNC10_OUT_SEL_REG,            0x60004528
.equ GPIO_FUNC11_OUT_SEL_REG,            0x6000452C
.equ GPIO_FUNC12_OUT_SEL_REG,            0x60004530
.equ GPIO_FUNC13_OUT_SEL_REG,            0x60004534
.equ GPIO_FUNC14_OUT_SEL_REG,            0x60004538
.equ GPIO_FUNC15_OUT_SEL_REG,            0x6000453C
.equ GPIO_FUNC16_OUT_SEL_REG,            0x60004540
.equ GPIO_FUNC17_OUT_SEL_REG,            0x60004544
.equ GPIO_FUNC18_OUT_SEL_REG,            0x60004548
.equ GPIO_FUNC19_OUT_SEL_REG,            0x6000454C
.equ GPIO_FUNC20_OUT_SEL_REG,            0x60004550
.equ GPIO_FUNC21_OUT_SEL_REG,            0x60004554
.equ GPIO_FUNC22_OUT_SEL_REG,            0x60004558
.equ GPIO_FUNC23_OUT_SEL_REG,            0x6000455C
.equ GPIO_FUNC24_OUT_SEL_REG,            0x60004560
.equ GPIO_FUNC25_OUT_SEL_REG,            0x60004564
.equ GPIO_FUNC26_OUT_SEL_REG,            0x60004568
.equ GPIO_FUNC27_OUT_SEL_REG,            0x6000456C
.equ GPIO_FUNC28_OUT_SEL_REG,            0x60004570
.equ GPIO_FUNC29_OUT_SEL_REG,            0x60004574
.equ GPIO_FUNC30_OUT_SEL_REG,            0x60004578
.equ GPIO_FUNC31_OUT_SEL_REG,            0x6000457C
.equ GPIO_FUNC32_OUT_SEL_REG,            0x60004580
.equ GPIO_FUNC33_OUT_SEL_REG,            0x60004584
.equ GPIO_FUNC34_OUT_SEL_REG,            0x60004588
.equ GPIO_FUNC35_OUT_SEL_REG,            0x6000458C
.equ GPIO_FUNC36_OUT_SEL_REG,            0x60004590
.equ GPIO_FUNC37_OUT_SEL_REG,            0x60004594
.equ GPIO_FUNC38_OUT_SEL_REG,            0x60004598
.equ GPIO_FUNC39_OUT_SEL_REG,            0x6000459C
.equ GPIO_FUNC40_OUT_SEL_REG,            0x600045A0
.equ GPIO_FUNC41_OUT_SEL_REG,            0x600045A4
.equ GPIO_FUNC42_OUT_SEL_REG,            0x600045A8
.equ GPIO_FUNC43_OUT_SEL_REG,            0x600045AC
.equ GPIO_FUNC44_OUT_SEL_REG,            0x600045B0
.equ GPIO_FUNC45_OUT_SEL_REG,            0x600045B4
.equ GPIO_FUNC46_OUT_SEL_REG,            0x600045B8
.equ GPIO_FUNC47_OUT_SEL_REG,            0x600045BC
.equ GPIO_FUNC48_OUT_SEL_REG,            0x600045C0
.equ GPIO_FUNC49_OUT_SEL_REG,            0x600045C4
.equ GPIO_FUNC50_OUT_SEL_REG,            0x600045C8
.equ GPIO_FUNC51_OUT_SEL_REG,            0x600045CC
.equ GPIO_FUNC52_OUT_SEL_REG,            0x600045D0
.equ GPIO_FUNC53_OUT_SEL_REG,            0x600045D4


# ------------------------------------------------------------------------------
# 4. RMT (Remote Control Peripheral & WS2812B Timing Rules)
# ------------------------------------------------------------------------------
.equ RMT_BASE,                           0x60006000

.equ RMT_CH0CONF0_REG,                   0x60006000
.equ RMT_CH0CONF1_REG,                   0x60006004
.equ RMT_CH0_BIT_DIV_REG,                0x60006008

.equ RMT_CH1CONF0_REG,                   0x60006010
.equ RMT_CH1CONF1_REG,                   0x60006014
.equ RMT_CH1_BIT_DIV_REG,                0x60006018

.equ RMT_CH2CONF0_REG,                   0x60006020
.equ RMT_CH2CONF1_REG,                   0x60006024
.equ RMT_CH2_BIT_DIV_REG,                0x60006028

.equ RMT_CH3CONF0_REG,                   0x60006030
.equ RMT_CH3CONF1_REG,                   0x60006034
.equ RMT_CH3_BIT_DIV_REG,                0x60006038

.equ RMT_INT_RAW_REG,                    0x600060A0
.equ RMT_INT_ST_REG,                     0x600060A4
.equ RMT_INT_ENA_REG,                    0x600060A8
.equ RMT_INT_CLR_REG,                    0x600060AC
.equ RMT_SYS_CONF_REG,                   0x600060B4

.equ RMT_RAM_CH0_BASE,                   0x60006800

.equ RMT_WS2812B_CODE_0,                 0x80070003
.equ RMT_WS2812B_CODE_1,                 0x80030007


# ------------------------------------------------------------------------------
# 5. LEDC (LED PWM Controller)
# ------------------------------------------------------------------------------
.equ LEDC_BASE,                          0x60019000

.equ LEDC_HSTIMER0_CONF_REG,             0x60019000
.equ LEDC_HSTIMER0_VALUE_REG,            0x60019004
.equ LEDC_HSCH0_CONF0_REG,               0x60019008
.equ LEDC_HSCH0_HPOINT_REG,              0x6001900C
.equ LEDC_HSCH0_DUTY_REG,                0x60019010
.equ LEDC_HSCH0_CONF1_REG,               0x60019014

.equ LEDC_HSTIMER1_CONF_REG,             0x60019018
.equ LEDC_HSTIMER1_VALUE_REG,            0x6001901C

.equ LEDC_HSTIMER2_CONF_REG,             0x60019020
.equ LEDC_HSTIMER2_VALUE_REG,            0x60019024

.equ LEDC_HSTIMER3_CONF_REG,             0x60019028
.equ LEDC_HSTIMER3_VALUE_REG,            0x6001902C

.equ LEDC_LSTIMER0_CONF_REG,             0x60019030
.equ LEDC_LSTIMER0_VALUE_REG,            0x60019034

.equ LEDC_LSTIMER1_CONF_REG,             0x60019038
.equ LEDC_LSTIMER1_VALUE_REG,            0x6001903C

.equ LEDC_LSTIMER2_CONF_REG,             0x60019040
.equ LEDC_LSTIMER2_VALUE_REG,            0x60019044

.equ LEDC_LSTIMER3_CONF_REG,             0x60019048
.equ LEDC_LSTIMER3_VALUE_REG,            0x6001904C

.equ LEDC_SYS_CONF_REG,                  0x600190C0


# ------------------------------------------------------------------------------
# 6. I2S Peripheral (Audio / Parallel Out)
# ------------------------------------------------------------------------------
.equ I2S0_BASE,                          0x6000F000
.equ I2S1_BASE,                          0x6002D000

.equ I2S0_TX_START_REG,                  0x6000F000
.equ I2S0_TX_CONF_REG,                   0x6000F004
.equ I2S0_TX_CLKM_CONF_REG,              0x6000F020
.equ I2S0_TX_CONF1_REG,                  0x6000F028

.equ I2S1_TX_START_REG,                  0x6002D000
.equ I2S1_TX_CONF_REG,                   0x6002D004
.equ I2S1_TX_CLKM_CONF_REG,              0x6002D020
.equ I2S1_TX_CONF1_REG,                  0x6002D028


# ------------------------------------------------------------------------------
# 7. Cache, MMU & ExtRAM (Octal PSRAM / Flash Controller)
# ------------------------------------------------------------------------------
.equ EXTMEM_BASE,                        0x600C4000

.equ EXTMEM_CACHE_CONF_REG,              0x600C4000
.equ EXTMEM_CACHE_MMU_POWER_CTRL_REG,    0x600C4008
.equ EXTMEM_DCACHE_CTRL_REG,              0x600C4014
.equ EXTMEM_DCACHE_CTRL1_REG,             0x600C4018
.equ EXTMEM_ICACHE_CTRL_REG,              0x600C400C
.equ EXTMEM_ICACHE_CTRL1_REG,             0x600C4010
.equ EXTMEM_DCACHE_TAG_POWER_CTRL_REG,    0x600C4020
.equ EXTMEM_ICACHE_TAG_POWER_CTRL_REG,    0x600C4024
.equ EXTMEM_SPI_SMEM_TIMING_CONFIG_REG,   0x600C40A0

.equ DR_REG_MMU_TABLE,                   0x600C5000
.equ DR_REG_ITAG_TABLE,                  0x600C6000
.equ DR_REG_DTAG_TABLE,                  0x600C8000
.equ DR_REG_EXT_MEM_ENC,                 0x600CC000


# ------------------------------------------------------------------------------
# 8. USB Serial / JTAG Controller (Native USB Console)
# ------------------------------------------------------------------------------
.equ USB_SERIAL_JTAG_BASE,               0x60043000

.equ USB_SERIAL_JTAG_EP1_REG,            0x60043000
.equ USB_SERIAL_JTAG_EP1_CONF_REG,       0x60043004
.equ USB_SERIAL_JTAG_INT_RAW_REG,        0x60043008
.equ USB_SERIAL_JTAG_INT_ST_REG,         0x6004300C
.equ USB_SERIAL_JTAG_INT_ENA_REG,        0x60043010
.equ USB_SERIAL_JTAG_INT_CLR_REG,        0x60043014
.equ USB_SERIAL_JTAG_CONF0_REG,          0x60043018


# ------------------------------------------------------------------------------
# 9. UART0 / UART1 / UART2
# ------------------------------------------------------------------------------
.equ UART0_BASE,                         0x60000000
.equ UART1_BASE,                         0x60010000
.equ UART2_BASE,                         0x60020000

.equ UART0_FIFO_REG,                     0x60000000
.equ UART0_INT_RAW_REG,                  0x60000004
.equ UART0_INT_ST_REG,                   0x60000008
.equ UART0_INT_ENA_REG,                  0x6000000C
.equ UART0_INT_CLR_REG,                  0x60000010
.equ UART0_CLKDIV_REG,                   0x60000014
.equ UART0_RX_FILT_REG,                  0x60000018
.equ UART0_STATUS_REG,                   0x6000001C
.equ UART0_CONF0_REG,                    0x60000020
.equ UART0_CONF1_REG,                    0x60000024

.equ UART1_FIFO_REG,                     0x60010000
.equ UART1_INT_RAW_REG,                  0x60010004
.equ UART1_INT_ST_REG,                   0x60010008
.equ UART1_INT_ENA_REG,                  0x6001000C
.equ UART1_INT_CLR_REG,                  0x60010010
.equ UART1_CLKDIV_REG,                   0x60010014
.equ UART1_RX_FILT_REG,                  0x60010018
.equ UART1_STATUS_REG,                   0x6001001C
.equ UART1_CONF0_REG,                    0x60010020
.equ UART1_CONF1_REG,                    0x60010024

.equ UART2_FIFO_REG,                     0x60020000
.equ UART2_INT_RAW_REG,                  0x60020004
.equ UART2_INT_ST_REG,                   0x60020008
.equ UART2_INT_ENA_REG,                  0x6002000C
.equ UART2_INT_CLR_REG,                  0x60020010
.equ UART2_CLKDIV_REG,                   0x60020014
.equ UART2_RX_FILT_REG,                  0x60020018
.equ UART2_STATUS_REG,                   0x6002001C
.equ UART2_CONF0_REG,                    0x60020020
.equ UART2_CONF1_REG,                    0x60020024


# ------------------------------------------------------------------------------
# 10. General DMA Controller (GDMA)
# ------------------------------------------------------------------------------
.equ GDMA_BASE,                          0x6003F000

.equ GDMA_IN_INT_RAW_CH0_REG,            0x6003F000
.equ GDMA_IN_INT_ST_CH0_REG,             0x6003F004
.equ GDMA_IN_INT_ENA_CH0_REG,            0x6003F008
.equ GDMA_IN_INT_CLR_CH0_REG,            0x6003F00C

.equ GDMA_OUT_INT_RAW_CH0_REG,           0x6003F010
.equ GDMA_OUT_INT_ST_CH0_REG,            0x6003F014
.equ GDMA_OUT_INT_ENA_CH0_REG,           0x6003F018
.equ GDMA_OUT_INT_CLR_CH0_REG,           0x6003F01C

.equ GDMA_IN_LINK_CH0_REG,               0x6003F030
.equ GDMA_OUT_LINK_CH0_REG,              0x6003F054

.equ GDMA_MISC_CONF_REG,                 0x6003F500


# ------------------------------------------------------------------------------
# 11. Timers & Watchdog (TIMG0 / TIMG1 / SysTimer)
# ------------------------------------------------------------------------------
.equ TIMG0_BASE,                         0x6001F000
.equ TIMG1_BASE,                         0x60020000
.equ SYSTIMER_BASE,                      0x60023000

.equ TIMG0_T0CONFIG_REG,                 0x6001F000
.equ TIMG0_T0LO_REG,                     0x6001F004
.equ TIMG0_T0HI_REG,                     0x6001F008
.equ TIMG0_T0UPDATE_REG,                 0x6001F00C
.equ TIMG0_T0ALARMLO_REG,                0x6001F010
.equ TIMG0_T0ALARMHI_REG,                0x6001F014
.equ TIMG0_T0LOADLO_REG,                 0x6001F018
.equ TIMG0_T0LOADHI_REG,                 0x6001F01C
.equ TIMG0_T0LOAD_REG,                   0x6001F020

.equ TIMG0_WDTCONFIG0_REG,               0x6001F048
.equ TIMG0_WDTCONFIG1_REG,               0x6001F04C
.equ TIMG0_WDTFEED_REG,                  0x6001F060

.equ TIMG1_T0CONFIG_REG,                 0x60020000
.equ TIMG1_T0LO_REG,                     0x60020004
.equ TIMG1_T0HI_REG,                     0x60020008
.equ TIMG1_T0UPDATE_REG,                 0x6002000C

.equ SYSTIMER_CONF_REG,                  0x60023000
.equ SYSTIMER_UNIT0_OP_REG,              0x60023008
.equ SYSTIMER_UNIT1_OP_REG,              0x6002300C
.equ SYSTIMER_TARGET0_CONF_REG,          0x60023010
.equ SYSTIMER_TARGET1_CONF_REG,          0x60023018
.equ SYSTIMER_TARGET2_CONF_REG,          0x60023020


# ------------------------------------------------------------------------------
# 12. SPI2 / SPI3 (General Purpose SPI / GPSPI)
# ------------------------------------------------------------------------------
.equ SPI2_BASE,                          0x60024000
.equ SPI3_BASE,                          0x60025000

.equ SPI2_CMD_REG,                       0x60024000
.equ SPI2_ADDR_REG,                      0x60024004
.equ SPI2_CTRL_REG,                      0x60024008
.equ SPI2_CLOCK_REG,                     0x60024014
.equ SPI2_USER_REG,                      0x60024018
.equ SPI2_USER1_REG,                     0x6002401C
.equ SPI2_USER2_REG,                     0x60024020
.equ SPI2_MS_DLEN_REG,                   0x60024024
.equ SPI2_MOSI_DLEN_REG,                 0x60024028
.equ SPI2_MISO_DLEN_REG,                 0x6002402C
.equ SPI2_W0_REG,                        0x60024098

.equ SPI3_CMD_REG,                       0x60025000
.equ SPI3_ADDR_REG,                      0x60025004
.equ SPI3_CTRL_REG,                      0x60025008
.equ SPI3_CLOCK_REG,                     0x60025014
.equ SPI3_USER_REG,                      0x60025018
.equ SPI3_USER1_REG,                     0x6002501C
.equ SPI3_USER2_REG,                     0x60025020
.equ SPI3_MS_DLEN_REG,                   0x60025024
.equ SPI3_MOSI_DLEN_REG,                 0x60025028
.equ SPI3_MISO_DLEN_REG,                 0x6002502C
.equ SPI3_W0_REG,                        0x60025098


# ------------------------------------------------------------------------------
# 13. I2C0 / I2C1 Controller
# ------------------------------------------------------------------------------
.equ I2C0_BASE,                          0x60013000
.equ I2C1_BASE,                          0x60027000

.equ I2C0_SCL_LOW_PERIOD_REG,            0x60013000
.equ I2C0_CTR_REG,                       0x60013004
.equ I2C0_SR_REG,                        0x60013008
.equ I2C0_TO_REG,                        0x6001300C
.equ I2C0_FIFO_CONF_REG,                 0x60013014
.equ I2C0_DATA_FIFO_REG,                 0x6001301C

.equ I2C1_SCL_LOW_PERIOD_REG,            0x60027000
.equ I2C1_CTR_REG,                       0x60027004
.equ I2C1_SR_REG,                        0x60027008
.equ I2C1_TO_REG,                        0x6002700C
.equ I2C1_FIFO_CONF_REG,                 0x60027014
.equ I2C1_DATA_FIFO_REG,                 0x6002701C


# ------------------------------------------------------------------------------
# 14. RTC_CNTL (Power, Deep Sleep, Main System Reset)
# ------------------------------------------------------------------------------
.equ RTC_CNTL_BASE,                      0x60008000

.equ RTC_CNTL_OPTIONS0_REG,              0x60008000
.equ RTC_CNTL_SLP_TIMER0_REG,            0x60008004
.equ RTC_CNTL_SLP_TIMER1_REG,            0x60008008
.equ RTC_CNTL_STATE0_REG,                0x60008018
.equ RTC_CNTL_STATE1_REG,                0x6000801C

.equ RTC_CNTL_WDTCONFIG0_REG,            0x60008098
.equ RTC_CNTL_WDTCONFIG1_REG,            0x6000809C
.equ RTC_CNTL_WDTCONFIG2_REG,            0x600080A0
.equ RTC_CNTL_WDTCONFIG3_REG,            0x600080A4
.equ RTC_CNTL_WDTFEED_REG,               0x600080A8

.equ RTC_CNTL_SW_SYS_RST_REG,            0x600080C0


# ------------------------------------------------------------------------------
# 15. EFUSE Controller (Chip Info, MAC Address, Security)
# ------------------------------------------------------------------------------
.equ EFUSE_BASE,                         0x60007000

.equ EFUSE_PGM_DATA0_REG,                0x60007000
.equ EFUSE_PGM_DATA1_REG,                0x60007004
.equ EFUSE_PGM_DATA2_REG,                0x60007008
.equ EFUSE_PGM_DATA3_REG,                0x6000700C
.equ EFUSE_PGM_DATA4_REG,                0x60007010
.equ EFUSE_PGM_DATA5_REG,                0x60007014
.equ EFUSE_PGM_DATA6_REG,                0x60007018
.equ EFUSE_PGM_DATA7_REG,                0x6000701C

.equ EFUSE_RD_DATA0_REG,                 0x60007020
.equ EFUSE_RD_DATA1_REG,                 0x60007024
.equ EFUSE_RD_DATA2_REG,                 0x60007028
.equ EFUSE_RD_DATA3_REG,                 0x6000702C
.equ EFUSE_RD_DATA4_REG,                 0x60007030
.equ EFUSE_RD_DATA5_REG,                 0x60007034
.equ EFUSE_RD_DATA6_REG,                 0x60007038
.equ EFUSE_RD_DATA7_REG,                 0x6000703C

.equ EFUSE_RD_MAC_SPI_SYS_0_REG,         0x60007044


# ------------------------------------------------------------------------------
# 16. GPIO Base Registers & Bitmasks
# ------------------------------------------------------------------------------
.equ GPIO_BASE,                          0x60004000

.equ GPIO_OUT_REG,                       0x60004004
.equ GPIO_OUT_W1TS_REG,                  0x60004008
.equ GPIO_OUT_W1TC_REG,                  0x6000400C

.equ GPIO_OUT1_REG,                      0x60004010
.equ GPIO_OUT1_W1TS_REG,                 0x60004014
.equ GPIO_OUT1_W1TC_REG,                 0x60004018

.equ GPIO_ENABLE_REG,                    0x60004020
.equ GPIO_ENABLE_W1TS_REG,               0x60004024
.equ GPIO_ENABLE_W1TC_REG,               0x60004028

.equ GPIO_ENABLE1_REG,                   0x6000402C
.equ GPIO_ENABLE1_W1TS_REG,              0x60004030
.equ GPIO_ENABLE1_W1TC_REG,              0x60004034

.equ GPIO_STRAP_REG,                     0x60004038
.equ GPIO_IN_REG,                        0x6000403C
.equ GPIO_IN1_REG,                       0x60004040


# ------------------------------------------------------------------------------
# 16a. GPIO Pin Multiplexing & Pin Masks
# ------------------------------------------------------------------------------
.equ PIN_FUNC_GPIO,                      ((1 << 12) | (2 << 8))

.equ GPIO1_MUX,                          0x60009018
.equ GPIO1_ENABLE,                       GPIO_ENABLE_REG
.equ GPIO1_W1TS,                         GPIO_OUT_W1TS_REG
.equ GPIO1_W1TC,                         GPIO_OUT_W1TC_REG

.equ GPIO2_MUX,                          0x6000901C
.equ GPIO2_ENABLE,                       GPIO_ENABLE_REG
.equ GPIO2_W1TS,                         GPIO_OUT_W1TS_REG
.equ GPIO2_W1TC,                         GPIO_OUT_W1TC_REG

.equ GPIO3_MUX,                          0x60009020
.equ GPIO3_ENABLE,                       GPIO_ENABLE_REG
.equ GPIO3_W1TS,                         GPIO_OUT_W1TS_REG
.equ GPIO3_W1TC,                         GPIO_OUT_W1TC_REG

.equ GPIO4_MUX,                          0x60009024
.equ GPIO4_ENABLE,                       GPIO_ENABLE_REG
.equ GPIO4_W1TS,                         GPIO_OUT_W1TS_REG
.equ GPIO4_W1TC,                         GPIO_OUT_W1TC_REG

.equ GPIO5_MUX,                          0x60009028
.equ GPIO5_ENABLE,                       GPIO_ENABLE_REG
.equ GPIO5_W1TS,                         GPIO_OUT_W1TS_REG
.equ GPIO5_W1TC,                         GPIO_OUT_W1TC_REG

.equ GPIO6_MUX,                          0x6000902C
.equ GPIO6_ENABLE,                       GPIO_ENABLE_REG
.equ GPIO6_W1TS,                         GPIO_OUT_W1TS_REG
.equ GPIO6_W1TC,                         GPIO_OUT_W1TC_REG

.equ GPIO7_MUX,                          0x60009030
.equ GPIO7_ENABLE,                       GPIO_ENABLE_REG
.equ GPIO7_W1TS,                         GPIO_OUT_W1TS_REG
.equ GPIO7_W1TC,                         GPIO_OUT_W1TC_REG

.equ GPIO8_MUX,                          0x60009034
.equ GPIO8_ENABLE,                       GPIO_ENABLE_REG
.equ GPIO8_W1TS,                         GPIO_OUT_W1TS_REG
.equ GPIO8_W1TC,                         GPIO_OUT_W1TC_REG

.equ GPIO9_MUX,                          0x60009038
.equ GPIO9_ENABLE,                       GPIO_ENABLE_REG
.equ GPIO9_W1TS,                         GPIO_OUT_W1TS_REG
.equ GPIO9_W1TC,                         GPIO_OUT_W1TC_REG

.equ GPIO10_MUX,                         0x6000903C
.equ GPIO10_ENABLE,                      GPIO_ENABLE_REG
.equ GPIO10_W1TS,                        GPIO_OUT_W1TS_REG
.equ GPIO10_W1TC,                        GPIO_OUT_W1TC_REG

.equ GPIO11_MUX,                         0x60009040
.equ GPIO11_ENABLE,                      GPIO_ENABLE_REG
.equ GPIO11_W1TS,                        GPIO_OUT_W1TS_REG
.equ GPIO11_W1TC,                        GPIO_OUT_W1TC_REG

.equ GPIO12_MUX,                         0x60009044
.equ GPIO12_ENABLE,                      GPIO_ENABLE_REG
.equ GPIO12_W1TS,                        GPIO_OUT_W1TS_REG
.equ GPIO12_W1TC,                        GPIO_OUT_W1TC_REG

.equ GPIO13_MUX,                         0x60009048
.equ GPIO13_ENABLE,                      GPIO_ENABLE_REG
.equ GPIO13_W1TS,                        GPIO_OUT_W1TS_REG
.equ GPIO13_W1TC,                        GPIO_OUT_W1TC_REG

.equ GPIO14_MUX,                         0x6000904C
.equ GPIO14_ENABLE,                      GPIO_ENABLE_REG
.equ GPIO14_W1TS,                        GPIO_OUT_W1TS_REG
.equ GPIO14_W1TC,                        GPIO_OUT_W1TC_REG

.equ GPIO15_MUX,                         0x60009050
.equ GPIO15_ENABLE,                      GPIO_ENABLE_REG
.equ GPIO15_W1TS,                        GPIO_OUT_W1TS_REG
.equ GPIO15_W1TC,                        GPIO_OUT_W1TC_REG

.equ GPIO16_MUX,                         0x60009054
.equ GPIO16_ENABLE,                      GPIO_ENABLE_REG
.equ GPIO16_W1TS,                        GPIO_OUT_W1TS_REG
.equ GPIO16_W1TC,                        GPIO_OUT_W1TC_REG

.equ GPIO17_MUX,                         0x60009058
.equ GPIO17_ENABLE,                      GPIO_ENABLE_REG
.equ GPIO17_W1TS,                        GPIO_OUT_W1TS_REG
.equ GPIO17_W1TC,                        GPIO_OUT_W1TC_REG

.equ GPIO18_MUX,                         0x6000905C
.equ GPIO18_ENABLE,                      GPIO_ENABLE_REG
.equ GPIO18_W1TS,                        GPIO_OUT_W1TS_REG
.equ GPIO18_W1TC,                        GPIO_OUT_W1TC_REG

.equ GPIO19_MUX,                         0x60009060
.equ GPIO19_ENABLE,                      GPIO_ENABLE_REG
.equ GPIO19_W1TS,                        GPIO_OUT_W1TS_REG
.equ GPIO19_W1TC,                        GPIO_OUT_W1TC_REG

.equ GPIO20_MUX,                         0x60009064
.equ GPIO20_ENABLE,                      GPIO_ENABLE_REG
.equ GPIO20_W1TS,                        GPIO_OUT_W1TS_REG
.equ GPIO20_W1TC,                        GPIO_OUT_W1TC_REG

.equ GPIO21_MUX,                         0x60009068
.equ GPIO21_ENABLE,                      GPIO_ENABLE_REG
.equ GPIO21_W1TS,                        GPIO_OUT_W1TS_REG
.equ GPIO21_W1TC,                        GPIO_OUT_W1TC_REG

.equ GPIO33_MUX,                         0x60009098
.equ GPIO33_ENABLE,                      GPIO_ENABLE1_REG
.equ GPIO33_W1TS,                        GPIO_OUT1_W1TS_REG
.equ GPIO33_W1TC,                        GPIO_OUT1_W1TC_REG

.equ GPIO34_MUX,                         0x6000909C
.equ GPIO34_ENABLE,                      GPIO_ENABLE1_REG
.equ GPIO34_W1TS,                        GPIO_OUT1_W1TS_REG
.equ GPIO34_W1TC,                        GPIO_OUT1_W1TC_REG

.equ GPIO35_MUX,                         0x600090A0
.equ GPIO35_ENABLE,                      GPIO_ENABLE1_REG
.equ GPIO35_W1TS,                        GPIO_OUT1_W1TS_REG
.equ GPIO35_W1TC,                        GPIO_OUT1_W1TC_REG

.equ GPIO36_MUX,                         0x600090A4
.equ GPIO36_ENABLE,                      GPIO_ENABLE1_REG
.equ GPIO36_W1TS,                        GPIO_OUT1_W1TS_REG
.equ GPIO36_W1TC,                        GPIO_OUT1_W1TC_REG

.equ GPIO37_MUX,                         0x600090A8
.equ GPIO37_ENABLE,                      GPIO_ENABLE1_REG
.equ GPIO37_W1TS,                        GPIO_OUT1_W1TS_REG
.equ GPIO37_W1TC,                        GPIO_OUT1_W1TC_REG

.equ GPIO38_MUX,                         0x600090AC
.equ GPIO38_ENABLE,                      GPIO_ENABLE1_REG
.equ GPIO38_W1TS,                        GPIO_OUT1_W1TS_REG
.equ GPIO38_W1TC,                        GPIO_OUT1_W1TC_REG

.equ GPIO39_MUX,                         0x600090B0
.equ GPIO39_ENABLE,                      GPIO_ENABLE1_REG
.equ GPIO39_W1TS,                        GPIO_OUT1_W1TS_REG
.equ GPIO39_W1TC,                        GPIO_OUT1_W1TC_REG

.equ GPIO40_MUX,                         0x600090B4
.equ GPIO40_ENABLE,                      GPIO_ENABLE1_REG
.equ GPIO40_W1TS,                        GPIO_OUT1_W1TS_REG
.equ GPIO40_W1TC,                        GPIO_OUT1_W1TC_REG

.equ GPIO41_MUX,                         0x600090B8
.equ GPIO41_ENABLE,                      GPIO_ENABLE1_REG
.equ GPIO41_W1TS,                        GPIO_OUT1_W1TS_REG
.equ GPIO41_W1TC,                        GPIO_OUT1_W1TC_REG

.equ GPIO42_MUX,                         0x600090BC
.equ GPIO42_ENABLE,                      GPIO_ENABLE1_REG
.equ GPIO42_W1TS,                        GPIO_OUT1_W1TS_REG
.equ GPIO42_W1TC,                        GPIO_OUT1_W1TC_REG

.equ GPIO43_MUX,                         0x600090C0
.equ GPIO43_ENABLE,                      GPIO_ENABLE1_REG
.equ GPIO43_W1TS,                        GPIO_OUT1_W1TS_REG
.equ GPIO43_W1TC,                        GPIO_OUT1_W1TC_REG

.equ GPIO44_MUX,                         0x600090C4
.equ GPIO44_ENABLE,                      GPIO_ENABLE1_REG
.equ GPIO44_W1TS,                        GPIO_OUT1_W1TS_REG
.equ GPIO44_W1TC,                        GPIO_OUT1_W1TC_REG

.equ GPIO45_MUX,                         0x600090C8
.equ GPIO45_ENABLE,                      GPIO_ENABLE1_REG
.equ GPIO45_W1TS,                        GPIO_OUT1_W1TS_REG
.equ GPIO45_W1TC,                        GPIO_OUT1_W1TC_REG

.equ GPIO46_MUX,                         0x600090CC
.equ GPIO46_ENABLE,                      GPIO_ENABLE1_REG
.equ GPIO46_W1TS,                        GPIO_OUT1_W1TS_REG
.equ GPIO46_W1TC,                        GPIO_OUT1_W1TC_REG

.equ GPIO47_MUX,                         0x600090D0
.equ GPIO47_ENABLE,                      GPIO_ENABLE1_REG
.equ GPIO47_W1TS,                        GPIO_OUT1_W1TS_REG
.equ GPIO47_W1TC,                        GPIO_OUT1_W1TC_REG

.equ GPIO48_MUX,                         0x600090D4
.equ GPIO48_ENABLE,                      GPIO_ENABLE1_REG
.equ GPIO48_W1TS,                        GPIO_OUT1_W1TS_REG
.equ GPIO48_W1TC,                        GPIO_OUT1_W1TC_REG


# ------------------------------------------------------------------------------
# 17. TWAI (CAN)
# ------------------------------------------------------------------------------
.equ TWAI0_BASE,                         0x6002D000
.equ TWAI1_BASE,                         0x6002E000

.equ TWAI0_MODE_REG,                     0x6002D000
.equ TWAI0_CMD_REG,                      0x6002D004
.equ TWAI0_STATUS_REG,                   0x6002D008
.equ TWAI0_INT_RAW_REG,                  0x6002D00C
.equ TWAI0_INT_ENA_REG,                  0x6002D010
.equ TWAI0_BUS_TIMING_0_REG,             0x6002D018
.equ TWAI0_BUS_TIMING_1_REG,             0x6002D01C

.equ TWAI1_MODE_REG,                     0x6002E000
.equ TWAI1_CMD_REG,                      0x6002E004
.equ TWAI1_STATUS_REG,                   0x6002E008
.equ TWAI1_INT_RAW_REG,                  0x6002E00C
.equ TWAI1_INT_ENA_REG,                  0x6002E010
.equ TWAI1_BUS_TIMING_0_REG,             0x6002E018
.equ TWAI1_BUS_TIMING_1_REG,             0x6002E01C


# ------------------------------------------------------------------------------
# 18. MCPWM
# ------------------------------------------------------------------------------
.equ MCPWM0_BASE,                        0x6001F000
.equ MCPWM1_BASE,                        0x60020000


# ------------------------------------------------------------------------------
# 19. PCNT (Pulse Counter)
# ------------------------------------------------------------------------------
.equ PCNT_BASE,                          0x60017000

.equ PCNT_U0_CONF0_REG,                  0x60017000
.equ PCNT_U0_CONF1_REG,                  0x60017004
.equ PCNT_U0_CONF2_REG,                  0x60017008
.equ PCNT_U0_CNT_REG,                    0x6001700C


# ------------------------------------------------------------------------------
# 20. Dedicated GPIO
# ------------------------------------------------------------------------------
.equ DEDIC_GPIO_BASE,                    0x6003F000

.equ DEDIC_GPIO_OUT_CPU_REG,             0x6003F000
.equ DEDIC_GPIO_OUT_CPU_EN_REG,          0x6003F004
.equ DEDIC_GPIO_IN_CPU_REG,              0x6003F008


# ------------------------------------------------------------------------------
# 21. USB OTG
# ------------------------------------------------------------------------------
.equ USB_OTG_BASE,                       0x60080000

.equ USB_OTG_GOTGCTL_REG,                0x60080000
.equ USB_OTG_GOTGINT_REG,                0x60080004
.equ USB_OTG_GAHBCFG_REG,                0x60080008
.equ USB_OTG_GUSBCFG_REG,                0x6008000C
.equ USB_OTG_GRSTCTL_REG,                0x60080010
.equ USB_OTG_GINTSTS_REG,                0x60080014
.equ USB_OTG_GINTMSK_REG,                0x60080018
.equ USB_OTG_GRXSTSR_REG,                0x6008001C
.equ USB_OTG_GRXSTSP_REG,                0x60080020
.equ USB_OTG_GRXFSIZ_REG,                0x60080024
.equ USB_OTG_GNPTXFSIZ_REG,              0x60080028


# ------------------------------------------------------------------------------
# 22. UHCI
# ------------------------------------------------------------------------------
.equ UHCI0_BASE,                         0x60014000

.equ UHCI0_CONF0_REG,                    0x60014000
.equ UHCI0_INT_RAW_REG,                  0x60014004
.equ UHCI0_INT_ST_REG,                   0x60014008
.equ UHCI0_INT_ENA_REG,                  0x6001400C
.equ UHCI0_INT_CLR_REG,                  0x60014010


# ------------------------------------------------------------------------------
# 23. LCD / Camera Controller
# ------------------------------------------------------------------------------
.equ LCD_CAM_BASE,                       0x60026000

.equ LCD_CAM_LCD_USER_REG,               0x60026000
.equ LCD_CAM_LCD_MISC_REG,               0x60026004
.equ LCD_CAM_LCD_DATA_DOUT_MODE_REG,     0x60026008
.equ LCD_CAM_LCD_DATA_DOUT_NUM_REG,      0x6002600C
.equ LCD_CAM_LCD_DLY_MODE_CFG_REG,       0x60026010
.equ LCD_CAM_LCD_CTRL_REG,               0x60026014
.equ LCD_CAM_LCD_CLOCK_REG,              0x60026018

.equ LCD_CAM_CAM_CTRL_REG,               0x60026020
.equ LCD_CAM_CAM_CTRL1_REG,              0x60026024
.equ LCD_CAM_CAM_RGB_YUV_REG,            0x60026028
.equ LCD_CAM_CAM_CTRL2_REG,              0x6002602C


# ------------------------------------------------------------------------------
# 24. ADC
# ------------------------------------------------------------------------------
.equ ADC_BASE,                           0x60040000

.equ ADC1_CTRL_REG,                      0x60040000
.equ ADC1_CTRL2_REG,                     0x60040004
.equ ADC1_CTRL3_REG,                     0x60040008
.equ ADC1_SAR1_STATUS_REG,               0x6004000C

.equ ADC2_CTRL_REG,                      0x60040020
.equ ADC2_CTRL2_REG,                     0x60040024
.equ ADC2_CTRL3_REG,                     0x60040028
.equ ADC2_SAR1_STATUS_REG,               0x6004002C


# ------------------------------------------------------------------------------
# 25. AES / SHA / RSA / HMAC Hardware Accelerators
# ------------------------------------------------------------------------------
.equ AES_BASE,                           0x6003A000
.equ SHA_BASE,                           0x6003B000
.equ RSA_BASE,                           0x6003C000
.equ HMAC_BASE,                          0x6003E000


# ------------------------------------------------------------------------------
# 26. Bluetooth / Wi-Fi PHY Control
# ------------------------------------------------------------------------------
.equ MODEM_SYSCON_BASE,                  0x600AF000
.equ PHY_BASE,                           0x600A0000


# ------------------------------------------------------------------------------
# 27. LP / RTC Peripherals
# ------------------------------------------------------------------------------
.equ LP_AON_BASE,                        0x600B0000
.equ LP_UART_BASE,                       0x600B1000
.equ LP_I2C_BASE,                        0x600B2000
.equ LP_TIMER_BASE,                      0x600B3000


# ------------------------------------------------------------------------------
# 28. System Clock Bit Definitions
# ------------------------------------------------------------------------------
.equ SYSTEM_GPIO_CLK_EN,                 (1 << 0)
.equ SYSTEM_UART0_CLK_EN,                (1 << 2)
.equ SYSTEM_UART1_CLK_EN,                (1 << 3)
.equ SYSTEM_SPI2_CLK_EN,                 (1 << 4)
.equ SYSTEM_SPI3_CLK_EN,                 (1 << 5)
.equ SYSTEM_I2C0_CLK_EN,                 (1 << 6)
.equ SYSTEM_I2C1_CLK_EN,                 (1 << 7)


# ------------------------------------------------------------------------------
# 29. GPIO Bit Definitions
# ------------------------------------------------------------------------------
.equ GPIO0_MASK,                         (1 << 0)
.equ GPIO1_MASK,                         (1 << 1)
.equ GPIO2_MASK,                         (1 << 2)
.equ GPIO3_MASK,                         (1 << 3)
.equ GPIO4_MASK,                         (1 << 4)
.equ GPIO5_MASK,                         (1 << 5)
.equ GPIO6_MASK,                         (1 << 6)
.equ GPIO7_MASK,                         (1 << 7)
.equ GPIO8_MASK,                         (1 << 8)
.equ GPIO9_MASK,                         (1 << 9)
.equ GPIO10_MASK,                        (1 << 10)
.equ GPIO11_MASK,                        (1 << 11)
.equ GPIO12_MASK,                        (1 << 12)
.equ GPIO13_MASK,                        (1 << 13)
.equ GPIO14_MASK,                        (1 << 14)
.equ GPIO15_MASK,                        (1 << 15)
.equ GPIO16_MASK,                        (1 << 16)
.equ GPIO17_MASK,                        (1 << 17)
.equ GPIO18_MASK,                        (1 << 18)
.equ GPIO19_MASK,                        (1 << 19)
.equ GPIO20_MASK,                        (1 << 20)
.equ GPIO21_MASK,                        (1 << 21)
.equ GPIO22_MASK,                        (1 << 22)
.equ GPIO23_MASK,                        (1 << 23)
.equ GPIO24_MASK,                        (1 << 24)
.equ GPIO25_MASK,                        (1 << 25)
.equ GPIO26_MASK,                        (1 << 26)
.equ GPIO27_MASK,                        (1 << 27)
.equ GPIO28_MASK,                        (1 << 28)
.equ GPIO29_MASK,                        (1 << 29)
.equ GPIO30_MASK,                        (1 << 30)
.equ GPIO31_MASK,                        (1 << 31)

.equ GPIO32_MASK,                        (1 << 0)
.equ GPIO33_MASK,                        (1 << 1)
.equ GPIO34_MASK,                        (1 << 2)
.equ GPIO35_MASK,                        (1 << 3)
.equ GPIO36_MASK,                        (1 << 4)
.equ GPIO37_MASK,                        (1 << 5)
.equ GPIO38_MASK,                        (1 << 6)
.equ GPIO39_MASK,                        (1 << 7)
.equ GPIO40_MASK,                        (1 << 8)
.equ GPIO41_MASK,                        (1 << 9)
.equ GPIO42_MASK,                        (1 << 10)
.equ GPIO43_MASK,                        (1 << 11)
.equ GPIO44_MASK,                        (1 << 12)
.equ GPIO45_MASK,                        (1 << 13)
.equ GPIO46_MASK,                        (1 << 14)
.equ GPIO47_MASK,                        (1 << 15)
.equ GPIO48_MASK,                        (1 << 16)
.equ GPIO49_MASK,                        (1 << 17)
.equ GPIO50_MASK,                        (1 << 18)
.equ GPIO51_MASK,                        (1 << 19)
.equ GPIO52_MASK,                        (1 << 20)
.equ GPIO53_MASK,                        (1 << 21)