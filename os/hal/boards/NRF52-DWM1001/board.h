/*
    Copyright (C) 2021 UCM-237

    Licensed under the GPL License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        https://www.gnu.org/licenses/old-licenses/gpl-2.0.html

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

#ifndef _BOARD_H_
#define _BOARD_H_

/* Board identifier. */
#define BOARD_NRF52_DWM1001
#define BOARD_NAME              "nRF52 DWM1001"

/* Board oscillators-related settings. */
#define NRF5_XTAL_VALUE        32000000
#define NRF5_HFCLK_SOURCE      NRF5_HFCLK_HFXO
#define NRF5_LFCLK_SOURCE      NRF5_LFCLK_XTAL

#define NRF5_HFCLK_HFINT       0
#define NRF5_HFCLK_HFXO        1

#define NRF5_LFCLK_RC          0
#define NRF5_LFCLK_XTAL        1
#define NRF5_LFCLK_SYNTH       2

/*
 * GPIO pins.
 */
/* Defined by board */
#define SW1              21U
#define SW2               2U
#define GREEN_LED_D9     30U
#define BLUE_LED_D10     31U
#define RED_LED_D11      22U
#define RED_LED_D12      14U
#define DW_IRQ           19U
#define DW_RST           24U
//#define UART_RTS        5U
//#define UART_TX         6U
//#define UART_CTS        7U
//#define UART_RX         8U
//#define NFC1            9U
//#define NFC2           10U
//#define I2C_SCL        27U
//#define I2C_SDA        26U

/* Our definitions */
#define SPI_SCK          16U
#define SPI_MOSI         20U
#define SPI_MISO         18U
#define SPI_SS           17U

/* Analog input */
//#define AIN0            2U
//#define AIN1            3U
//#define AIN2            4U
//#define AIN3            5U
//#define AIN4           28U
//#define AIN5           29U
//#define AIN6           30U
//#define AIN7           31U
//#define AREF0         AIN0
//#define AREF1         AIN1

/*
 * IO pins assignments.
 */
/* Defined by board */
#define IOPORT1_SW1            21U
#define IOPORT1_SW2             2U
#define IOPORT1_GREEN_LED_D9   30U
#define IOPORT1_BLUE_LED_D10   31U
#define IOPORT1_RED_LED_D11    22U
#define IOPORT1_RED_LED_D12    14U
#define IOPORT1_DW_IRQ         19U
#define IOPORT1_DW_RST         24U
//#define IOPORT1_UART_RTS        5U
//#define IOPORT1_UART_TX         6U
//#define IOPORT1_UART_CTS        7U
//#define IOPORT1_UART_RX         8U
//#define IOPORT1_NFC1            9U
//#define IOPORT1_NFC2           10U
//#define IOPORT1_I2C_SCL        27U
//#define IOPORT1_I2C_SDA        26U
//#define IOPORT1_RESET          21U

/* Our definitions */
#define IOPORT1_SPI_SCK        16U
#define IOPORT1_SPI_MOSI       20U
#define IOPORT1_SPI_MISO       18U
#define IOPORT1_SPI_SS         17U

/* Analog inpupt */
//#define IOPORT1_AIN0            2U
//#define IOPORT1_AIN1            3U
//#define IOPORT1_AIN2            4U
//#define IOPORT1_AIN3            5U
//#define IOPORT1_AIN4           28U
//#define IOPORT1_AIN5           29U
//#define IOPORT1_AIN6           30U
//#define IOPORT1_AIN7           31U
//#define IOPORT1_AREF0           IOPORT1_AIN0
//#define IOPORT1_AREF1           IOPORT1_AIN1

/*
 * IO lines assignments.
 */
/* Board defined */
#define LINE_SW1              PAL_LINE(IOPORT1, IOPORT1_SW1)
#define LINE_SW2              PAL_LINE(IOPORT1, IOPORT1_SW2)
#define LINE_GREEN_LED_D9     PAL_LINE(IOPORT1, IOPORT1_GREEN_LED_D9)
#define LINE_BLUE_LED_D10     PAL_LINE(IOPORT1, IOPORT1_BLUE_LED_D10)
#define LINE_RED_LED_D11      PAL_LINE(IOPORT1, IOPORT1_RED_LED_D11)
#define LINE_RED_LED_D12      PAL_LINE(IOPORT1, IOPORT1_RED_LED_D12)
#define LINE_DW_IRQ           PAL_LINE(IOPORT1, IOPORT1_DW_IRQ)
#define LINE_DW_RST           PAL_LINE(IOPORT1, IOPORT1_DW_RST)
//#define LINE_UART_RTS  PAL_LINE(IOPORT1, IOPORT1_UART_RTS)
//#define LINE_UART_TX   PAL_LINE(IOPORT1, IOPORT1_UART_TX)
//#define LINE_UART_CTS  PAL_LINE(IOPORT1, IOPORT1_UART_CTS)
//#define LINE_UART_RX   PAL_LINE(IOPORT1, IOPORT1_UART_RX)
//#define LINE_NFC1      PAL_LINE(IOPORT1, IOPORT1_NFC1)
//#define LINE_NFC2      PAL_LINE(IOPORT1, IOPORT1_NFC2)
//#define LINE_I2C_SCL   PAL_LINE(IOPORT1, IOPORT1_I2C_SCL)
//#define LINE_I2C_SDA   PAL_LINE(IOPORT1, IOPORT1_I2C_SDA)

/* Our definitions */
#define LINE_SPI_SCK   PAL_LINE(IOPORT1, IOPORT1_SPI_SCK)
#define LINE_SPI_MOSI  PAL_LINE(IOPORT1, IOPORT1_SPI_MOSI)
#define LINE_SPI_MISO  PAL_LINE(IOPORT1, IOPORT1_SPI_MISO)
#define LINE_SPI_SS    PAL_LINE(IOPORT1, IOPORT1_SPI_SS)

/* Analog line */
//#define LINE_AIN0      PAL_LINE(IOPORT1, IOPORT1_AIN0)
//#define LINE_AIN1      PAL_LINE(IOPORT1, IOPORT1_AIN1)
//#define LINE_AIN2      PAL_LINE(IOPORT1, IOPORT1_AIN2)
//#define LINE_AIN3      PAL_LINE(IOPORT1, IOPORT1_AIN3)
//#define LINE_AIN4      PAL_LINE(IOPORT1, IOPORT1_AIN4)
//#define LINE_AIN5      PAL_LINE(IOPORT1, IOPORT1_AIN5)
//#define LINE_AIN6      PAL_LINE(IOPORT1, IOPORT1_AIN6)
//#define LINE_AIN7      PAL_LINE(IOPORT1, IOPORT1_AIN7)
//#define LINE_AREF0     PAL_LINE(IOPORT1, IOPORT1_AREF0)
//#define LINE_AREF1     PAL_LINE(IOPORT1, IOPORT1_AREF1)

#if !defined(_FROM_ASM_)
#ifdef __cplusplus
extern "C" {
#endif
  void boardInit(void);
#ifdef __cplusplus
}
#endif
#endif /* _FROM_ASM_ */

#endif /* _BOARD_H_ */
