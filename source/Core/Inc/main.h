/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
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
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

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

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define number_0_Pin GPIO_PIN_4
#define number_0_GPIO_Port GPIOA
#define number_5_Pin GPIO_PIN_5
#define number_5_GPIO_Port GPIOA
#define number_10_Pin GPIO_PIN_6
#define number_10_GPIO_Port GPIOA
#define number_15_Pin GPIO_PIN_7
#define number_15_GPIO_Port GPIOA
#define number_20_Pin GPIO_PIN_8
#define number_20_GPIO_Port GPIOA
#define number_25_Pin GPIO_PIN_9
#define number_25_GPIO_Port GPIOA
#define number_30_Pin GPIO_PIN_10
#define number_30_GPIO_Port GPIOA
#define number_35_Pin GPIO_PIN_11
#define number_35_GPIO_Port GPIOA
#define number_40_Pin GPIO_PIN_12
#define number_40_GPIO_Port GPIOA
#define number_45_Pin GPIO_PIN_13
#define number_45_GPIO_Port GPIOA
#define number_50_Pin GPIO_PIN_14
#define number_50_GPIO_Port GPIOA
#define number_55_Pin GPIO_PIN_15
#define number_55_GPIO_Port GPIOA

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
