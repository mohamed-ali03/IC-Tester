/*
 * main.h
 *
 * Created: 12/4/2024 6:03:29 PM
 *  Author: mo ali
 */ 


#ifndef MAIN_H_
#define MAIN_H_
#define F_CPU 11059200UL

#include "IC_Dataset.h"
#include "MCAL/External_Interrupt.h"

/* =========================Init function ====================== */
void Init(void);
uint8_t Number_of_ICs = 180 ;
/* =========================test functions ====================== */
bool Test_IC(IC_INFO *ic);

bool Test_IC_14(IC_INFO *ic);
void apply_Direction_14(uint16_t direction);
void apply_Logic_14(uint16_t logic);
void apply_clk_14(uint16_t clock);
uint16_t read_Logic_14(void);

bool Test_IC_16(IC_INFO *ic);
void apply_Direction_16(uint16_t direction);
void apply_Logic_16(uint16_t logic);
void apply_clk_16(uint16_t clock);
uint16_t read_Logic_16(void);
uint16_t read_Logic_temp;

/* =============================== Variables used in test ==============================*/
void clear_logic_array(void);
void clear_dont_care_array(void);
void clear_clk_array(void);
IC_INFO temp ;
uint16_t size_logic_array =31;
uint16_t logic_array[31];
uint16_t dont_care[31];
uint16_t clk[31];
bool test_flag = false;


/* ============================ Declare interrupt ======================== */
volatile bool begin_flag = false;
void begin_function(void);
EXT_INT_CONFIG begin_test = {.InterruptHandler = begin_function ,.intx = EXT_INT0 ,.sel_sense = INT_RISING_EDGE};

/* ============================ Declare interrupt ======================== */
void USART_Init(void);
void send_char(char ch);
void send_string(char *ch);
/* ============================ Convert int to string ======================== */
void unsignedIntToStr(uint32_t num, char *str);
char temp_Name[6] ;

/* ============================ LCD Declaration ======================== */
#define RS  PC4
#define E   PC5
void LCD_Init(void);
void LCD_Send_Command(uint8_t cmd);
void LCD_Send_Data(char data);
void LCD_Clear(void);
void LCD_SetCursor(uint8_t row, uint8_t col);
void LCD_Send_String(char *str);


#endif /* MAIN_H_ */