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

#define TARGET_BOARD_IDENTIFIER "CHF3" // Chebuzz F3

#define USBD_PRODUCT_STRING "Chebuzz F3"

#define BEEPER  PE8
#define LED0    PE10
#define LED1    PE9

#define LED0_GPIO   GPIOE
#define LED0_PIN    Pin_8|Pin_12 // Blue LEDs - PE8/PE12
#define LED0_PERIPHERAL RCC_AHBPeriph_GPIOE
#define LED0_INVERTED
#define LED1_GPIO   GPIOE
#define LED1_PIN    Pin_10|Pin_14  // Orange LEDs - PE10/PE14
#define LED1_PERIPHERAL RCC_AHBPeriph_GPIOE
#define LED1_INVERTED

#define BEEP_GPIO   GPIOE
#define BEEP_PIN    Pin_9|Pin_13 // Red LEDs - PE9/PE13
#define BEEP_PERIPHERAL RCC_AHBPeriph_GPIOE
#define BEEPER_INVERTED

#define USABLE_TIMER_CHANNEL_COUNT 18

#define USE_SPI
#define USE_SPI_DEVICE_1
#define USE_SPI_DEVICE_2

#define USE_SDCARD

#define SDCARD_DETECT_PIN                    PC14
#define SDCARD_DETECT_EXTI_LINE              EXTI_Line14
#define SDCARD_DETECT_EXTI_PIN_SOURCE        EXTI_PinSource14
#define SDCARD_DETECT_EXTI_PORT_SOURCE       EXTI_PortSourceGPIOC
#define SDCARD_DETECT_EXTI_IRQn              EXTI15_10_IRQn

#define SDCARD_SPI_INSTANCE                  SPI2
#define SDCARD_SPI_CS_PIN                    PB12

// SPI2 is on the APB1 bus whose clock runs at 36MHz. Divide to under 400kHz for init:
#define SDCARD_SPI_INITIALIZATION_CLOCK_DIVIDER 128
// Divide to under 25MHz for normal operation:
#define SDCARD_SPI_FULL_SPEED_CLOCK_DIVIDER 2

// Note, this is the same DMA channel as USART1_RX. Luckily we don't use DMA for USART Rx.
#define SDCARD_DMA_CHANNEL_TX               DMA1_Channel5
#define SDCARD_DMA_CHANNEL_TX_COMPLETE_FLAG DMA1_FLAG_TC5

//#define USE_FLASHFS
//#define USE_FLASH_M25P16

//#define M25P16_CS_GPIO          GPIOB
//#define M25P16_CS_PIN           GPIO_Pin_12
//#define M25P16_SPI_INSTANCE     SPI2

#define GYRO
#define USE_GYRO_L3GD20
#define USE_GYRO_MPU6050

#define L3GD20_SPI                      SPI1
#define L3GD20_CS_GPIO_CLK_PERIPHERAL   RCC_AHBPeriph_GPIOE
#define L3GD20_CS_GPIO                  GPIOE
#define L3GD20_CS_PIN                   PE3

#define GYRO_L3GD20_ALIGN CW270_DEG
#define GYRO_MPU6050_ALIGN CW0_DEG

#define ACC
#define USE_ACC_MPU6050
#define USE_ACC_LSM303DLHC

#define ACC_MPU6050_ALIGN CW0_DEG

#define BARO
#define USE_BARO_MS5611
#define USE_BARO_BMP280

#define MAG
#define USE_MAG_AK8975

#define MAG_AK8975_ALIGN CW90_DEG_FLIP

#define USE_VCP
#define USE_USART1
#define USE_USART2
#define SERIAL_PORT_COUNT 3

#define USE_I2C
#define I2C_DEVICE (I2CDEV_1)

#define USE_ADC

#define ADC_INSTANCE                ADC1
#define ADC_AHB_PERIPHERAL          RCC_AHBPeriph_DMA1
#define ADC_DMA_CHANNEL             DMA1_Channel1

#define VBAT_ADC_PIN                PC0
#define VBAT_ADC_CHANNEL            ADC_Channel_6

#define CURRENT_METER_ADC_PIN       PC1
#define CURRENT_METER_ADC_CHANNEL   ADC_Channel_7
#define RSSI_ADC_PIN                PC2
#define RSSI_ADC_CHANNEL            ADC_Channel_8
#define EXTERNAL1_ADC_PIN           PC3
#define EXTERNAL1_ADC_CHANNEL       ADC_Channel_9

#define GPS
#define LED_STRIP
#if 1
#define LED_STRIP_TIMER TIM16
#else
// alternative LED strip configuration, tested working.
#define LED_STRIP_TIMER TIM1

#define USE_LED_STRIP_ON_DMA1_CHANNEL2
#define WS2811_GPIO                     GPIOA
#define WS2811_GPIO_AHB_PERIPHERAL      RCC_AHBPeriph_GPIOA
#define WS2811_GPIO_AF                  GPIO_AF_6
#define WS2811_PIN                      GPIO_Pin_8
#define WS2811_PIN_SOURCE               GPIO_PinSource8
#define WS2811_TIMER                    TIM1
#define WS2811_TIMER_APB2_PERIPHERAL    RCC_APB2Periph_TIM1
#define WS2811_DMA_CHANNEL              DMA1_Channel2
#define WS2811_IRQ                      DMA1_Channel2_IRQn
#endif

#define BLACKBOX
#define GTUNE
#define TELEMETRY
#define SERIAL_RX
#define USE_SERVOS
#define USE_CLI

#define TARGET_IO_PORTA 0xffff
#define TARGET_IO_PORTB 0xffff
#define TARGET_IO_PORTC 0xffff
#define TARGET_IO_PORTE 0xffff
#define TARGET_IO_PORTF 0xffff
