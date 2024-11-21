#pragma once

// #define SERIAL_USART_SPEED 921600
#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN B10
#define SERIAL_USART_RX_PIN B11
#define SERIAL_USART_PIN_SWAP
#define USART3_REMAP
#define SERIAL_USART_TX_PAL_MODE 4
#define SERIAL_USART_RX_PAL_MODE 4
#define SERIAL_USART_DRIVER SD3

#define MASTER_LEFT
#define OLED_DISPLAY_ADDRESS 0x7A
#define OLED_DISPLAY_128X64
#define OLED_BRIGHTNESS 128

#define I2C_DRIVER I2CD2
#define I2C1_SCL_PIN B13
// #define I2C1_SCL_PAL_MODE 4
#define I2C1_SDA_PIN B14
// #define I2C1_SDA_PAL_MODE 4

// #define I2C1_TIMINGR_PRESC 0U
// #define I2C1_TIMINGR_SCLDEL 7U
// #define I2C1_TIMINGR_SDADEL 0U
// #define I2C1_TIMINGR_SCLH 38U
// #define I2C1_TIMINGR_SCLL 129U
