/*
 * External_Interrupt.h
 *
 * Created: 11/22/2024 8:50:17 AM
 *  Author: mo ali
 */ 

#include "../STD_Libraries.h"

#ifndef EXTERNAL_INTERRUPT_H_
#define EXTERNAL_INTERRUPT_H_

// INTERRUPT 1/0 SENSING CONTROL (MCUCR)
typedef enum {
	INT_LOW_LEVEL,
	INT_ANY_CHANGE,
	INT_FALLING_EDGE,
	INT_RISING_EDGE
}INT_SENSE_CONT;

typedef enum {
	EXT_INT0,
	EXT_INT1,
	EXT_INT2
}EXT_INTx;

typedef struct {
	EXT_INTx	intx;
	INT_SENSE_CONT sel_sense ;
	void (*InterruptHandler)(void);
}EXT_INT_CONFIG;

void EXT_INTx_Init(EXT_INT_CONFIG *ext_intx);

#endif /* EXTERNAL_INTERRUPT_H_ */