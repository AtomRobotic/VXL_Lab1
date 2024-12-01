/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
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
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{

  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  int state = 0;
  while (1)
  {
	  switch (state){
	  case 0:
		HAL_GPIO_WritePin(number_0_GPIO_Port, number_0_Pin, SET);
		HAL_Delay(1000);
		HAL_GPIO_WritePin(number_0_GPIO_Port, number_0_Pin, RESET);
		state++;
		break;
	  case 1:
	  		HAL_GPIO_WritePin(number_5_GPIO_Port, number_5_Pin, SET);
	  		HAL_Delay(1000);
	  		HAL_GPIO_WritePin(number_5_GPIO_Port, number_5_Pin, RESET);
	  		state++;
	  		break;
	  case 2:
	  		HAL_GPIO_WritePin(number_10_GPIO_Port, number_10_Pin, SET);
	  		HAL_Delay(1000);
	  		HAL_GPIO_WritePin(number_10_GPIO_Port, number_10_Pin, RESET);
	  		state++;
	  		break;
	  case 3:
	  		HAL_GPIO_WritePin(number_15_GPIO_Port, number_15_Pin, SET);
	  		HAL_Delay(1000);
	  		HAL_GPIO_WritePin(number_15_GPIO_Port, number_15_Pin, RESET);
	  		state++;
	  		break;
	  case 4:
	  		HAL_GPIO_WritePin(number_20_GPIO_Port, number_20_Pin, SET);
	  		HAL_Delay(1000);
	  		HAL_GPIO_WritePin(number_20_GPIO_Port, number_20_Pin, RESET);
	  		state++;
	  		break;
	  case 5:
	  		HAL_GPIO_WritePin(number_25_GPIO_Port, number_25_Pin, SET);
	  		HAL_Delay(1000);
	  		HAL_GPIO_WritePin(number_25_GPIO_Port, number_25_Pin, RESET);
	  		state++;
	  		break;
	  case 6:
	  		HAL_GPIO_WritePin(number_30_GPIO_Port, number_30_Pin, SET);
	  		HAL_Delay(1000);
	  		HAL_GPIO_WritePin(number_30_GPIO_Port, number_30_Pin, RESET);
	  		state++;
	  		break;
	  case 7:
	  		HAL_GPIO_WritePin(number_35_GPIO_Port, number_35_Pin, SET);
	  		HAL_Delay(1000);
	  		HAL_GPIO_WritePin(number_35_GPIO_Port, number_35_Pin, RESET);
	  		state++;
	  		break;
	  case 8:
	  		HAL_GPIO_WritePin(number_40_GPIO_Port, number_40_Pin, SET);
	  		HAL_Delay(1000);
	  		HAL_GPIO_WritePin(number_40_GPIO_Port, number_40_Pin, RESET);
	  		state++;
	  		break;
	  case 9:
	  		HAL_GPIO_WritePin(number_45_GPIO_Port, number_45_Pin, SET);
	  		HAL_Delay(1000);
	  		HAL_GPIO_WritePin(number_45_GPIO_Port, number_45_Pin, RESET);
	  		state++;
	  		break;
	  case 10:
	  		HAL_GPIO_WritePin(number_50_GPIO_Port, number_50_Pin, SET);
	  		HAL_Delay(1000);
	  		HAL_GPIO_WritePin(number_50_GPIO_Port, number_50_Pin, RESET);
	  		state++;
	  		break;
	  case 11:
	  		HAL_GPIO_WritePin(number_55_GPIO_Port, number_55_Pin, SET);
	  		HAL_Delay(1000);
	  		HAL_GPIO_WritePin(number_55_GPIO_Port, number_55_Pin, RESET);
	  		state = 0;
	  		break;
	  }

    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};
/* USER CODE BEGIN MX_GPIO_Init_1 */
/* USER CODE END MX_GPIO_Init_1 */

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, number_0_Pin|number_5_Pin|number_10_Pin|number_15_Pin
                          |number_20_Pin|number_25_Pin|number_30_Pin|number_35_Pin
                          |number_40_Pin|number_45_Pin|number_50_Pin|number_55_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : number_0_Pin number_5_Pin number_10_Pin number_15_Pin
                           number_20_Pin number_25_Pin number_30_Pin number_35_Pin
                           number_40_Pin number_45_Pin number_50_Pin number_55_Pin */
  GPIO_InitStruct.Pin = number_0_Pin|number_5_Pin|number_10_Pin|number_15_Pin
                          |number_20_Pin|number_25_Pin|number_30_Pin|number_35_Pin
                          |number_40_Pin|number_45_Pin|number_50_Pin|number_55_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

/* USER CODE BEGIN MX_GPIO_Init_2 */
/* USER CODE END MX_GPIO_Init_2 */
}

/* USER CODE BEGIN 4 */
uint16_t clockLEDs[12] = {GPIO_PIN_4, GPIO_PIN_5, GPIO_PIN_6, GPIO_PIN_7, GPIO_PIN_8, GPIO_PIN_9, GPIO_PIN_10, GPIO_PIN_11, GPIO_PIN_12, GPIO_PIN_13, GPIO_PIN_14, GPIO_PIN_15};

void clearAllClock(void) {
        HAL_GPIO_WritePin(GPIOA, clockLEDs[0], GPIO_PIN_RESET);
        HAL_GPIO_WritePin(GPIOA, clockLEDs[1], GPIO_PIN_RESET);
        HAL_GPIO_WritePin(GPIOA, clockLEDs[2], GPIO_PIN_RESET);
        HAL_GPIO_WritePin(GPIOA, clockLEDs[3], GPIO_PIN_RESET);
        HAL_GPIO_WritePin(GPIOA, clockLEDs[4], GPIO_PIN_RESET);
        HAL_GPIO_WritePin(GPIOA, clockLEDs[5], GPIO_PIN_RESET);
        HAL_GPIO_WritePin(GPIOA, clockLEDs[6], GPIO_PIN_RESET);
        HAL_GPIO_WritePin(GPIOA, clockLEDs[7], GPIO_PIN_RESET);
        HAL_GPIO_WritePin(GPIOA, clockLEDs[8], GPIO_PIN_RESET);
        HAL_GPIO_WritePin(GPIOA, clockLEDs[9], GPIO_PIN_RESET);
        HAL_GPIO_WritePin(GPIOA, clockLEDs[10], GPIO_PIN_RESET);
        HAL_GPIO_WritePin(GPIOA, clockLEDs[11], GPIO_PIN_RESET);
}

void setNumberOnClock(int i) {
        HAL_GPIO_WritePin(GPIOA, clockLEDs[i], GPIO_PIN_SET);
}

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
