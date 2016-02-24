/*
 * This file is part of Cleanflight.
 *
 * Cleanflight is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Cleanflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once
#define TARGET_BOARD_IDENTIFIER "CKD4"

#define CONFIG_START_FLASH_ADDRESS (0x08080000) //0x08080000 to 0x080A0000 (FLASH_Sector_8)

#define USE_EXTI

#define LED0 PC13
#define LED1 PC14
#define LED2 PC15

#define MPU6000_CS_PIN        PA4
#define MPU6000_SPI_INSTANCE  SPI1

#define ACC
#define USE_ACC_MPU6000
#define USE_ACC_SPI_MPU6000
#define ACC_MPU6000_ALIGN CW0_DEG

#define GYRO
#define USE_GYRO_MPU6000
#define USE_GYRO_SPI_MPU6000
#define GYRO_MPU6000_ALIGN CW0_DEG

#define USABLE_TIMER_CHANNEL_COUNT 16

// MPU6500 interrupt
//#define DEBUG_MPU_DATA_READY_INTERRUPT
#define USE_MPU_DATA_READY_SIGNAL
#define ENSURE_MPU_DATA_READY_IS_LOW
//#define EXTI_CALLBACK_HANDLER_COUNT 1 // MPU data ready
#define MPU_INT_EXTI PC4

#define USE_VCP
#define USBD_PRODUCT_STRING "Chickadee F4"
//#define VBUS_SENSING PA9

#define USE_USART1
#define USART1_RX_PIN PA10
#define USART1_TX_PIN PA9

#define USE_USART2
#define USART2_RX_PIN PD6
#define USART2_TX_PIN PD5

#define USE_USART3
#define USART3_RX_PIN PD9
#define USART3_TX_PIN PD8

#define USE_USART4
#define USART4_RX_PIN PC11
#define USART4_TX_PIN PC10

#define USE_USART5
#define USART5_RX_PIN PD2
#define USART5_TX_PIN PC12

#define USE_USART6
#define USART6_RX_PIN PC7
#define USART6_TX_PIN PC6

#define SERIAL_PORT_COUNT 7

#define USE_ESCSERIAL
#define ESCSERIAL_TIMER_TX_HARDWARE 0

#define USE_SPI

#define USE_SPI_DEVICE_1
#define SPI1_NSS_PIN            PA4
#define SPI1_SCK_PIN            PA5
#define SPI1_MISO_PIN           PA6
#define SPI1_MOSI_PIN           PA7

#define USE_SPI_DEVICE_2
#define SPI2_NSS_PIN            PB12
#define SPI2_SCK_PIN            PB13
#define SPI2_MISO_PIN           PC2
#define SPI2_MOSI_PIN           PC3

#define USE_SPI_DEVICE_3
#define SPI3_NSS_PIN            PA15
#define SPI3_SCK_PIN            PB3
#define SPI3_MISO_PIN           PB4
#define SPI3_MOSI_PIN           PB5

#define USE_I2C
#define I2C_DEVICE (I2CDEV_1)

// #define USE_ADC
// #define VBAT_ADC_PIN                PC12
// #define VBAT_ADC_CHANNEL            ADC_Channel_13

//#define GPS
//#define BLACKBOX
#define TELEMETRY
#define SERIAL_RX
#define AUTOTUNE
#define USE_QUAD_MIXER_ONLY
#define USE_CLI

#define USE_QUATERNION

#define TARGET_IO_PORTA 0xffff
#define TARGET_IO_PORTB 0xffff
#define TARGET_IO_PORTC 0xffff
#define TARGET_IO_PORTD 0xffff
#define TARGET_IO_PORTE 0xffff
#define TARGET_IO_PORTH 0x0003
