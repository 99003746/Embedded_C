/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
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
  while (1)
  {
	  /* USER CODE END WHILE */

	  	  	  	  	  	  //seat control
	  	  	   	 		  HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_6);
	  	  	   	 		   if(HAL_GPIO_ReadPin(GPIOD, GPIO_PIN_6)==1)   //POWER ON
	  	  	   	 		   {
	  	  	   	 			   //HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, ENABLE);  // RED LED ON (Door Closed)
	  	  	   	 			   //HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, DISABLE);
	  	  	   	 			   if(HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0) == 1)
	  	  	   	 			   {
	  	  	   	 				   //HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_14);
	  	  	   	 				   HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, DISABLE);
	  	  	   	 				   HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, ENABLE);  // GREEN LED ON (Door Open)
	  	  	   	 				   //HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_12);
	  	  	   	 				   //HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_14);
	  	  	   	 			   }
	  	  	   	 			   else if(HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0) == 0)
	  	  	   	 			   {
	  	  	   	 				   HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, ENABLE);
	  	  	   	 				   HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, DISABLE);
	  	  	   	 				   //HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_12);
	  	  	   	 				   //HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_14);
	  	  	   	 			   }



	  	  	   	 		  // HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0);
	  	  	   	 		   //HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_14);


	  	  	   	 	//door control

	  	  	   	 		   HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_6);
	  	  	   	 		   if(HAL_GPIO_ReadPin(GPIOD, GPIO_PIN_6)==1)   //POWER ON
	  	  	   	 		   {
	  	  	   	 			   //HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, ENABLE);  // RED LED ON (Door Closed)
	  	  	   	 			   //HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, DISABLE);
	  	  	   	 			   if(HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0) == 1)
	  	  	   	 			   {
	  	  	   	 				   //HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_14);
	  	  	   	 				   HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, DISABLE);
	  	  	   	 				   HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, ENABLE);
	  	  	   	 				   HAL_GPIO_WritePin(GPIOD, GPIO_PIN_11, ENABLE);  // GREEN LED ON (Door Open)
	  	  	   	 				   //HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_12);
	  	  	   	 				   //HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_14);
	  	  	   	 			   }
	  	  	   	 			   else if(HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0) == 0)
	  	  	   	 			   {
	  	  	   	 				   HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, ENABLE);
	  	  	   	 				   HAL_GPIO_WritePin(GPIOD, GPIO_PIN_11, DISABLE);
	  	  	   	 				 HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, DISABLE);
	  	  	   	 				   //HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_12);
	  	  	   	 				   //HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_14);



	  	  	   	 	  }

	  	  	   	 	}



	  	  // Power window
	  	  	   	 	  if(HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0)==1)
	  	  	   	 	  {
	  	  	   	 		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, DISABLE);
	  	  	   	 		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_7, ENABLE);
	  	  	   	 		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_8, ENABLE);

	  	  	   	 	  }
	  	  	   	 	  else
	  	  	   	 	  {
	  	  	   	 		 HAL_GPIO_WritePin(GPIOC, GPIO_PIN_7, DISABLE);
	  	  				  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_8, DISABLE);
	  	  	   	 		HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, ENABLE);
	  	  	   	 	  }
	  	  	   	 		/*
	  	  	   	 	  if(HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0)==1)
	  	  	   	 	  {
	  	  	   	 		  if(HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_11)==1)
	  	  	   	 		  {
	  	  	   	 			 HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, ENABLE);
	  	  	   	 		  }
	  	  	   	 	  }
	  	  */

	  	  //Wiper Control

	  	  	   	 	 if(!(HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_11)))
	  	  	   	 	        {
	  	  	   	 	            HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, GPIO_PIN_RESET);
	  	  	   	 	            HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, GPIO_PIN_SET);
	  	  	   	 	        }

	  	  	   		else
	  	  	   		{
	  	  	   			HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, GPIO_PIN_RESET);
	  	  	   			HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, GPIO_PIN_SET);
	  	  	   	 	 }

	  	  //HeadLight Control
	  	  	   	 	 int read_pin= HAL_GPIO_ReadPin(GPIOD, GPIO_PIN_10);

	  	  	   		 if(read_pin==1)
	  	  	   		 {
	  	  	   			 //HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, GPIO_PIN_SET);

	  	  	   			 //HAL_Delay(500);

	  	  	   			 HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, GPIO_PIN_SET);
	  	  	   			 //HAL_Delay(500);
	  	  	   		 }
	  	  	   		 else
	  	  	   		 {
	  	  	   			// HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13, GPIO_PIN_SET);
	  	  	   			// HAL_Delay(500);

	  	  	   			 HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, GPIO_PIN_RESET);
	  	  	   		//     HAL_Delay(500);
	  	  	   		 }
	  	  	   }

	  	  	   	 		   //AC Conditioning Control

	  	  				   if(HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0)==1)
	  	  				  {
	  	  					  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13, ENABLE);
	  	  					  //HAL_GPIO_WritePin(GPIOC, GPIO_PIN_8, ENABLE);

	  	  				  }
	  	  				  else
	  	  				  {
	  	  					HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13, DISABLE);
	  	  				  	   HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, ENABLE);
	  	  				  }



	  	  	    }

}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Configure the main internal regulator output voltage
  */
  __HAL_RCC_PWR_CLK_ENABLE();
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);
  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSI;
  RCC_OscInitStruct.PLL.PLLM = 8;
  RCC_OscInitStruct.PLL.PLLN = 50;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV4;
  RCC_OscInitStruct.PLL.PLLQ = 7;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;

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

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOD_CLK_ENABLE();
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_11|GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_14
                          |GPIO_PIN_15, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_7|GPIO_PIN_8, GPIO_PIN_RESET);

  /*Configure GPIO pin : PD10 */
  GPIO_InitStruct.Pin = GPIO_PIN_10;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);

  /*Configure GPIO pins : PD11 PD12 PD13 PD14
                           PD15 */
  GPIO_InitStruct.Pin = GPIO_PIN_11|GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_14
                          |GPIO_PIN_15;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);

  /*Configure GPIO pins : PC7 PC8 */
  GPIO_InitStruct.Pin = GPIO_PIN_7|GPIO_PIN_8;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

  /*Configure GPIO pin : PC11 */
  GPIO_InitStruct.Pin = GPIO_PIN_11;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

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
}

  /* USER CODE END Error_Handler_Debug */


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

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
