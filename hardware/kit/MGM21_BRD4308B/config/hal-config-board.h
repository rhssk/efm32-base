#ifndef HAL_CONFIG_BOARD_H
#define HAL_CONFIG_BOARD_H

#include "em_device.h"
#include "hal-config-types.h"

// This file is auto-generated by Hardware Configurator in Simplicity Studio.
// Any content between $[ and ]$ will be replaced whenever the file is regenerated.
// Content outside these regions will be preserved.

// $[ACMP0]
// [ACMP0]$

// $[ACMP1]
// [ACMP1]$

// $[ANTDIV]
// [ANTDIV]$

// $[BTL_BUTTON]

#define BSP_BTL_BUTTON_PIN                            (0U)
#define BSP_BTL_BUTTON_PORT                           (gpioPortB)

// [BTL_BUTTON]$

// $[BUTTON]
#define BSP_BUTTON_PRESENT                            (1)

#define BSP_BUTTON0_PIN                               (0U)
#define BSP_BUTTON0_PORT                              (gpioPortB)

#define BSP_BUTTON1_PIN                               (1U)
#define BSP_BUTTON1_PORT                              (gpioPortB)

#define BSP_BUTTON_COUNT                              (2U)
#define BSP_BUTTON_INIT                               { { BSP_BUTTON0_PORT, BSP_BUTTON0_PIN }, { BSP_BUTTON1_PORT, BSP_BUTTON1_PIN } }
#define BSP_BUTTON_GPIO_DOUT                          (HAL_GPIO_DOUT_LOW)
#define BSP_BUTTON_GPIO_MODE                          (HAL_GPIO_MODE_INPUT)
// [BUTTON]$

// $[CMU]
#define BSP_CLK_HFXO_PRESENT                          (1)
#define BSP_CLK_HFXO_FREQ                             (38400000UL)
#define BSP_CLK_HFXO_INIT                              CMU_HFXOINIT_DEFAULT
#define BSP_CLK_HFXO_CTUNE                            (133)
#define BSP_CLK_LFXO_PRESENT                          (1)
#define BSP_CLK_LFXO_INIT                              CMU_LFXOINIT_DEFAULT
#define BSP_CLK_LFXO_FREQ                             (32768U)
#define BSP_CLK_LFXO_CTUNE                            (79U)
// [CMU]$

// $[COEX]
// [COEX]$

// $[EMU]
// [EMU]$

// $[EXTFLASH]
// [EXTFLASH]$

// $[EZRADIOPRO]
// [EZRADIOPRO]$

// $[GPIO]
#define PORTIO_GPIO_SWV_PIN                           (3U)
#define PORTIO_GPIO_SWV_PORT                          (gpioPortA)

#define BSP_TRACE_SWO_PIN                             (3U)
#define BSP_TRACE_SWO_PORT                            (gpioPortA)

// [GPIO]$

// $[I2C0]
// [I2C0]$

// $[I2C1]
// [I2C1]$

// $[I2CSENSOR]
// [I2CSENSOR]$

// $[IADC0]
// [IADC0]$

// $[IOEXP]
// [IOEXP]$

// $[LED]
#define BSP_LED_PRESENT                               (1)

#define BSP_LED0_PIN                                  (0U)
#define BSP_LED0_PORT                                 (gpioPortB)

#define BSP_LED1_PIN                                  (1U)
#define BSP_LED1_PORT                                 (gpioPortB)

#define BSP_LED_COUNT                                 (2U)
#define BSP_LED_INIT                                  { { BSP_LED0_PORT, BSP_LED0_PIN }, { BSP_LED1_PORT, BSP_LED1_PIN } }
#define BSP_LED_POLARITY                              (0)
// [LED]$

// $[LETIMER0]
// [LETIMER0]$

// $[LFXO]
// [LFXO]$

// $[MODEM]
// [MODEM]$

// $[PA]

#define BSP_PA_VOLTAGE                                (3300U)
// [PA]$

// $[PORTIO]
// [PORTIO]$

// $[PRS]
#define PORTIO_PRS_ASYNCH4_PIN                        (0U)
#define PORTIO_PRS_ASYNCH4_PORT                       (gpioPortA)

// [PRS]$

// $[PTI]
#define PORTIO_PTI_DFRAME_PIN                         (5U)
#define PORTIO_PTI_DFRAME_PORT                        (gpioPortC)

#define PORTIO_PTI_DOUT_PIN                           (4U)
#define PORTIO_PTI_DOUT_PORT                          (gpioPortC)

#define BSP_PTI_DFRAME_PIN                            (5U)
#define BSP_PTI_DFRAME_PORT                           (gpioPortC)

#define BSP_PTI_DOUT_PIN                              (4U)
#define BSP_PTI_DOUT_PORT                             (gpioPortC)

// [PTI]$

// $[SERIAL]
#define BSP_SERIAL_APP_PORT                           (HAL_SERIAL_PORT_USART0)
#define BSP_SERIAL_APP_TX_PIN                         (5U)
#define BSP_SERIAL_APP_TX_PORT                        (gpioPortA)

#define BSP_SERIAL_APP_RX_PIN                         (6U)
#define BSP_SERIAL_APP_RX_PORT                        (gpioPortA)

#define BSP_SERIAL_APP_CTS_PIN                        (2U)
#define BSP_SERIAL_APP_CTS_PORT                       (gpioPortD)

#define BSP_SERIAL_APP_RTS_PIN                        (1U)
#define BSP_SERIAL_APP_RTS_PORT                       (gpioPortC)

// [SERIAL]$

// $[SPIDISPLAY]

#define BSP_SPIDISPLAY_CS_PIN                         (3U)
#define BSP_SPIDISPLAY_CS_PORT                        (gpioPortC)

#define BSP_SPIDISPLAY_ENABLE_PIN                     (4U)
#define BSP_SPIDISPLAY_ENABLE_PORT                    (gpioPortD)

#define BSP_SPIDISPLAY_EXTCOMIN_PIN                   (0U)
#define BSP_SPIDISPLAY_EXTCOMIN_PORT                  (gpioPortA)

#define BSP_SPIDISPLAY_DISPLAY                        (HAL_DISPLAY_SHARP_LS013B7DH03)
#define BSP_SPIDISPLAY_USART                          (HAL_SPI_PORT_USART2)
#define BSP_SPIDISPLAY_EXTCOMIN_CHANNEL               (4)
#define BSP_SPIDISPLAY_MOSI_PIN                       (0U)
#define BSP_SPIDISPLAY_MOSI_PORT                      (gpioPortC)

#define BSP_SPIDISPLAY_MISO_PIN                       (1U)
#define BSP_SPIDISPLAY_MISO_PORT                      (gpioPortC)

#define BSP_SPIDISPLAY_CLK_PIN                        (2U)
#define BSP_SPIDISPLAY_CLK_PORT                       (gpioPortC)

// [SPIDISPLAY]$

// $[SPINCP]
#define BSP_SPINCP_NHOSTINT_PIN                       (0U)
#define BSP_SPINCP_NHOSTINT_PORT                      (gpioPortB)

#define BSP_SPINCP_NWAKE_PIN                          (1U)
#define BSP_SPINCP_NWAKE_PORT                         (gpioPortB)

#define BSP_SPINCP_USART_PORT                         (HAL_SPI_PORT_USART2)
#define BSP_SPINCP_MOSI_PIN                           (0U)
#define BSP_SPINCP_MOSI_PORT                          (gpioPortC)

#define BSP_SPINCP_MISO_PIN                           (1U)
#define BSP_SPINCP_MISO_PORT                          (gpioPortC)

#define BSP_SPINCP_CLK_PIN                            (2U)
#define BSP_SPINCP_CLK_PORT                           (gpioPortC)

#define BSP_SPINCP_CS_PIN                             (3U)
#define BSP_SPINCP_CS_PORT                            (gpioPortC)

// [SPINCP]$

// $[TIMER0]
// [TIMER0]$

// $[TIMER1]
// [TIMER1]$

// $[TIMER2]
// [TIMER2]$

// $[TIMER3]
// [TIMER3]$

// $[UARTNCP]
#define BSP_UARTNCP_USART_PORT                        (HAL_SERIAL_PORT_USART0)
#define BSP_UARTNCP_TX_PIN                            (5U)
#define BSP_UARTNCP_TX_PORT                           (gpioPortA)

#define BSP_UARTNCP_RX_PIN                            (6U)
#define BSP_UARTNCP_RX_PORT                           (gpioPortA)

#define BSP_UARTNCP_CTS_PIN                           (2U)
#define BSP_UARTNCP_CTS_PORT                          (gpioPortD)

#define BSP_UARTNCP_RTS_PIN                           (1U)
#define BSP_UARTNCP_RTS_PORT                          (gpioPortC)

// [UARTNCP]$

// $[USART0]
#define PORTIO_USART0_CTS_PIN                         (2U)
#define PORTIO_USART0_CTS_PORT                        (gpioPortD)

#define PORTIO_USART0_RTS_PIN                         (1U)
#define PORTIO_USART0_RTS_PORT                        (gpioPortC)

#define PORTIO_USART0_RX_PIN                          (6U)
#define PORTIO_USART0_RX_PORT                         (gpioPortA)

#define PORTIO_USART0_TX_PIN                          (5U)
#define PORTIO_USART0_TX_PORT                         (gpioPortA)

#define BSP_USART0_TX_PIN                             (5U)
#define BSP_USART0_TX_PORT                            (gpioPortA)

#define BSP_USART0_RX_PIN                             (6U)
#define BSP_USART0_RX_PORT                            (gpioPortA)

#define BSP_USART0_CTS_PIN                            (2U)
#define BSP_USART0_CTS_PORT                           (gpioPortD)

#define BSP_USART0_RTS_PIN                            (1U)
#define BSP_USART0_RTS_PORT                           (gpioPortC)

// [USART0]$

// $[USART1]
// [USART1]$

// $[USART2]
#define PORTIO_USART2_CLK_PIN                         (2U)
#define PORTIO_USART2_CLK_PORT                        (gpioPortC)

#define PORTIO_USART2_CS_PIN                          (3U)
#define PORTIO_USART2_CS_PORT                         (gpioPortC)

#define PORTIO_USART2_RX_PIN                          (1U)
#define PORTIO_USART2_RX_PORT                         (gpioPortC)

#define PORTIO_USART2_TX_PIN                          (0U)
#define PORTIO_USART2_TX_PORT                         (gpioPortC)

#define BSP_USART2_MOSI_PIN                           (0U)
#define BSP_USART2_MOSI_PORT                          (gpioPortC)

#define BSP_USART2_MISO_PIN                           (1U)
#define BSP_USART2_MISO_PORT                          (gpioPortC)

#define BSP_USART2_CLK_PIN                            (2U)
#define BSP_USART2_CLK_PORT                           (gpioPortC)

#define BSP_USART2_CS_PIN                             (3U)
#define BSP_USART2_CS_PORT                            (gpioPortC)

// [USART2]$

// $[VCOM]

#define BSP_VCOM_ENABLE_PIN                           (3U)
#define BSP_VCOM_ENABLE_PORT                          (gpioPortD)

// [VCOM]$

// $[VUART]
// [VUART]$

// $[WDOG]
// [WDOG]$

#if defined(_SILICON_LABS_MODULE)
#include "sl_module.h"
#endif

#endif /* HAL_CONFIG_BOARD_H */
