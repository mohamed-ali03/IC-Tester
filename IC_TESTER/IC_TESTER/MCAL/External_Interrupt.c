/*
 * External_Interrupt.c
 *
 * Created: 11/22/2024 8:49:46 AM
 *  Author: mo ali
 */ 
#include "External_Interrupt.h"
static void EXT_INT0_Init(INT_SENSE_CONT sel_sense);
static void EXT_INT1_Init(INT_SENSE_CONT sel_sense);
static void EXT_INT2_Init(INT_SENSE_CONT sel_sense);

void (*Interrupt0_callback)(void);
void (*Interrupt1_callback)(void);
void (*Interrupt2_callback)(void);


void EXT_INTx_Init(EXT_INT_CONFIG *ext_intx){
	if(ext_intx != NULL){
		if (ext_intx->intx == EXT_INT0){
			EXT_INT0_Init(ext_intx->sel_sense);
			Interrupt0_callback = ext_intx->InterruptHandler;
		}
		else if (ext_intx->intx == EXT_INT1){
			EXT_INT1_Init(ext_intx->sel_sense);
			Interrupt1_callback = ext_intx->InterruptHandler;
		}
		else if (ext_intx->intx == EXT_INT2){
			EXT_INT2_Init(ext_intx->sel_sense);
			Interrupt2_callback = ext_intx->InterruptHandler;
		}
		else{
			/*nothing*/
		}
	}
	sei();
}

static void EXT_INT0_Init(INT_SENSE_CONT sel_sense){
	// Disable int0 
	GICR &= ~(1 <<INT0);
	// Interrupt sense control 
	MCUCR &= ~(1 << ISC00) & ~(1<< ISC01);
	MCUCR |= (sel_sense << ISC00);
	// Enable int0 
	GICR |= (1 << INT0);	
}
static void EXT_INT1_Init(INT_SENSE_CONT sel_sense){
	// Disable int1
	GICR &= ~(1 <<INT1);
	// Interrupt sense control
	MCUCR &= ~(1 << ISC10) & ~(1<< ISC11);
	MCUCR |= (sel_sense << ISC10);
	// Enable int1
	GICR |= (1 << INT1);
}
static void EXT_INT2_Init(INT_SENSE_CONT sel_sense){
	// Disable int2
	GICR &= ~(1 <<INT2);
	// Interrupt sense control
	if (sel_sense == INT_RISING_EDGE){
		MCUCSR |= (1 << ISC2);
	}
	else{
		MCUCSR &= ~(1 << ISC2);
	}
	// Enable int2
	GICR |= (1 << INT2);
}


// ISR for INT0
ISR(INT0_vect) {
	GIFR &= ~(1 << INTF0);
	if (Interrupt0_callback){
		Interrupt0_callback();
	}
}

// ISR for INT1
ISR(INT1_vect) {
	GIFR &= ~(1 << INTF1);
	if (Interrupt1_callback){
		Interrupt1_callback();
	}
}

// ISR for INT2
ISR(INT2_vect) {
	GIFR &= ~(1 << INTF2);
	if (Interrupt2_callback){
		Interrupt2_callback();
	}
}

