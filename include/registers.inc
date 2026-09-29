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

.equ GPIO_FUNC0_OUT_SEL_REG,             0x60004554
.equ GPIO_FUNC1_OUT_SEL_REG,             0x60004558
.equ GPIO_FUNC2_OUT_SEL_REG,             0x6000455C
.equ GPIO_FUNC3_OUT_SEL_REG,             0x60004560
.equ GPIO_FUNC4_OUT_SEL_REG,             0x60004564
.equ GPIO_FUNC5_OUT_SEL_REG,             0x60004568
.equ GPIO_FUNC6_OUT_SEL_REG,             0x6000456C
.equ GPIO_FUNC7_OUT_SEL_REG,             0x60004570
.equ GPIO_FUNC8_OUT_SEL_REG,             0x60004574
.equ GPIO_FUNC9_OUT_SEL_REG,             0x60004578
.equ GPIO_FUNC10_OUT_SEL_REG,            0x6000457C
.equ GPIO_FUNC11_OUT_SEL_REG,            0x60004580
.equ GPIO_FUNC12_OUT_SEL_REG,            0x60004584
.equ GPIO_FUNC13_OUT_SEL_REG,            0x60004588
.equ GPIO_FUNC14_OUT_SEL_REG,            0x6000458C
.equ GPIO_FUNC15_OUT_SEL_REG,            0x60004590
.equ GPIO_FUNC16_OUT_SEL_REG,            0x60004594
.equ GPIO_FUNC17_OUT_SEL_REG,            0x60004598
.equ GPIO_FUNC18_OUT_SEL_REG,            0x6000459C
.equ GPIO_FUNC19_OUT_SEL_REG,            0x600045A0
.equ GPIO_FUNC20_OUT_SEL_REG,            0x600045A4
.equ GPIO_FUNC21_OUT_SEL_REG,            0x600045A8
.equ GPIO_FUNC22_OUT_SEL_REG,            0x600045AC
.equ GPIO_FUNC23_OUT_SEL_REG,            0x600045B0
.equ GPIO_FUNC24_OUT_SEL_REG,            0x600045B4
.equ GPIO_FUNC25_OUT_SEL_REG,            0x600045B8
.equ GPIO_FUNC26_OUT_SEL_REG,            0x600045BC
.equ GPIO_FUNC27_OUT_SEL_REG,            0x600045C0
.equ GPIO_FUNC28_OUT_SEL_REG,            0x600045C4
.equ GPIO_FUNC29_OUT_SEL_REG,            0x600045C8
.equ GPIO_FUNC30_OUT_SEL_REG,            0x600045CC
.equ GPIO_FUNC31_OUT_SEL_REG,            0x600045D0
.equ GPIO_FUNC32_OUT_SEL_REG,            0x600045D4
.equ GPIO_FUNC33_OUT_SEL_REG,            0x600045D8
.equ GPIO_FUNC34_OUT_SEL_REG,            0x600045DC
.equ GPIO_FUNC35_OUT_SEL_REG,            0x600045E0
.equ GPIO_FUNC36_OUT_SEL_REG,            0x600045E4
.equ GPIO_FUNC37_OUT_SEL_REG,            0x600045E8
.equ GPIO_FUNC38_OUT_SEL_REG,            0x600045EC
.equ GPIO_FUNC39_OUT_SEL_REG,            0x600045F0
.equ GPIO_FUNC40_OUT_SEL_REG,            0x600045F4
.equ GPIO_FUNC41_OUT_SEL_REG,            0x600045F8
.equ GPIO_FUNC42_OUT_SEL_REG,            0x600045FC
.equ GPIO_FUNC43_OUT_SEL_REG,            0x60004600
.equ GPIO_FUNC44_OUT_SEL_REG,            0x60004604
.equ GPIO_FUNC45_OUT_SEL_REG,            0x60004608
.equ GPIO_FUNC46_OUT_SEL_REG,            0x6000460C
.equ GPIO_FUNC47_OUT_SEL_REG,            0x60004610
.equ GPIO_FUNC48_OUT_SEL_REG,            0x60004614
.equ GPIO_FUNC49_OUT_SEL_REG,            0x60004618
.equ GPIO_FUNC50_OUT_SEL_REG,            0x6000461C
.equ GPIO_FUNC51_OUT_SEL_REG,            0x60004620
.equ GPIO_FUNC52_OUT_SEL_REG,            0x60004624
.equ GPIO_FUNC53_OUT_SEL_REG,            0x60004628


# ------------------------------------------------------------------------------
# 4. RMT (Remote Control Peripheral & WS2812B Timing Rules)
# ------------------------------------------------------------------------------
.equ RMT_BASE,                           0x60016000

.equ RMT_CH0DATA_REG,                    0x60016000
.equ RMT_CH1DATA_REG,                    0x60016004
.equ RMT_CH2DATA_REG,                    0x60016008
.equ RMT_CH3DATA_REG,                    0x6001600C
.equ RMT_CH4DATA_REG,                    0x60016010
.equ RMT_CH5DATA_REG,                    0x60016014
.equ RMT_CH6DATA_REG,                    0x60016018
.equ RMT_CH7DATA_REG,                    0x6001601C

.equ RMT_CH0CONF0_REG,                   0x60016020
.equ RMT_CH1CONF0_REG,                   0x60016024
.equ RMT_CH2CONF0_REG,                   0x60016028
.equ RMT_CH3CONF0_REG,                   0x6001602C
.equ RMT_CH4CONF0_REG,                   0x60016030
.equ RMT_CH4CONF1_REG,                   0x60016034
.equ RMT_CH5CONF0_REG,                   0x60016038
.equ RMT_CH5CONF1_REG,                   0x6001603C
.equ RMT_CH6CONF0_REG,                   0x60016040
.equ RMT_CH6CONF1_REG,                   0x60016044
.equ RMT_CH7CONF0_REG,                   0x60016048
.equ RMT_CH7CONF1_REG,                   0x6001604C

.equ RMT_INT_RAW_REG,                    0x60016070
.equ RMT_INT_ST_REG,                     0x60016074
.equ RMT_INT_ENA_REG,                    0x60016078
.equ RMT_INT_CLR_REG,                    0x6001607C
.equ RMT_SYS_CONF_REG,                   0x600160C0

.equ RMT_RAM_CH0_BASE,                   0x60016800

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

.equ I2S_INT_RAW_OFF,                    0x00C
.equ I2S_INT_ST_OFF,                     0x010
.equ I2S_INT_ENA_OFF,                    0x014
.equ I2S_INT_CLR_OFF,                    0x018
.equ I2S_RX_CONF_OFF,                    0x020
.equ I2S_TX_CONF_OFF,                    0x024
.equ I2S_RX_CONF1_OFF,                   0x028
.equ I2S_TX_CONF1_OFF,                   0x02C
.equ I2S_RX_CLKM_CONF_OFF,               0x030
.equ I2S_TX_CLKM_CONF_OFF,               0x034
.equ I2S_RX_CLKM_DIV_CONF_OFF,           0x038
.equ I2S_TX_CLKM_DIV_CONF_OFF,           0x03C
.equ I2S_TX_PCM2PDM_CONF_OFF,            0x040
.equ I2S_TX_PCM2PDM_CONF1_OFF,           0x044
.equ I2S_RX_TDM_CTRL_OFF,                0x050
.equ I2S_TX_TDM_CTRL_OFF,                0x054
.equ I2S_RX_TIMING_OFF,                  0x058
.equ I2S_TX_TIMING_OFF,                  0x05C
.equ I2S_LC_HUNG_CONF_OFF,               0x060
.equ I2S_RX_EOF_NUM_OFF,                 0x064
.equ I2S_CONF_SINGLE_DATA_OFF,           0x068
.equ I2S_STATE_OFF,                      0x06C
.equ I2S_DATE_OFF,                       0x080

.equ I2S0_TX_CONF_REG,                  (I2S0_BASE + I2S_TX_CONF_OFF)
.equ I2S0_TX_CLKM_CONF_REG,              (I2S0_BASE + I2S_TX_CLKM_CONF_OFF)
.equ I2S0_TX_CONF1_REG,                  (I2S0_BASE + I2S_TX_CONF1_OFF)

.equ I2S1_TX_CONF_REG,                  (I2S1_BASE + I2S_TX_CONF_OFF)
.equ I2S1_TX_CLKM_CONF_REG,              (I2S1_BASE + I2S_TX_CLKM_CONF_OFF)
.equ I2S1_TX_CONF1_REG,                  (I2S1_BASE + I2S_TX_CONF1_OFF)

.equ I2S0_INT_RAW_REG,                  (I2S0_BASE + I2S_INT_RAW_OFF)
.equ I2S0_INT_ST_REG,                   (I2S0_BASE + I2S_INT_ST_OFF)
.equ I2S0_INT_ENA_REG,                  (I2S0_BASE + I2S_INT_ENA_OFF)
.equ I2S0_INT_CLR_REG,                  (I2S0_BASE + I2S_INT_CLR_OFF)
.equ I2S0_RX_CONF_REG,                  (I2S0_BASE + I2S_RX_CONF_OFF)
.equ I2S0_RX_CONF1_REG,                 (I2S0_BASE + I2S_RX_CONF1_OFF)
.equ I2S0_RX_CLKM_CONF_REG,             (I2S0_BASE + I2S_RX_CLKM_CONF_OFF)
.equ I2S0_RX_CLKM_DIV_CONF_REG,         (I2S0_BASE + I2S_RX_CLKM_DIV_CONF_OFF)
.equ I2S0_TX_CLKM_DIV_CONF_REG,         (I2S0_BASE + I2S_TX_CLKM_DIV_CONF_OFF)
.equ I2S0_TX_PCM2PDM_CONF_REG,          (I2S0_BASE + I2S_TX_PCM2PDM_CONF_OFF)
.equ I2S0_TX_PCM2PDM_CONF1_REG,         (I2S0_BASE + I2S_TX_PCM2PDM_CONF1_OFF)
.equ I2S0_RX_TDM_CTRL_REG,              (I2S0_BASE + I2S_RX_TDM_CTRL_OFF)
.equ I2S0_TX_TDM_CTRL_REG,              (I2S0_BASE + I2S_TX_TDM_CTRL_OFF)
.equ I2S0_RX_TIMING_REG,                (I2S0_BASE + I2S_RX_TIMING_OFF)
.equ I2S0_TX_TIMING_REG,                (I2S0_BASE + I2S_TX_TIMING_OFF)
.equ I2S0_LC_HUNG_CONF_REG,             (I2S0_BASE + I2S_LC_HUNG_CONF_OFF)
.equ I2S0_RX_EOF_NUM_REG,               (I2S0_BASE + I2S_RX_EOF_NUM_OFF)
.equ I2S0_CONF_SINGLE_DATA_REG,         (I2S0_BASE + I2S_CONF_SINGLE_DATA_OFF)
.equ I2S0_STATE_REG,                    (I2S0_BASE + I2S_STATE_OFF)
.equ I2S0_DATE_REG,                     (I2S0_BASE + I2S_DATE_OFF)
.equ I2S1_INT_RAW_REG,                  (I2S1_BASE + I2S_INT_RAW_OFF)
.equ I2S1_INT_ST_REG,                   (I2S1_BASE + I2S_INT_ST_OFF)
.equ I2S1_INT_ENA_REG,                  (I2S1_BASE + I2S_INT_ENA_OFF)
.equ I2S1_INT_CLR_REG,                  (I2S1_BASE + I2S_INT_CLR_OFF)
.equ I2S1_RX_CONF_REG,                  (I2S1_BASE + I2S_RX_CONF_OFF)
.equ I2S1_RX_CONF1_REG,                 (I2S1_BASE + I2S_RX_CONF1_OFF)
.equ I2S1_RX_CLKM_CONF_REG,             (I2S1_BASE + I2S_RX_CLKM_CONF_OFF)
.equ I2S1_RX_CLKM_DIV_CONF_REG,         (I2S1_BASE + I2S_RX_CLKM_DIV_CONF_OFF)
.equ I2S1_TX_CLKM_DIV_CONF_REG,         (I2S1_BASE + I2S_TX_CLKM_DIV_CONF_OFF)
.equ I2S1_TX_PCM2PDM_CONF_REG,          (I2S1_BASE + I2S_TX_PCM2PDM_CONF_OFF)
.equ I2S1_TX_PCM2PDM_CONF1_REG,         (I2S1_BASE + I2S_TX_PCM2PDM_CONF1_OFF)
.equ I2S1_RX_TDM_CTRL_REG,              (I2S1_BASE + I2S_RX_TDM_CTRL_OFF)
.equ I2S1_TX_TDM_CTRL_REG,              (I2S1_BASE + I2S_TX_TDM_CTRL_OFF)
.equ I2S1_RX_TIMING_REG,                (I2S1_BASE + I2S_RX_TIMING_OFF)
.equ I2S1_TX_TIMING_REG,                (I2S1_BASE + I2S_TX_TIMING_OFF)
.equ I2S1_LC_HUNG_CONF_REG,             (I2S1_BASE + I2S_LC_HUNG_CONF_OFF)
.equ I2S1_RX_EOF_NUM_REG,               (I2S1_BASE + I2S_RX_EOF_NUM_OFF)
.equ I2S1_CONF_SINGLE_DATA_REG,         (I2S1_BASE + I2S_CONF_SINGLE_DATA_OFF)
.equ I2S1_STATE_REG,                    (I2S1_BASE + I2S_STATE_OFF)
.equ I2S1_DATE_REG,                     (I2S1_BASE + I2S_DATE_OFF)


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
.equ USB_SERIAL_JTAG_BASE,               0x60038000

.equ USB_SERIAL_JTAG_EP1_REG,            (USB_SERIAL_JTAG_BASE + 0x00)
.equ USB_SERIAL_JTAG_EP1_CONF_REG,       (USB_SERIAL_JTAG_BASE + 0x04)
.equ USB_SERIAL_JTAG_INT_RAW_REG,        (USB_SERIAL_JTAG_BASE + 0x08)
.equ USB_SERIAL_JTAG_INT_ST_REG,         (USB_SERIAL_JTAG_BASE + 0x0C)
.equ USB_SERIAL_JTAG_INT_ENA_REG,        (USB_SERIAL_JTAG_BASE + 0x10)
.equ USB_SERIAL_JTAG_INT_CLR_REG,        (USB_SERIAL_JTAG_BASE + 0x14)
.equ USB_SERIAL_JTAG_CONF0_REG,          (USB_SERIAL_JTAG_BASE + 0x18)


# ==============================================================================
# UART0 / UART1 / UART2
# ==============================================================================
.equ UART0_BASE,                         0x60000000
.equ UART1_BASE,                         0x60010000
.equ UART2_BASE,                         0x6002E000

.equ UART_FIFO_OFF,                      0x000
.equ UART_INT_RAW_OFF,                   0x004
.equ UART_INT_ST_OFF,                    0x008
.equ UART_INT_ENA_OFF,                   0x00C
.equ UART_INT_CLR_OFF,                   0x010
.equ UART_CLKDIV_OFF,                    0x014
.equ UART_RX_FILT_OFF,                   0x018
.equ UART_STATUS_OFF,                    0x01C
.equ UART_CONF0_OFF,                     0x020
.equ UART_CONF1_OFF,                     0x024
.equ UART_LOWPULSE_OFF,                  0x028
.equ UART_HIGHPULSE_OFF,                 0x02C
.equ UART_RXD_CNT_OFF,                   0x030
.equ UART_FLOW_CONF_OFF,                 0x034
.equ UART_SLEEP_CONF_OFF,                0x038
.equ UART_SWFC_CONF_OFF,                 0x03C
.equ UART_IDLE_CONF_OFF,                 0x040
.equ UART_RS485_CONF_OFF,                0x044
.equ UART_AT_CMD_PRECNT_OFF,             0x048
.equ UART_AT_CMD_GAPTOUT_OFF,            0x04C
.equ UART_AT_CMD_POSTCNT_OFF,            0x050
.equ UART_AT_CMD_PRECHAR_OFF,            0x054
.equ UART_AT_CMD_CHAR_OFF,               0x05C
.equ UART_MEM_CONF_OFF,                  0x060
.equ UART_MEM_TX_STATUS_OFF,             0x064
.equ UART_MEM_RX_STATUS_OFF,             0x068

# UART0
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
.equ UART0_LOWPULSE_REG,                 (UART0_BASE + UART_LOWPULSE_OFF)
.equ UART0_HIGHPULSE_REG,                (UART0_BASE + UART_HIGHPULSE_OFF)
.equ UART0_RXD_CNT_REG,                  (UART0_BASE + UART_RXD_CNT_OFF)
.equ UART0_FLOW_CONF_REG,                (UART0_BASE + UART_FLOW_CONF_OFF)
.equ UART0_SLEEP_CONF_REG,               (UART0_BASE + UART_SLEEP_CONF_OFF)
.equ UART0_SWFC_CONF_REG,                (UART0_BASE + UART_SWFC_CONF_OFF)
.equ UART0_IDLE_CONF_REG,                (UART0_BASE + UART_IDLE_CONF_OFF)
.equ UART0_RS485_CONF_REG,               (UART0_BASE + UART_RS485_CONF_OFF)
.equ UART0_AT_CMD_PRECNT_REG,            (UART0_BASE + UART_AT_CMD_PRECNT_OFF)
.equ UART0_AT_CMD_GAPTOUT_REG,           (UART0_BASE + UART_AT_CMD_GAPTOUT_OFF)
.equ UART0_AT_CMD_POSTCNT_REG,            (UART0_BASE + UART_AT_CMD_POSTCNT_OFF)
.equ UART0_AT_CMD_PRECHAR_REG,            (UART0_BASE + UART_AT_CMD_PRECHAR_OFF)
.equ UART0_AT_CMD_CHAR_REG,              (UART0_BASE + UART_AT_CMD_CHAR_OFF)
.equ UART0_MEM_CONF_REG,                 (UART0_BASE + UART_MEM_CONF_OFF)
.equ UART0_MEM_TX_STATUS_REG,            (UART0_BASE + UART_MEM_TX_STATUS_OFF)
.equ UART0_MEM_RX_STATUS_REG,            (UART0_BASE + UART_MEM_RX_STATUS_OFF)

# UART1
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
.equ UART1_LOWPULSE_REG,                 (UART1_BASE + UART_LOWPULSE_OFF)
.equ UART1_HIGHPULSE_REG,                (UART1_BASE + UART_HIGHPULSE_OFF)
.equ UART1_RXD_CNT_REG,                  (UART1_BASE + UART_RXD_CNT_OFF)
.equ UART1_FLOW_CONF_REG,                (UART1_BASE + UART_FLOW_CONF_OFF)
.equ UART1_SLEEP_CONF_REG,               (UART1_BASE + UART_SLEEP_CONF_OFF)
.equ UART1_SWFC_CONF_REG,                (UART1_BASE + UART_SWFC_CONF_OFF)
.equ UART1_IDLE_CONF_REG,                (UART1_BASE + UART_IDLE_CONF_OFF)
.equ UART1_RS485_CONF_REG,               (UART1_BASE + UART_RS485_CONF_OFF)
.equ UART1_AT_CMD_PRECNT_REG,            (UART1_BASE + UART_AT_CMD_PRECNT_OFF)
.equ UART1_AT_CMD_GAPTOUT_REG,           (UART1_BASE + UART_AT_CMD_GAPTOUT_OFF)
.equ UART1_AT_CMD_POSTCNT_REG,            (UART1_BASE + UART_AT_CMD_POSTCNT_OFF)
.equ UART1_AT_CMD_PRECHAR_REG,            (UART1_BASE + UART_AT_CMD_PRECHAR_OFF)
.equ UART1_AT_CMD_CHAR_REG,              (UART1_BASE + UART_AT_CMD_CHAR_OFF)
.equ UART1_MEM_CONF_REG,                 (UART1_BASE + UART_MEM_CONF_OFF)
.equ UART1_MEM_TX_STATUS_REG,            (UART1_BASE + UART_MEM_TX_STATUS_OFF)
.equ UART1_MEM_RX_STATUS_REG,            (UART1_BASE + UART_MEM_RX_STATUS_OFF)

# UART2
.equ UART2_FIFO_REG,                     (UART2_BASE + UART_FIFO_OFF)
.equ UART2_INT_RAW_REG,                  (UART2_BASE + UART_INT_RAW_OFF)
.equ UART2_INT_ST_REG,                   (UART2_BASE + UART_INT_ST_OFF)
.equ UART2_INT_ENA_REG,                  (UART2_BASE + UART_INT_ENA_OFF)
.equ UART2_INT_CLR_REG,                  (UART2_BASE + UART_INT_CLR_OFF)
.equ UART2_CLKDIV_REG,                   (UART2_BASE + UART_CLKDIV_OFF)
.equ UART2_RX_FILT_REG,                  (UART2_BASE + UART_RX_FILT_OFF)
.equ UART2_STATUS_REG,                   (UART2_BASE + UART_STATUS_OFF)
.equ UART2_CONF0_REG,                    (UART2_BASE + UART_CONF0_OFF)
.equ UART2_CONF1_REG,                    (UART2_BASE + UART_CONF1_OFF)
.equ UART2_LOWPULSE_REG,                 (UART2_BASE + UART_LOWPULSE_OFF)
.equ UART2_HIGHPULSE_REG,                (UART2_BASE + UART_HIGHPULSE_OFF)
.equ UART2_RXD_CNT_REG,                  (UART2_BASE + UART_RXD_CNT_OFF)
.equ UART2_FLOW_CONF_REG,                (UART2_BASE + UART_FLOW_CONF_OFF)
.equ UART2_SLEEP_CONF_REG,               (UART2_BASE + UART_SLEEP_CONF_OFF)
.equ UART2_SWFC_CONF_REG,                (UART2_BASE + UART_SWFC_CONF_OFF)
.equ UART2_IDLE_CONF_REG,                (UART2_BASE + UART_IDLE_CONF_OFF)
.equ UART2_RS485_CONF_REG,               (UART2_BASE + UART_RS485_CONF_OFF)
.equ UART2_AT_CMD_PRECNT_REG,            (UART2_BASE + UART_AT_CMD_PRECNT_OFF)
.equ UART2_AT_CMD_GAPTOUT_REG,           (UART2_BASE + UART_AT_CMD_GAPTOUT_OFF)
.equ UART2_AT_CMD_POSTCNT_REG,           (UART2_BASE + UART_AT_CMD_POSTCNT_OFF)
.equ UART2_AT_CMD_PRECHAR_REG,           (UART2_BASE + UART_AT_CMD_PRECHAR_OFF)
.equ UART2_AT_CMD_CHAR_REG,              (UART2_BASE + UART_AT_CMD_CHAR_OFF)
.equ UART2_MEM_CONF_REG,                 (UART2_BASE + UART_MEM_CONF_OFF)
.equ UART2_MEM_TX_STATUS_REG,            (UART2_BASE + UART_MEM_TX_STATUS_OFF)
.equ UART2_MEM_RX_STATUS_REG,            (UART2_BASE + UART_MEM_RX_STATUS_OFF)


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

.equ TIMG_T0CONFIG_OFF,                  0x000
.equ TIMG_T0LO_OFF,                      0x004
.equ TIMG_T0HI_OFF,                      0x008
.equ TIMG_T0UPDATE_OFF,                  0x00C
.equ TIMG_T0ALARMLO_OFF,                 0x010
.equ TIMG_T0ALARMHI_OFF,                 0x014
.equ TIMG_T0LOADLO_OFF,                  0x018
.equ TIMG_T0LOADHI_OFF,                  0x01C
.equ TIMG_T0LOAD_OFF,                    0x020
.equ TIMG_T1CONFIG_OFF,                  0x024
.equ TIMG_T1LO_OFF,                      0x028
.equ TIMG_T1HI_OFF,                      0x02C
.equ TIMG_T1UPDATE_OFF,                  0x030
.equ TIMG_T1ALARMLO_OFF,                 0x034
.equ TIMG_T1ALARMHI_OFF,                 0x038
.equ TIMG_T1LOADLO_OFF,                  0x03C
.equ TIMG_T1LOADHI_OFF,                  0x040
.equ TIMG_T1LOAD_OFF,                    0x044
.equ TIMG_WDTCONFIG0_OFF,                0x048
.equ TIMG_WDTCONFIG1_OFF,                0x04C
.equ TIMG_WDTCONFIG2_OFF,                0x050
.equ TIMG_WDTCONFIG3_OFF,                0x054
.equ TIMG_WDTCONFIG4_OFF,                0x058
.equ TIMG_WDTCONFIG5_OFF,                0x05C
.equ TIMG_WDTFEED_OFF,                   0x060
.equ TIMG_WDTWPROTECT_OFF,               0x064
.equ TIMG_RTCCALICFG_OFF,                0x068
.equ TIMG_RTCCALICFG1_OFF,               0x06C
.equ TIMG_INT_ENA_TIMERS_OFF,            0x070
.equ TIMG_INT_RAW_TIMERS_OFF,            0x074
.equ TIMG_INT_ST_TIMERS_OFF,             0x078
.equ TIMG_INT_CLR_TIMERS_OFF,            0x07C

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
.equ TIMG0_T1CONFIG_REG,                 (TIMG0_BASE + TIMG_T1CONFIG_OFF)
.equ TIMG0_T1LO_REG,                     (TIMG0_BASE + TIMG_T1LO_OFF)
.equ TIMG0_T1HI_REG,                     (TIMG0_BASE + TIMG_T1HI_OFF)
.equ TIMG0_T1UPDATE_REG,                 (TIMG0_BASE + TIMG_T1UPDATE_OFF)
.equ TIMG0_T1ALARMLO_REG,                (TIMG0_BASE + TIMG_T1ALARMLO_OFF)
.equ TIMG0_T1ALARMHI_REG,                (TIMG0_BASE + TIMG_T1ALARMHI_OFF)
.equ TIMG0_T1LOADLO_REG,                 (TIMG0_BASE + TIMG_T1LOADLO_OFF)
.equ TIMG0_T1LOADHI_REG,                 (TIMG0_BASE + TIMG_T1LOADHI_OFF)
.equ TIMG0_T1LOAD_REG,                   (TIMG0_BASE + TIMG_T1LOAD_OFF)
.equ TIMG0_WDTCONFIG2_REG,               (TIMG0_BASE + TIMG_WDTCONFIG2_OFF)
.equ TIMG0_WDTCONFIG3_REG,               (TIMG0_BASE + TIMG_WDTCONFIG3_OFF)
.equ TIMG0_WDTCONFIG4_REG,               (TIMG0_BASE + TIMG_WDTCONFIG4_OFF)
.equ TIMG0_WDTCONFIG5_REG,               (TIMG0_BASE + TIMG_WDTCONFIG5_OFF)
.equ TIMG0_WDTWPROTECT_REG,              (TIMG0_BASE + TIMG_WDTWPROTECT_OFF)
.equ TIMG0_RTCCALICFG_REG,               (TIMG0_BASE + TIMG_RTCCALICFG_OFF)
.equ TIMG0_RTCCALICFG1_REG,              (TIMG0_BASE + TIMG_RTCCALICFG1_OFF)
.equ TIMG0_INT_ENA_TIMERS_REG,           (TIMG0_BASE + TIMG_INT_ENA_TIMERS_OFF)
.equ TIMG0_INT_RAW_TIMERS_REG,           (TIMG0_BASE + TIMG_INT_RAW_TIMERS_OFF)
.equ TIMG0_INT_ST_TIMERS_REG,            (TIMG0_BASE + TIMG_INT_ST_TIMERS_OFF)
.equ TIMG0_INT_CLR_TIMERS_REG,           (TIMG0_BASE + TIMG_INT_CLR_TIMERS_OFF)

.equ TIMG1_T0CONFIG_REG,                 0x60020000
.equ TIMG1_T0LO_REG,                     0x60020004
.equ TIMG1_T0HI_REG,                     0x60020008
.equ TIMG1_T0UPDATE_REG,                 0x6002000C
.equ TIMG1_T0ALARMLO_REG,                (TIMG1_BASE + TIMG_T0ALARMLO_OFF)
.equ TIMG1_T0ALARMHI_REG,                (TIMG1_BASE + TIMG_T0ALARMHI_OFF)
.equ TIMG1_T0LOADLO_REG,                 (TIMG1_BASE + TIMG_T0LOADLO_OFF)
.equ TIMG1_T0LOADHI_REG,                 (TIMG1_BASE + TIMG_T0LOADHI_OFF)
.equ TIMG1_T0LOAD_REG,                   (TIMG1_BASE + TIMG_T0LOAD_OFF)
.equ TIMG1_T1CONFIG_REG,                 (TIMG1_BASE + TIMG_T1CONFIG_OFF)
.equ TIMG1_T1LO_REG,                     (TIMG1_BASE + TIMG_T1LO_OFF)
.equ TIMG1_T1HI_REG,                     (TIMG1_BASE + TIMG_T1HI_OFF)
.equ TIMG1_T1UPDATE_REG,                 (TIMG1_BASE + TIMG_T1UPDATE_OFF)
.equ TIMG1_T1ALARMLO_REG,                (TIMG1_BASE + TIMG_T1ALARMLO_OFF)
.equ TIMG1_T1ALARMHI_REG,                (TIMG1_BASE + TIMG_T1ALARMHI_OFF)
.equ TIMG1_T1LOADLO_REG,                 (TIMG1_BASE + TIMG_T1LOADLO_OFF)
.equ TIMG1_T1LOADHI_REG,                 (TIMG1_BASE + TIMG_T1LOADHI_OFF)
.equ TIMG1_T1LOAD_REG,                   (TIMG1_BASE + TIMG_T1LOAD_OFF)
.equ TIMG1_WDTCONFIG0_REG,               (TIMG1_BASE + TIMG_WDTCONFIG0_OFF)
.equ TIMG1_WDTCONFIG1_REG,               (TIMG1_BASE + TIMG_WDTCONFIG1_OFF)
.equ TIMG1_WDTCONFIG2_REG,               (TIMG1_BASE + TIMG_WDTCONFIG2_OFF)
.equ TIMG1_WDTCONFIG3_REG,               (TIMG1_BASE + TIMG_WDTCONFIG3_OFF)
.equ TIMG1_WDTCONFIG4_REG,               (TIMG1_BASE + TIMG_WDTCONFIG4_OFF)
.equ TIMG1_WDTCONFIG5_REG,               (TIMG1_BASE + TIMG_WDTCONFIG5_OFF)
.equ TIMG1_WDTFEED_REG,                  (TIMG1_BASE + TIMG_WDTFEED_OFF)
.equ TIMG1_WDTWPROTECT_REG,              (TIMG1_BASE + TIMG_WDTWPROTECT_OFF)
.equ TIMG1_RTCCALICFG_REG,               (TIMG1_BASE + TIMG_RTCCALICFG_OFF)
.equ TIMG1_RTCCALICFG1_REG,              (TIMG1_BASE + TIMG_RTCCALICFG1_OFF)
.equ TIMG1_INT_ENA_TIMERS_REG,           (TIMG1_BASE + TIMG_INT_ENA_TIMERS_OFF)
.equ TIMG1_INT_RAW_TIMERS_REG,           (TIMG1_BASE + TIMG_INT_RAW_TIMERS_OFF)
.equ TIMG1_INT_ST_TIMERS_REG,            (TIMG1_BASE + TIMG_INT_ST_TIMERS_OFF)
.equ TIMG1_INT_CLR_TIMERS_REG,           (TIMG1_BASE + TIMG_INT_CLR_TIMERS_OFF)

.equ SYSTIMER_CONF_REG,                  0x60023000
.equ SYSTIMER_UNIT0_OP_REG,              0x60023004
.equ SYSTIMER_UNIT1_OP_REG,              0x60023008
.equ SYSTIMER_TARGET0_CONF_REG,          0x60023034
.equ SYSTIMER_TARGET1_CONF_REG,          0x60023038
.equ SYSTIMER_TARGET2_CONF_REG,          0x6002303C
.equ SYSTIMER_UNIT0_LOAD_HI_REG,         (SYSTIMER_BASE + 0x00C)
.equ SYSTIMER_UNIT0_LOAD_LO_REG,         (SYSTIMER_BASE + 0x010)
.equ SYSTIMER_UNIT1_LOAD_HI_REG,         (SYSTIMER_BASE + 0x014)
.equ SYSTIMER_UNIT1_LOAD_LO_REG,         (SYSTIMER_BASE + 0x018)
.equ SYSTIMER_TARGET0_HI_REG,            (SYSTIMER_BASE + 0x01C)
.equ SYSTIMER_TARGET0_LO_REG,            (SYSTIMER_BASE + 0x020)
.equ SYSTIMER_TARGET1_HI_REG,            (SYSTIMER_BASE + 0x024)
.equ SYSTIMER_TARGET1_LO_REG,            (SYSTIMER_BASE + 0x028)
.equ SYSTIMER_TARGET2_HI_REG,            (SYSTIMER_BASE + 0x02C)
.equ SYSTIMER_TARGET2_LO_REG,            (SYSTIMER_BASE + 0x030)
.equ SYSTIMER_UNIT0_VALUE_HI_REG,        (SYSTIMER_BASE + 0x040)
.equ SYSTIMER_UNIT0_VALUE_LO_REG,        (SYSTIMER_BASE + 0x044)
.equ SYSTIMER_UNIT1_VALUE_HI_REG,        (SYSTIMER_BASE + 0x048)
.equ SYSTIMER_UNIT1_VALUE_LO_REG,        (SYSTIMER_BASE + 0x04C)
.equ SYSTIMER_TARGET0_LOAD_REG,          (SYSTIMER_BASE + 0x050)
.equ SYSTIMER_TARGET1_LOAD_REG,          (SYSTIMER_BASE + 0x054)
.equ SYSTIMER_TARGET2_LOAD_REG,          (SYSTIMER_BASE + 0x058)
.equ SYSTIMER_UNIT0_LOAD_REG,            (SYSTIMER_BASE + 0x05C)
.equ SYSTIMER_UNIT1_LOAD_REG,            (SYSTIMER_BASE + 0x060)
.equ SYSTIMER_INT_ENA_REG,               (SYSTIMER_BASE + 0x064)
.equ SYSTIMER_INT_RAW_REG,               (SYSTIMER_BASE + 0x068)
.equ SYSTIMER_INT_CLR_REG,               (SYSTIMER_BASE + 0x06C)
.equ SYSTIMER_INT_ST_REG,                (SYSTIMER_BASE + 0x070)
.equ SYSTIMER_TARGET0_VALUE_LO_REG,      (SYSTIMER_BASE + 0x074)
.equ SYSTIMER_TARGET0_VALUE_HI_REG,      (SYSTIMER_BASE + 0x078)
.equ SYSTIMER_TARGET1_VALUE_LO_REG,      (SYSTIMER_BASE + 0x07C)
.equ SYSTIMER_TARGET1_VALUE_HI_REG,      (SYSTIMER_BASE + 0x080)
.equ SYSTIMER_TARGET2_VALUE_LO_REG,      (SYSTIMER_BASE + 0x084)
.equ SYSTIMER_TARGET2_VALUE_HI_REG,      (SYSTIMER_BASE + 0x088)
.equ SYSTIMER_DATE_REG,                  (SYSTIMER_BASE + 0x0FC)


# ------------------------------------------------------------------------------
# 12. SPI2 / SPI3 (General Purpose SPI / GPSPI)
# ------------------------------------------------------------------------------
.equ SPI2_BASE,                          0x60024000
.equ SPI3_BASE,                          0x60025000

.equ SPI_CMD_OFF,                        0x000
.equ SPI_ADDR_OFF,                       0x004
.equ SPI_CTRL_OFF,                       0x008
.equ SPI_CLOCK_OFF,                      0x00C
.equ SPI_USER_OFF,                       0x010
.equ SPI_USER1_OFF,                      0x014
.equ SPI_USER2_OFF,                      0x018
.equ SPI_MS_DLEN_OFF,                    0x01C
.equ SPI_MISC_OFF,                       0x020
.equ SPI_DATA_OFF,                       0x080
.equ SPI_W0_OFF,                         0x080
.equ SPI_W1_OFF,                         0x084
.equ SPI_W2_OFF,                         0x088
.equ SPI_W3_OFF,                         0x08C
.equ SPI_W4_OFF,                         0x090
.equ SPI_W5_OFF,                         0x094
.equ SPI_W6_OFF,                         0x098
.equ SPI_W7_OFF,                         0x09C
.equ SPI_W8_OFF,                         0x0A0
.equ SPI_W9_OFF,                         0x0A4
.equ SPI_W10_OFF,                        0x0A8
.equ SPI_W11_OFF,                        0x0AC
.equ SPI_W12_OFF,                        0x0B0
.equ SPI_W13_OFF,                        0x0B4
.equ SPI_W14_OFF,                        0x0B8
.equ SPI_W15_OFF,                        0x0BC

.equ SPI2_CMD_REG,                       0x60024000
.equ SPI2_ADDR_REG,                      0x60024004
.equ SPI2_CTRL_REG,                      0x60024008
.equ SPI2_CLOCK_REG,                     (SPI2_BASE + SPI_CLOCK_OFF)
.equ SPI2_USER_REG,                      (SPI2_BASE + SPI_USER_OFF)
.equ SPI2_USER1_REG,                     (SPI2_BASE + SPI_USER1_OFF)
.equ SPI2_USER2_REG,                     (SPI2_BASE + SPI_USER2_OFF)
.equ SPI2_MS_DLEN_REG,                   (SPI2_BASE + SPI_MS_DLEN_OFF)
.equ SPI2_MOSI_DLEN_REG,                 0x60024028
.equ SPI2_MISO_DLEN_REG,                 0x6002402C
.equ SPI2_W0_REG,                        (SPI2_BASE + SPI_W0_OFF)
.equ SPI2_MISC_REG,                      (SPI2_BASE + SPI_MISC_OFF)
.equ SPI2_W1_REG,                        (SPI2_BASE + SPI_W1_OFF)
.equ SPI2_W2_REG,                        (SPI2_BASE + SPI_W2_OFF)
.equ SPI2_W3_REG,                        (SPI2_BASE + SPI_W3_OFF)
.equ SPI2_W4_REG,                        (SPI2_BASE + SPI_W4_OFF)
.equ SPI2_W5_REG,                        (SPI2_BASE + SPI_W5_OFF)
.equ SPI2_W6_REG,                        (SPI2_BASE + SPI_W6_OFF)
.equ SPI2_W7_REG,                        (SPI2_BASE + SPI_W7_OFF)
.equ SPI2_W8_REG,                        (SPI2_BASE + SPI_W8_OFF)
.equ SPI2_W9_REG,                        (SPI2_BASE + SPI_W9_OFF)
.equ SPI2_W10_REG,                       (SPI2_BASE + SPI_W10_OFF)
.equ SPI2_W11_REG,                       (SPI2_BASE + SPI_W11_OFF)
.equ SPI2_W12_REG,                       (SPI2_BASE + SPI_W12_OFF)
.equ SPI2_W13_REG,                       (SPI2_BASE + SPI_W13_OFF)
.equ SPI2_W14_REG,                       (SPI2_BASE + SPI_W14_OFF)
.equ SPI2_W15_REG,                       (SPI2_BASE + SPI_W15_OFF)

.equ SPI3_CMD_REG,                       0x60025000
.equ SPI3_ADDR_REG,                      0x60025004
.equ SPI3_CTRL_REG,                      0x60025008
.equ SPI3_CLOCK_REG,                     (SPI3_BASE + SPI_CLOCK_OFF)
.equ SPI3_USER_REG,                      (SPI3_BASE + SPI_USER_OFF)
.equ SPI3_USER1_REG,                     (SPI3_BASE + SPI_USER1_OFF)
.equ SPI3_USER2_REG,                     (SPI3_BASE + SPI_USER2_OFF)
.equ SPI3_MS_DLEN_REG,                   (SPI3_BASE + SPI_MS_DLEN_OFF)
.equ SPI3_MOSI_DLEN_REG,                 0x60025028
.equ SPI3_MISO_DLEN_REG,                 0x6002502C
.equ SPI3_W0_REG,                        (SPI3_BASE + SPI_W0_OFF)
.equ SPI3_MISC_REG,                      (SPI3_BASE + SPI_MISC_OFF)
.equ SPI3_W1_REG,                        (SPI3_BASE + SPI_W1_OFF)
.equ SPI3_W2_REG,                        (SPI3_BASE + SPI_W2_OFF)
.equ SPI3_W3_REG,                        (SPI3_BASE + SPI_W3_OFF)
.equ SPI3_W4_REG,                        (SPI3_BASE + SPI_W4_OFF)
.equ SPI3_W5_REG,                        (SPI3_BASE + SPI_W5_OFF)
.equ SPI3_W6_REG,                        (SPI3_BASE + SPI_W6_OFF)
.equ SPI3_W7_REG,                        (SPI3_BASE + SPI_W7_OFF)
.equ SPI3_W8_REG,                        (SPI3_BASE + SPI_W8_OFF)
.equ SPI3_W9_REG,                        (SPI3_BASE + SPI_W9_OFF)
.equ SPI3_W10_REG,                       (SPI3_BASE + SPI_W10_OFF)
.equ SPI3_W11_REG,                       (SPI3_BASE + SPI_W11_OFF)
.equ SPI3_W12_REG,                       (SPI3_BASE + SPI_W12_OFF)
.equ SPI3_W13_REG,                       (SPI3_BASE + SPI_W13_OFF)
.equ SPI3_W14_REG,                       (SPI3_BASE + SPI_W14_OFF)
.equ SPI3_W15_REG,                       (SPI3_BASE + SPI_W15_OFF)


# ------------------------------------------------------------------------------
# 13. I2C0 / I2C1 Controller
# ------------------------------------------------------------------------------
.equ I2C0_BASE,                          0x60013000
.equ I2C1_BASE,                          0x60027000

.equ I2C_SCL_LOW_PERIOD_OFF,              0x000
.equ I2C_CTR_OFF,                         0x004
.equ I2C_SR_OFF,                          0x008
.equ I2C_TO_OFF,                          0x00C
.equ I2C_SLAVE_ADDR_OFF,                  0x010
.equ I2C_FIFO_ST_OFF,                     0x014
.equ I2C_FIFO_CONF_OFF,                   0x018
.equ I2C_DATA_FIFO_OFF,                   0x01C
.equ I2C_INT_RAW_OFF,                     0x020
.equ I2C_INT_CLR_OFF,                     0x024
.equ I2C_SDA_HOLD_OFF,                    0x030
.equ I2C_SDA_SAMPLE_OFF,                  0x034
.equ I2C_SCL_HIGH_PERIOD_OFF,             0x038
.equ I2C_SCL_START_HOLD_OFF,              0x040
.equ I2C_SCL_RSTART_SETUP_OFF,            0x044
.equ I2C_SCL_STOP_HOLD_OFF,               0x048
.equ I2C_SCL_STOP_SETUP_OFF,              0x04C
.equ I2C_FILTER_CFG_OFF,                  0x050
.equ I2C_CLK_CONF_OFF,                    0x054
.equ I2C_COMD0_OFF,                       0x058
.equ I2C_COMD1_OFF,                       0x05C
.equ I2C_COMD2_OFF,                       0x060
.equ I2C_COMD3_OFF,                       0x064
.equ I2C_COMD4_OFF,                       0x068
.equ I2C_COMD5_OFF,                       0x06C
.equ I2C_COMD6_OFF,                       0x070
.equ I2C_COMD7_OFF,                       0x074
.equ I2C_SCL_ST_TIME_OUT_OFF,             0x078
.equ I2C_SCL_MAIN_ST_TIME_OUT_OFF,        0x07C
.equ I2C_SCL_SP_CONF_OFF,                 0x080
.equ I2C_SCL_STRETCH_CONF_OFF,            0x084

.equ I2C0_SCL_LOW_PERIOD_REG,            0x60013000
.equ I2C0_CTR_REG,                       0x60013004
.equ I2C0_SR_REG,                        0x60013008
.equ I2C0_TO_REG,                        0x6001300C
.equ I2C0_FIFO_CONF_REG,                 (I2C0_BASE + I2C_FIFO_CONF_OFF)
.equ I2C0_DATA_FIFO_REG,                 0x6001301C
.equ I2C0_SLAVE_ADDR_REG,                (I2C0_BASE + I2C_SLAVE_ADDR_OFF)
.equ I2C0_FIFO_ST_REG,                   (I2C0_BASE + I2C_FIFO_ST_OFF)
.equ I2C0_INT_RAW_REG,                   (I2C0_BASE + I2C_INT_RAW_OFF)
.equ I2C0_INT_CLR_REG,                   (I2C0_BASE + I2C_INT_CLR_OFF)
.equ I2C0_SDA_HOLD_REG,                  (I2C0_BASE + I2C_SDA_HOLD_OFF)
.equ I2C0_SDA_SAMPLE_REG,                (I2C0_BASE + I2C_SDA_SAMPLE_OFF)
.equ I2C0_SCL_HIGH_PERIOD_REG,           (I2C0_BASE + I2C_SCL_HIGH_PERIOD_OFF)
.equ I2C0_SCL_START_HOLD_REG,            (I2C0_BASE + I2C_SCL_START_HOLD_OFF)
.equ I2C0_SCL_RSTART_SETUP_REG,          (I2C0_BASE + I2C_SCL_RSTART_SETUP_OFF)
.equ I2C0_SCL_STOP_HOLD_REG,             (I2C0_BASE + I2C_SCL_STOP_HOLD_OFF)
.equ I2C0_SCL_STOP_SETUP_REG,            (I2C0_BASE + I2C_SCL_STOP_SETUP_OFF)
.equ I2C0_FILTER_CFG_REG,                (I2C0_BASE + I2C_FILTER_CFG_OFF)
.equ I2C0_CLK_CONF_REG,                  (I2C0_BASE + I2C_CLK_CONF_OFF)
.equ I2C0_COMD0_REG,                     (I2C0_BASE + I2C_COMD0_OFF)
.equ I2C0_COMD1_REG,                     (I2C0_BASE + I2C_COMD1_OFF)
.equ I2C0_COMD2_REG,                     (I2C0_BASE + I2C_COMD2_OFF)
.equ I2C0_COMD3_REG,                     (I2C0_BASE + I2C_COMD3_OFF)
.equ I2C0_COMD4_REG,                     (I2C0_BASE + I2C_COMD4_OFF)
.equ I2C0_COMD5_REG,                     (I2C0_BASE + I2C_COMD5_OFF)
.equ I2C0_COMD6_REG,                     (I2C0_BASE + I2C_COMD6_OFF)
.equ I2C0_COMD7_REG,                     (I2C0_BASE + I2C_COMD7_OFF)
.equ I2C0_SCL_ST_TIME_OUT_REG,           (I2C0_BASE + I2C_SCL_ST_TIME_OUT_OFF)
.equ I2C0_SCL_MAIN_ST_TIME_OUT_REG,      (I2C0_BASE + I2C_SCL_MAIN_ST_TIME_OUT_OFF)
.equ I2C0_SCL_SP_CONF_REG,               (I2C0_BASE + I2C_SCL_SP_CONF_OFF)
.equ I2C0_SCL_STRETCH_CONF_REG,          (I2C0_BASE + I2C_SCL_STRETCH_CONF_OFF)

.equ I2C1_SCL_LOW_PERIOD_REG,            0x60027000
.equ I2C1_CTR_REG,                       0x60027004
.equ I2C1_SR_REG,                        0x60027008
.equ I2C1_TO_REG,                        0x6002700C
.equ I2C1_FIFO_CONF_REG,                 (I2C1_BASE + I2C_FIFO_CONF_OFF)
.equ I2C1_DATA_FIFO_REG,                 0x6002701C
.equ I2C1_SLAVE_ADDR_REG,                (I2C1_BASE + I2C_SLAVE_ADDR_OFF)
.equ I2C1_FIFO_ST_REG,                   (I2C1_BASE + I2C_FIFO_ST_OFF)
.equ I2C1_INT_RAW_REG,                   (I2C1_BASE + I2C_INT_RAW_OFF)
.equ I2C1_INT_CLR_REG,                   (I2C1_BASE + I2C_INT_CLR_OFF)
.equ I2C1_SDA_HOLD_REG,                  (I2C1_BASE + I2C_SDA_HOLD_OFF)
.equ I2C1_SDA_SAMPLE_REG,                (I2C1_BASE + I2C_SDA_SAMPLE_OFF)
.equ I2C1_SCL_HIGH_PERIOD_REG,           (I2C1_BASE + I2C_SCL_HIGH_PERIOD_OFF)
.equ I2C1_SCL_START_HOLD_REG,            (I2C1_BASE + I2C_SCL_START_HOLD_OFF)
.equ I2C1_SCL_RSTART_SETUP_REG,          (I2C1_BASE + I2C_SCL_RSTART_SETUP_OFF)
.equ I2C1_SCL_STOP_HOLD_REG,             (I2C1_BASE + I2C_SCL_STOP_HOLD_OFF)
.equ I2C1_SCL_STOP_SETUP_REG,            (I2C1_BASE + I2C_SCL_STOP_SETUP_OFF)
.equ I2C1_FILTER_CFG_REG,                (I2C1_BASE + I2C_FILTER_CFG_OFF)
.equ I2C1_CLK_CONF_REG,                  (I2C1_BASE + I2C_CLK_CONF_OFF)
.equ I2C1_COMD0_REG,                     (I2C1_BASE + I2C_COMD0_OFF)
.equ I2C1_COMD1_REG,                     (I2C1_BASE + I2C_COMD1_OFF)
.equ I2C1_COMD2_REG,                     (I2C1_BASE + I2C_COMD2_OFF)
.equ I2C1_COMD3_REG,                     (I2C1_BASE + I2C_COMD3_OFF)
.equ I2C1_COMD4_REG,                     (I2C1_BASE + I2C_COMD4_OFF)
.equ I2C1_COMD5_REG,                     (I2C1_BASE + I2C_COMD5_OFF)
.equ I2C1_COMD6_REG,                     (I2C1_BASE + I2C_COMD6_OFF)
.equ I2C1_COMD7_REG,                     (I2C1_BASE + I2C_COMD7_OFF)
.equ I2C1_SCL_ST_TIME_OUT_REG,           (I2C1_BASE + I2C_SCL_ST_TIME_OUT_OFF)
.equ I2C1_SCL_MAIN_ST_TIME_OUT_REG,      (I2C1_BASE + I2C_SCL_MAIN_ST_TIME_OUT_OFF)
.equ I2C1_SCL_SP_CONF_REG,               (I2C1_BASE + I2C_SCL_SP_CONF_OFF)
.equ I2C1_SCL_STRETCH_CONF_REG,          (I2C1_BASE + I2C_SCL_STRETCH_CONF_OFF)


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
.equ TWAI0_BASE,                         0x6002B000

.equ TWAI0_MODE_REG,                     (TWAI0_BASE + 0x000)
.equ TWAI0_CMD_REG,                      (TWAI0_BASE + 0x004)
.equ TWAI0_STATUS_REG,                   (TWAI0_BASE + 0x008)
.equ TWAI0_INT_RAW_REG,                  (TWAI0_BASE + 0x00C)
.equ TWAI0_INT_ENA_REG,                  (TWAI0_BASE + 0x010)
.equ TWAI0_BUS_TIMING_0_REG,             (TWAI0_BASE + 0x018)
.equ TWAI0_BUS_TIMING_1_REG,             (TWAI0_BASE + 0x01C)


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
.equ LCD_CAM_BASE,                       0x60041000

.equ LCD_CAM_LCD_USER_REG,               (LCD_CAM_BASE + 0x14)
.equ LCD_CAM_LCD_MISC_REG,               (LCD_CAM_BASE + 0x18)
.equ LCD_CAM_LCD_DATA_DOUT_MODE_REG,     (LCD_CAM_BASE + 0x38)
.equ LCD_CAM_LCD_DLY_MODE_CFG_REG,       (LCD_CAM_BASE + 0x30)
.equ LCD_CAM_LCD_CTRL_REG,               (LCD_CAM_BASE + 0x1C)
.equ LCD_CAM_LCD_CTRL1_REG,              (LCD_CAM_BASE + 0x20)
.equ LCD_CAM_LCD_CTRL2_REG,              (LCD_CAM_BASE + 0x24)
.equ LCD_CAM_LCD_RGB_YUV_REG,            (LCD_CAM_BASE + 0x10)
.equ LCD_CAM_LCD_CLOCK_REG,              (LCD_CAM_BASE + 0x00)

.equ LCD_CAM_CAM_CTRL_REG,               (LCD_CAM_BASE + 0x04)
.equ LCD_CAM_CAM_CTRL1_REG,              (LCD_CAM_BASE + 0x08)
.equ LCD_CAM_CAM_RGB_YUV_REG,            (LCD_CAM_BASE + 0x0C)


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