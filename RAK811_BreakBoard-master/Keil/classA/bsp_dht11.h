#ifndef __DHT11_H
#define __DHT11_H

#include "board.h"
// connect pinA8
/**************************** KHAI BAO BIEN ****************************/
typedef struct
{
	uint8_t temp_int ;		//so nguyen nhiet do
	uint8_t temp_deci ; 	//so thap phan
	uint8_t humi_int ; 	//So nguyen cua do am
	uint8_t humi_deci ;	//sau so thap phan
	uint8_t check_sum ;  // sum tong
} DHT11_DATA_TypeDef ;

/********************************* DHT11 Define port connect ********************************/
// maybe block
//#define			GPIO_DHT11_CLK			__HAL_RCC_GPIOA_CLK_ENABLE();
//#define			GPIO_DHT11_PORT			GPIOA						
//#define			GPIO_DHT11_PIN			GPIO_PIN_6 

/********************************* DHT11 define huong vao ra**************************************/
#define			DHT11_DOUT_0			GpioWrite( &pinA8, 0 )
#define 		DHT11_DOUT_1			GpioWrite( &pinA8, 1 ) // led write
#define 		DHT11_DATA_IN()		GpioMcuRead(&pinA8)  

/*********************************KHAI BAO HAM CON *************************************/
void DHT11_Init(void) ;
void delay_us(uint8_t time);
uint8_t Read_TempAndHumidity (DHT11_DATA_TypeDef *DHT11_DATA) ;

#endif 						
