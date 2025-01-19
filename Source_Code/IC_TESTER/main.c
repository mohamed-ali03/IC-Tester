/*
 * IC_TESTER.c
 *
 * Created: 12/4/2024 6:03:10 PM
 * Author : mo ali
 */ 
#include "main.h"


uint8_t trav_ICs;
int main(void)
{
	Init();
    /* Replace with your application code */
    while (1) 
    {
		if(begin_flag){
			for (trav_ICs = 0 ; trav_ICs < Number_of_ICs ; trav_ICs++){
				memcpy_P(&temp,ICs[trav_ICs],sizeof(IC_INFO));											
				memcpy_P(&logic_array,temp.logic,temp.sizeof_array_logic * sizeof(uint16_t));			
				memcpy_P(&dont_care,temp.dont_care,temp.sizeof_array_logic * sizeof(uint16_t));				
				memcpy_P(&clk,temp.clk,temp.sizeof_array_logic * sizeof(uint16_t));
				test_flag = Test_IC(&temp);																
				if(test_flag){
					LCD_SetCursor(2,11);
					LCD_Send_String("      ");
					unsignedIntToStr(temp.Name,temp_Name);
					LCD_SetCursor(2,11);
					LCD_Send_String(temp_Name);
					break;
				}
				clear_logic_array();
				clear_dont_care_array();
				clear_clk_array();
			}
			if (!test_flag){
				LCD_SetCursor(2,1);
				LCD_Send_String("                ");
				LCD_SetCursor(2,3);
				LCD_Send_String("Not Found");
			}
			begin_flag = false;
		}
    }
}

/* ==================================================================================== Init Function ======================================================================================================== */
void Init(void){
	EXT_INTx_Init(&begin_test);
	USART_Init();
	LCD_Init();
}
/* ==================================================================================== Test IC ======================================================================================================== */
bool Test_IC(IC_INFO *ic){
	bool flag = true;
	if (ic->number_of_pins == 16){
		flag =Test_IC_16(ic);
	}
	else if (ic->number_of_pins == 14){
		flag = Test_IC_14(ic);
	}
	apply_Direction_16(0);
	return flag ;
}
bool Test_IC_14(IC_INFO *ic){
	uint16_t input ;
	uint8_t trav_Logic;
	bool flag  = true ;
	apply_Direction_14(ic->Direction);			// apply direction in DDRA and DDRB
	for(trav_Logic = 0 ; trav_Logic < ic->sizeof_array_logic ;trav_Logic++){
		apply_Logic_14(logic_array[trav_Logic]);
		apply_clk_14(clk[trav_Logic]);
		input = read_Logic_14() ;
		input = input & dont_care[trav_Logic];
		if (input != logic_array[trav_Logic]){
			apply_Direction_14(0X00);			// make all pins input
			flag = false ;
			break;
		}
		_delay_us(10);
	}
	return flag;
}

void apply_Direction_14(uint16_t direction){
	DDRA = direction & 0x7F;
	DDRB = (direction >> 6) & 0xFE ;
}

void apply_Logic_14(uint16_t logic){
	PORTA = logic & 0x7F;
	PORTB = (logic  >> 6) & 0xFE ;
}

void apply_clk_14(uint16_t clock){
	// apply high pulse
	PORTA |= clock & 0x7F;
	PORTB |= (clock >> 6) & 0xFE ;
	_delay_us(5);
	// apply low pulse
	PORTA &= ~(clock & 0x7F);
	PORTB &= ~((clock >> 6) & 0xFE) ;
}

uint16_t read_Logic_14(void){
	read_Logic_temp = (PINA & 0x7F) | ((PINB & 0xFE) << 6);
	return read_Logic_temp ;
}



bool Test_IC_16(IC_INFO *ic)
{
	uint16_t input ;
	uint8_t trav_Logic;
	bool flag  = true ;
	apply_Direction_16(ic->Direction);			// apply direction in DDRA and DDRB
	for(trav_Logic = 0 ; trav_Logic < ic->sizeof_array_logic ;trav_Logic++){
		apply_Logic_16(logic_array[trav_Logic]);
		apply_clk_16(clk[trav_Logic]);
		input = read_Logic_16() ;
		input = input & dont_care[trav_Logic];
		if (input != logic_array[trav_Logic]){
			apply_Direction_16(0X00);			// make all pins input
			flag = false ;
			break;
		}
		_delay_us(10);
	}
	return flag;
}

void apply_Direction_16(uint16_t direction){
	DDRA = direction;
	DDRB = (direction >> 8);
}

void apply_Logic_16(uint16_t logic){
	PORTA = logic;
	PORTB = (logic >> 8) ;
}

void apply_clk_16(uint16_t clock){
	// apply high pulse
	PORTA |= clock ;
	PORTB |= (clock >> 8 );
	_delay_us(5);
	// apply low pulse 
	PORTA &= ~(clock);
	PORTB &= ~(clock >> 8);
}
uint16_t read_Logic_16(void){
	read_Logic_temp = PINA | (PINB << 8);
	return read_Logic_temp ;
}




/* ============================================================================================================ Interrupt at beginning ==========================================================================================*/
void begin_function(void){
	begin_flag = true;
	test_flag = false;
	_delay_ms(300);
}


/* ============================================================================================================ USART Functions ==========================================================================================*/
void USART_Init(void){
	UCSRB = (1 << TXEN);
	UCSRC = (1 << URSEL) | (1 << UCSZ1) | (1 << UCSZ0);
	UBRRH = 0 ;
	UBRRL = 0x47;
	send_string("=========IC_Tester=========\n\r");
}

void send_char(char ch) {
	while (!(UCSRA & (1 << UDRE)));
	UDR = ch;
}

void send_string(char *ch) {
	while (*ch) {
		send_char(*ch++);
	}
}


/* ======================================================== convert int to string ================================================ */ 
void unsignedIntToStr(uint32_t num, char *str) {
	uint32_t i = 0;

	// Handle 0 explicitly, otherwise empty string is printed
	if (num == 0) {
		str[i++] = '0';
		str[i] = '\0';
		return;
	}

	// Process individual digits
	while (num != 0) {
		str[i++] = (num % 10) + '0';  // Get the last digit and convert to character
		num = num / 10;  // Remove the last digit
	}

	// Null terminate the string
	str[i] = '\0';

	// Reverse the string as digits are in reverse order
	int start = 0;
	int end = i - 1;
	while (start < end) {
		char temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
}

/* ======================================================== Clear Logic Array ================================================ */
void clear_logic_array(void){
	for (int i = 0 ; i<size_logic_array ; i++)
	{
		logic_array[i] =  0;
	}
}

void clear_dont_care_array(void){
	for (int i = 0 ; i<size_logic_array ; i++)
	{
		dont_care[i] =  0;
	}
}

void clear_clk_array(void){
	for (int i = 0 ; i<size_logic_array ; i++)
	{
		clk[i] =  0;
	}
}

// ======================================================== LCD Configuration ================================================

void LCD_Init(void){
	uint8_t cmd ;
	DDRC = 0xFF;
	PORTC = 0x00;
	_delay_ms(20);

	// Function set: 4-bit mode
	LCD_Send_Command(0x03);
	_delay_ms(5);
	LCD_Send_Command(0x03);
	_delay_ms(5);
	LCD_Send_Command(0x03); // 2 lines, 5x8 matrix
	_delay_ms(5);
	LCD_Send_Command(0x02);					// Display on, cursor off, no blinking
	
	LCD_Send_Command(0x28);
	
	LCD_Send_Command(0x0c);
	
	LCD_Send_Command(0x01);
	_delay_ms(2);
	
	LCD_Send_Command(0x06);
	
	LCD_SetCursor(1,3);
	LCD_Send_String("IC Tester");
	LCD_SetCursor(2,1);
	LCD_Send_String("IC Name : ");
}

void LCD_Clear(void) {
	LCD_Send_Command(0x01); // Clear display
	_delay_ms(2);      // Clear command requires extra delay
}

void LCD_Send_Command(uint8_t cmd){
	PORTC &= ~(1 << RS);				//  command mode
	
	PORTC = (PORTC & 0xF0) | ((cmd >> 4) & 0x0F);
	
	LCD_Enable();
	
	PORTC = (PORTC & 0xF0) | (cmd & 0x0F);
	
	LCD_Enable();
	
	_delay_ms(2);
}


// Send data (character) to the LCD
void LCD_Send_Data(char data) {
	PORTC |= (1 << RS);  // RS = 1 (data mode)
	
	// Send higher nibble
	PORTC = (PORTC & 0xF0) | ((data >> 4) & 0x0F);
	LCD_Enable();
	
	// Send lower nibble
	PORTC = (PORTC & 0xF0) | (data & 0x0F);
	LCD_Enable();
	
	_delay_ms(2);
}

void LCD_Send_String(char *str){
	while(*str){
		LCD_Send_Data(*str);
		*str++;
	}
}

void LCD_SetCursor(uint8_t row, uint8_t col) {
	uint8_t address = (row == 1) ? 0x00 : 0x40; // Line 1 or Line 2
	address += col;
	LCD_Send_Command(0x80 | address); // Set DDRAM address
}


void LCD_Enable(void){
	PORTC |= (1 << E);
	_delay_us(1);
	PORTC &= ~(1 << E);
	_delay_us(1);
}