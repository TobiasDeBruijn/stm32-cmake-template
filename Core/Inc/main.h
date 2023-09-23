/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32l1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "stm32l1xx_hal.h"
/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */
/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */
void SystemClock_Config(void);
/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define Debug_UART_TX_Pin GPIO_PIN_10
#define Debug_UART_TX_GPIO_Port GPIOB
#define Debug_UART_RX_Pin GPIO_PIN_11
#define Debug_UART_RX_GPIO_Port GPIOB
#define External_LED_Pin GPIO_PIN_11
#define External_LED_GPIO_Port GPIOA
#define Programmer_DIO_Pin GPIO_PIN_13
#define Programmer_DIO_GPIO_Port GPIOA
#define Programmer_CLK_Pin GPIO_PIN_14
#define Programmer_CLK_GPIO_Port GPIOA
#define Debug_LED_Pin GPIO_PIN_8
#define Debug_LED_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
