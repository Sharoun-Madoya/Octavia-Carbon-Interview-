/* USER CODE BEGIN Includes */
#include "eth.h"
/* USER CODE END Includes */

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
  MX_ETH_Init();
  MX_USART3_UART_Init();
  /* USER CODE BEGIN 2 */

  // Complete Ethernet initialization
  ETH_Init_Complete();
  USART3_Init_Complete();

  printf("Industrial Relay Controller - Ethernet Initialized\r\n");

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
    // Process Ethernet periodically
    ETH_Process();

    // Add small delay
    HAL_Delay(100);
  }
  /* USER CODE END 3 */
}
