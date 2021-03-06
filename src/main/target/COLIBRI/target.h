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

#define PLL_M 16
#define PLL_N 336

#define TARGET_BOARD_IDENTIFIER "COLI"

#define CONFIG_START_FLASH_ADDRESS (0x08080000) //0x08080000 to 0x080A0000 (FLASH_Sector_8)

#define USBD_PRODUCT_STRING "Colibri"
#ifdef OPBL
#define USBD_SERIALNUMBER_STRING "0x8020000"
#endif

#define LED0            PC14
#define LED1            PC13
#define BEEPER          PC5
#define INVERTER        PB2 // PB2 used as inverter select GPIO
#define INVERTER_USART  USART2

#define MPU6000_CS_PIN        PC4
#define MPU6000_SPI_INSTANCE  SPI1

#define ACC
#define USE_ACC_SPI_MPU6000
#define ACC_MPU6000_ALIGN CW270_DEG_FLIP

#define GYRO
#define USE_GYRO_SPI_MPU6000
#define GYRO_MPU6000_ALIGN CW270_DEG_FLIP

// MPU6000 interrupts
#define USE_MPU_DATA_READY_SIGNAL
#define EXTI_CALLBACK_HANDLER_COUNT 2 // MPU data ready (mag disabled)
#define MPU_INT_EXTI PC0
#define USE_EXTI

#define MAG
#define USE_MAG_HMC5883
#define MAG_HMC5883_ALIGN CW270_DEG_FLIP

#define USE_MAG_DATA_READY_SIGNAL
#define ENSURE_MAG_DATA_READY_IS_HIGH
#define MAG_INT_EXTI PC1

#define BARO
#define USE_BARO_MS5611

#define M25P16_CS_PIN         PB12
#define M25P16_SPI_INSTANCE   SPI2

#define USE_FLASHFS
#define USE_FLASH_M25P16

#define USABLE_TIMER_CHANNEL_COUNT 16

#define USE_VCP
#define VBUS_SENSING_PIN PA9

#define USE_UART1
#define UART1_RX_PIN PB7
#define UART1_TX_PIN PB6
#define UART1_AHB1_PERIPHERALS RCC_AHB1Periph_DMA2

#define USE_UART2
#define UART2_RX_PIN PA3
#define UART2_TX_PIN PA2

//#define USE_UART3
#define UART3_RX_PIN PB11
#define UART3_TX_PIN PB10

#define USE_UART4
#define UART4_RX_PIN PC11
#define UART4_TX_PIN PC10

//#define USE_UART5
#define UART5_RX_PIN PD2
#define UART5_TX_PIN PC12

//#define USE_UART6
#define UART6_RX_PIN PC7
#define UART6_TX_PIN PC6

#define SERIAL_PORT_COUNT 4 //VCP, UART1, UART3, UART6

#define USE_SPI

#define USE_SPI_DEVICE_1
#define SPI1_NSS_PIN    PC4
#define SPI1_SCK_PIN    PA5
#define SPI1_MISO_PIN   PA6
#define SPI1_MOSI_PIN   PA7

#define USE_SPI_DEVICE_2
#define SPI2_NSS_PIN    PB12
#define SPI2_SCK_PIN    PB13
#define SPI2_MISO_PIN   PC2
#define SPI2_MOSI_PIN   PC3

#define USE_I2C
#define I2C_DEVICE (I2CDEV_3)
#define I2C3_SCL PA8
#define I2C3_SDA PC9

#define SENSORS_SET (SENSOR_ACC)

#define LED_STRIP

#define WS2811_PIN                      PB7
#define WS2811_TIMER                    TIM4
#define WS2811_TIMER_CHANNEL            TIM_Channel_2
#define WS2811_DMA_HANDLER_IDENTIFER    DMA1_ST3_HANDLER
#define WS2811_DMA_STREAM               DMA1_Stream3
#define WS2811_DMA_FLAG                 DMA_FLAG_TCIF3
#define WS2811_DMA_IT                   DMA_IT_TCIF3
#define WS2811_DMA_CHANNEL              DMA_Channel_2
#define WS2811_DMA_IRQ                  DMA1_Stream3_IRQn

#define ENABLE_BLACKBOX_LOGGING_ON_SPIFLASH_BY_DEFAULT

#define DEFAULT_RX_FEATURE FEATURE_RX_PPM
#define DEFAULT_FEATURES (FEATURE_BLACKBOX | FEATURE_ONESHOT125 | FEATURE_RX_SERIAL)

#define USE_SERIAL_4WAY_BLHELI_INTERFACE

#define TARGET_IO_PORTA 0xffff
#define TARGET_IO_PORTB 0xffff
#define TARGET_IO_PORTC 0xffff
#define TARGET_IO_PORTD 0xffff

#define USED_TIMERS  ( TIM_N(1) | TIM_N(2) | TIM_N(3) | TIM_N(5) | TIM_N(12) | TIM_N(8) | TIM_N(10) | TIM_N(11))
