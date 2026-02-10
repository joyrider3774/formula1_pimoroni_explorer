//mix from:
//https://github.com/earlephilhower/arduino-pico/blob/master/variants/pimoroni_explorer/pins_arduino.h
//https://github.com/pimoroni/explorer/blob/main/explorer/explorer.h
/*
 * Copyright (c) 2020 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

// -----------------------------------------------------
// NOTE: THIS HEADER IS ALSO INCLUDED BY ASSEMBLER SO
//       SHOULD ONLY CONSIST OF PREPROCESSOR DIRECTIVES
// -----------------------------------------------------

// This header may be included by other board headers as "boards/explorer.h"

// pico_cmake_set PICO_PLATFORM=rp2350

#ifndef _BOARDS_PIMORONI_EXPLORER_H
#define _BOARDS_PIMORONI_EXPLORER_H

// For board detection
#define PIMORONI_EXPLORER

// --- BOARD SPECIFIC ---

// --- UART ---
#ifndef PICO_DEFAULT_UART
#define PICO_DEFAULT_UART 0
#endif
#ifndef PICO_DEFAULT_UART_TX_PIN
#define PICO_DEFAULT_UART_TX_PIN 0
#endif
#ifndef PICO_DEFAULT_UART_RX_PIN
#define PICO_DEFAULT_UART_RX_PIN 1
#endif

// --- LED ---
#ifndef PICO_DEFAULT_LED_PIN
#define PICO_DEFAULT_LED_PIN 25
#endif
// no PICO_DEFAULT_WS2812_PIN

// --- I2C ---
#ifndef PICO_DEFAULT_I2C
#define PICO_DEFAULT_I2C 0
#endif
#ifndef PICO_DEFAULT_I2C_SDA_PIN
#define PICO_DEFAULT_I2C_SDA_PIN 4
#endif
#ifndef PICO_DEFAULT_I2C_SCL_PIN
#define PICO_DEFAULT_I2C_SCL_PIN 5
#endif

// --- SPI ---
#ifndef PICO_DEFAULT_SPI
#define PICO_DEFAULT_SPI 0
#endif
#ifndef PICO_DEFAULT_SPI_SCK_PIN
#define PICO_DEFAULT_SPI_SCK_PIN 18
#endif
#ifndef PICO_DEFAULT_SPI_TX_PIN
#define PICO_DEFAULT_SPI_TX_PIN 19
#endif
#ifndef PICO_DEFAULT_SPI_RX_PIN
#define PICO_DEFAULT_SPI_RX_PIN 16
#endif
#ifndef PICO_DEFAULT_SPI_CSN_PIN
#define PICO_DEFAULT_SPI_CSN_PIN 17
#endif

// --- FLASH ---

#define PICO_BOOT_STAGE2_CHOOSE_W25Q080 1

#ifndef PICO_FLASH_SPI_CLKDIV
#define PICO_FLASH_SPI_CLKDIV 2
#endif

// pico_cmake_set_default PICO_FLASH_SIZE_BYTES = (16 * 1024 * 1024)
#ifndef PICO_FLASH_SIZE_BYTES
#define PICO_FLASH_SIZE_BYTES (16 * 1024 * 1024)
#endif

// no PICO_SMPS_MODE_PIN
// no PICO_VBUS_PIN
// no PICO_VSYS_PIN

#ifndef PICO_RP2350_A2_SUPPORTED
#define PICO_RP2350_A2_SUPPORTED 1
#endif

//taken from https://github.com/earlephilhower/arduino-pico/blob/master/variants/pimoroni_explorer/pins_arduino.h

// on-board speaker
#define PIN_PWM_AUDIO         (12u)
#define PIN_SPEAKER_AMP_ENABLE (13u)

// on-board buttons
#define SWITCH_C (14u)
#define SWITCH_B (15u)
#define SWITCH_A (16u)
#define SWITCH_X (17u)
#define SWITCH_Y (18u)
#define SWITCH_Z (19u)

/* IO pin definitions */

#define GP0 (0u)
#define GP1 (1u)
#define GP2 (2u)
#define GP3 (3u)
#define GP4 (4u)
#define GP5 (5u)

//Servos
#define PIN_SERVO1 (6u)
#define PIN_SERVO2 (7u)
#define PIN_SERVO3 (8u)
#define PIN_SERVO4 (9u)
// Pin 10 is NC
// Pin 11 is NC

// Wire/I2C
#define PIN_WIRE0_SDA       (20u)
#define PIN_WIRE0_SCL       (21u)

// Boot button, also referred to as the user switch
//TODO: Call it SWITCH_BOOT or SWITCH_USER?
#define SWITCH_BOOT (22u)

// Pin 23 is NC
// Pin 24 is NC
// Pin 25 is NC
#define PIN_LED 25 // The LED will not blink, but sketches will compile

//TODO: LCD
#define PIN_LCD_BL          (26u)
#define PIN_LCD_CS          (27u)
#define PIN_LCD_RS          (28u)
// Pin 29 is NC
#define PIN_LCD_WR          (30u)
#define PIN_LCD_RD          (31u)
#define PIN_LCD_DB0         (32u)
#define PIN_LCD_DB1         (33u)
#define PIN_LCD_DB2         (34u)
#define PIN_LCD_DB3         (35u)
#define PIN_LCD_DB4         (36u)
#define PIN_LCD_DB5         (37u)
#define PIN_LCD_DB6         (38u)
#define PIN_LCD_DB7         (39u)

#define ADC0 (40u)
#define ADC1 (41u)
#define ADC2 (42u)
#define ADC3 (43u)
#define ADC4 (44u)
#define ADC5 (45u)

#endif
