/*
 * driver.h
 *
 *  Created on: Apr 2, 2025
 *      Author: Kumaresh Raj
 */

#ifndef DRIVER_H_
#define DRIVER_H_

#include <stdint.h>

typedef union
{
 struct
{
	uint32_t      GPIOA_EN : 1;
	uint32_t      GPIOB_EN : 1;
	uint32_t      GPIOC_EN : 1;
	uint32_t      GPIOD_EN : 1;
	uint32_t      GPIOE_EN : 1;
	uint32_t      GPIOF_EN : 1;
	uint32_t      GPIOG_EN : 1;
	uint32_t      GPIOH_EN : 1;
	uint32_t      GPIOI_EN : 1;
	uint32_t      GPIOJ_EN : 1;
	uint32_t      GPIOK_EN : 1;
	uint32_t     Reserved1 : 1;
	uint32_t        CRC_EN : 1;
	uint32_t     Reserved2 : 3;
	uint32_t     Reserved3 : 2;
	uint32_t      BKPSR_EN : 1;
	uint32_t     Reserved4 : 1;
	uint32_t   CCMDATRM_EN : 1;
	uint32_t       DMA1_EN : 1;
	uint32_t       DMA2_EN : 1;
	uint32_t      DMA2D_EN : 1;
	uint32_t     Reserved5 : 1;
	uint32_t     ETHMAC_EN : 1;
	uint32_t   ETHMACTX_EN : 1;
	uint32_t   ETHMACRX_EN : 1;
	uint32_t  ETHMACPTP_EN : 1;
	uint32_t      OTGHS_EN : 1;
	uint32_t OTGHSULPIE_EN : 1;
	uint32_t     Reserved6 : 1;
}RCC_AHB1ENR;

uint32_t enable;

}AHB1ENR;

typedef union
{
struct
{
	uint32_t MODER0   : 2; // address offset 0X00
	uint32_t MODER1   : 2;
	uint32_t MODER2   : 2;
	uint32_t MODER3   : 2;
	uint32_t MODER4   : 2;
	uint32_t MODER5   : 2;
	uint32_t MODER6   : 2;
	uint32_t MODER7   : 2;
	uint32_t MODER8   : 2;
	uint32_t MODER9   : 2;
	uint32_t MODER10  : 2;
	uint32_t MODER11  : 2;
	uint32_t MODER12  : 2;
	uint32_t MODER13  : 2;
	uint32_t MODER14  : 2;
	uint32_t MODER15  : 2;
}GPIOx_MODER;

uint32_t mode;

}MODER;

typedef union
{

struct
{
	uint32_t  IDR0 : 1; // address offset 0X10
	uint32_t  IDR1 : 1;
	uint32_t  IDR2 : 1;
	uint32_t  IDR3 : 1;
	uint32_t  IDR4 : 1;
	uint32_t  IDR5 : 1;
	uint32_t  IDR6 : 1;
	uint32_t  IDR7 : 1;
	uint32_t  IDR8 : 1;
	uint32_t  IDR9 : 1;
	uint32_t IDR10 : 1;
	uint32_t IDR11 : 1;
	uint32_t IDR12 : 1;
	uint32_t IDR13 : 1;
	uint32_t IDR15 : 1;

}GPIOx_IDR;

uint32_t input;

}IDR;

typedef union
{
struct
{
	uint32_t  ODR0 : 1; // address offset 0X14
	uint32_t  ODR1 : 1;
	uint32_t  ODR2 : 1;
	uint32_t  ODR3 : 1;
	uint32_t  ODR4 : 1;
	uint32_t  ODR5 : 1;
	uint32_t  ODR6 : 1;
	uint32_t  ODR7 : 1;
	uint32_t  ODR8 : 1;
	uint32_t  ODR9 : 1;
	uint32_t ODR10 : 1;
	uint32_t ODR11 : 1;
	uint32_t ODR12 : 1;
	uint32_t ODR13 : 1;
	uint32_t ODR14 : 1;
	uint32_t ODR15 : 1;

}GPIOx_ODR;

uint32_t output;

}ODR;

#endif /* DRIVER_H_ */
