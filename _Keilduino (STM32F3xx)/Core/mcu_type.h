#ifndef __MCU_TYPE
#define __MCU_TYPE

#include "stm32f30x.h"
#include "stm32f30x_conf.h"

#define __STM32F3__
#define F_CPU 72000000U

#define __KEILDUINO__ 100

#define digitalWrite_HIGH(Pin) (PIN_MAP[Pin].GPIOx->BSRR = PIN_MAP[Pin].GPIO_Pin_x)
#define digitalWrite_LOW(Pin)  (PIN_MAP[Pin].GPIOx->BRR  = PIN_MAP[Pin].GPIO_Pin_x)
#define digitalRead_FAST(Pin) ((PIN_MAP[Pin].GPIOx->IDR  & PIN_MAP[Pin].GPIO_Pin_x)!=0)
#define togglePin(Pin)         (PIN_MAP[Pin].GPIOx->ODR ^= PIN_MAP[Pin].GPIO_Pin_x)

#define GPIO_HIGH(GPIOX,GPIO_PIN_X)   (GPIOX->BSRR  = GPIO_PIN_X)
#define GPIO_LOW(GPIOX,GPIO_PIN_X)    (GPIOX->BRR   = GPIO_PIN_X)
#define GPIO_READ(GPIOX,GPIO_PIN_X)  ((GPIOX->IDR   & GPIO_PIN_X)!=0)
#define GPIO_TOGGLE(GPIOX,GPIO_PIN_X) (GPIOX->ODR  ^= GPIO_PIN_X)

#define IS_USARTx_SendDone(USARTx)	(USARTx->ISR & USART_ISR_TC)

#endif
