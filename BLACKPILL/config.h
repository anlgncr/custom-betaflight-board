/*
 * This file is part of Betaflight.
 *
 * Betaflight is free software. You can redistribute this software
 * and/or modify this software under the terms of the GNU General
 * Public License as published by the Free Software Foundation,
 * either version 3 of the License, or (at your option) any later
 * version.
 *
 * Betaflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once


#define FC_TARGET_MCU     STM32F411

#define BOARD_NAME        CUSTOM_BOARD
#define MANUFACTURER_ID   CUSTOM_ID

#define USE_ACC
#define USE_GYRO

#define ADC_INSTANCE ADC1
#define ADC1_DMA_OPT        1
#define ADC_VBAT_PIN        PA1
#define DEFAULT_VOLTAGE_METER_SOURCE VOLTAGE_METER_ADC

#define USE_ACCGYRO_BMI160
#define GYRO_1_EXTI_PIN      PB0

#define LED0_PIN             PC13
#define LED1_PIN             PC14
#define BEEPER_PIN           PB2
#define BEEPER_INVERTED

#define GYRO_1_SPI_INSTANCE SPI1

#define GYRO_1_CS_PIN        PA4
#define SPI1_SCK_PIN         PA5
#define SPI1_SDI_PIN         PA6
#define SPI1_SDO_PIN         PA7

#define UART1_TX_PIN         PA9
#define UART1_RX_PIN         PA10

#define UART2_TX_PIN         PA2
#define UART2_RX_PIN         PA3

#define TIMER_PIN_MAPPING \
    TIMER_PIN_MAP( 1, PB3 , 1,  0) \
    TIMER_PIN_MAP( 2, PB4 , 1,  0) \
    TIMER_PIN_MAP( 3, PB6 , 1,  0) \
    TIMER_PIN_MAP( 4, PB7 , 1,  0)

#define MOTOR1_PIN           PB3
#define MOTOR2_PIN           PB4
#define MOTOR3_PIN           PB6
#define MOTOR4_PIN           PB7

#define MAG_I2C_INSTANCE I2CDEV_1
#define USE_BARO
#define BARO_I2C_INSTANCE I2CDEV_1

#define SERIALRX_UART SERIAL_PORT_USART1
#define SYSTEM_HSE_MHZ 25

