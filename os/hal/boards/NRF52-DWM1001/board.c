/*
    Copyright (C) 2016 Stéphane D'Alu

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

#include "hal.h"

#if HAL_USE_PAL || defined(__DOXYGEN__)

/**
 * @brief   PAL setup.
 * @details Digital I/O ports static configuration as defined in @p board.h.
 *          This variable is used by the HAL when initializing the PAL driver.
 */
const PALConfig pal_default_config =
{
  .pads = {
        PAL_MODE_UNCONNECTED,         /* P0.0                  */
        PAL_MODE_UNCONNECTED,         /* P0.1                  */
        PAL_MODE_UNCONNECTED,         /* P0.2                  */
        PAL_MODE_UNCONNECTED,         /* P0.3                  */
        PAL_MODE_UNCONNECTED,         /* P0.4                  */
        PAL_MODE_OUTPUT_PUSHPULL,     /* P0.5                  */
        PAL_MODE_OUTPUT_PUSHPULL,     /* P0.6                  */
        PAL_MODE_INPUT_PULLUP,        /* P0.7                  */
        PAL_MODE_INPUT_PULLUP,        /* P0.8                  */
        PAL_MODE_UNCONNECTED,         /* P0.9                  */
        PAL_MODE_UNCONNECTED,         /* P0.10                 */
        PAL_MODE_UNCONNECTED,         /* P0.11                 */
        PAL_MODE_UNCONNECTED,         /* P0.12                 */
        PAL_MODE_INPUT_PULLUP,        /* P0.13                 */
        PAL_MODE_OUTPUT_PUSHPULL,     /* P0.14: RED_LED_D12    */
        PAL_MODE_INPUT_PULLUP,        /* P0.15                 */
        PAL_MODE_INPUT_PULLUP,        /* P0.16                 */
        PAL_MODE_OUTPUT_PUSHPULL,     /* P0.17                 */
        PAL_MODE_OUTPUT_PUSHPULL,     /* P0.18                 */
        PAL_MODE_OUTPUT_PUSHPULL,     /* P0.19                 */
        PAL_MODE_OUTPUT_PUSHPULL,     /* P0.20                 */
        PAL_MODE_UNCONNECTED,         /* P0.21                 */
        PAL_MODE_OUTPUT_PUSHPULL,     /* P0.22a RED_LED_D11    */
        PAL_MODE_INPUT_PULLUP,        /* P0.23a                */
        PAL_MODE_OUTPUT_PUSHPULL,     /* P0.24a                */
        PAL_MODE_OUTPUT_PUSHPULL,     /* P0.25a                */
        PAL_MODE_OUTPUT_OPENDRAIN,    /* P0.26a                */
        PAL_MODE_OUTPUT_OPENDRAIN,    /* P0.27a                */
        PAL_MODE_UNCONNECTED,         /* P0.28                 */
        PAL_MODE_UNCONNECTED,         /* P0.29                 */
        PAL_MODE_OUTPUT_PUSHPULL,     /* P0.30  GREEN_LED_D9   */
        PAL_MODE_OUTPUT_PUSHPULL,     /* P0.31: BLUE_LED_D10   */
  },
};
#endif

/**
 * @brief   Early initialization code.
 * @details This initialization is performed just after reset before BSS and
 *          DATA segments initialization.
 */
void __early_init(void)
{
}

/**
 * @brief   Late initialization code.
 * @note    This initialization is performed after BSS and DATA segments
 *          initialization and before invoking the main() function.
 */
void boardInit(void)
{
}
