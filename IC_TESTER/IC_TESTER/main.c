/*
 * IC_TESTER.c
 *
 * Created: 12/4/2024 6:03:10 PM
 * Author : mo ali
 */ 
#include "main.h"
int main(void)
{
	uint8_t trav_ICs;
	Init();
    /* Replace with your application code */
    while (1) 
    {
		if(begin_flag){
			for (trav_ICs = 0 ; trav_ICs < Number_of_ICs ; trav_ICs++){
				memcpy_P(&temp,ICs[trav_ICs],sizeof(IC_INFO));					// get struct from flash to SRAM
				memcpy_P(&logic_array,temp.logic,temp.sizeof_array_logic * sizeof(uint16_t));			// get logic array from Flash to SRAM
				memcpy_P(&dont_care,temp.dont_care,temp.sizeof_array_logic * sizeof(uint16_t));
				memcpy_P(&clk,temp.clk,temp.sizeof_array_logic * sizeof(uint16_t));
				test_flag = Test_IC(&temp);							// function to apply pattern for an ic
				if(test_flag){
					unsignedIntToStr(temp.Name,temp_Name);
					LCD_SetCursor(2,11);
					LCD_Send_String("     ");
					LCD_SetCursor(2,11);
					LCD_Send_String(temp_Name);
					PORTD |= (1 << PD7);
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
				// code to show not founded
			}
			begin_flag = false;
		}
    }
}


/* ==================================================================================== Init Function ======================================================================================================== */
void Init(void){
	EXT_INTx_Init(&begin_test);
	//USART_Init();
	LCD_Init();
	DDRD |=(1 << PD7);
	PORTD&=	~(1 << PD7);
}
/* ==================================================================================== Test IC ======================================================================================================== */
bool Test_IC(IC_INFO *ic)
{
	uint16_t input ;
	uint8_t trav_Logic;
	bool flag  = true ;
	apply_Direction(ic->Direction);			// apply direction in DDRA and DDRB
	for(trav_Logic = 0 ; trav_Logic < ic->sizeof_array_logic ;trav_Logic++){
		apply_Logic(logic_array[trav_Logic]);
		apply_clk(clk[trav_Logic]);
		input = read_Logic() ;
		input = input & dont_care[trav_Logic];
		if (input != logic_array[trav_Logic]){
			apply_Direction(0X00);			// make all pins input
			flag = false ;
			break;
		}
	}
	return flag;
}

void apply_Direction(uint16_t direction){
	DDRA = direction;
	DDRB = (direction >> 8);
}

void apply_Logic(uint16_t logic){
	PORTA = logic;
	PORTB = (logic >> 8) ;
}

void apply_clk(uint16_t clock){
	// apply high pulse
	PORTA |= clock ;
	PORTB |= (clock >> 8 );
	_delay_us(5);
	// apply low pulse 
	PORTA &= ~(clock);
	PORTB &= ~(clock >> 8);
}
uint16_t read_Logic(void){
	read_Logic_temp = PINA | (PINB << 8);
	return read_Logic_temp ;
}




/* ============================================================================================================ Interrupt at beginning ==========================================================================================*/
void begin_function(void){
	begin_flag = true;
	test_flag = false;
	PORTD&=	~(1 << PD7);
}


/* ============================================================================================================ USART Functions ==========================================================================================*/
void USART_Init(void){
	UBRRH = 0 ;
	UBRRL = 51 ;
	UCSRB = (1 << TXEN);
	UCSRC = (1 << URSEL) | (1 << UCSZ1) | (1 << UCSZ0);
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

/* ======================================================== LCD Configuration ================================================ */

void LCD_Init(void){
	uint8_t cmd ;
	DDRC = 0xFF;
	PORTC = 0x00;
	_delay_ms(20);

	// Function set: 4-bit mode
	LCD_Send_Command(0x33);
	LCD_Send_Command(0x32);
	LCD_Send_Command(0x28); // 2 lines, 5x8 matrix
	LCD_Send_Command(0x0C);					// Display on, cursor off, no blinking
	LCD_Send_Command(0x06);					// Entry mode set: increment cursor, no shift
	LCD_Clear()	;
	
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
	
	PORTC |= (1 << E);   // Enable pulse
	_delay_us(1);
	PORTC &= ~(1 << E);
	_delay_us(200);
	
	 PORTC = (PORTC & 0xF0) | (cmd & 0x0F);
	 
	 PORTC |= (1 << E);   // Enable pulse
	 _delay_us(1);
	 PORTC &= ~(1 << E);
	 _delay_us(2);
}


// Send data (character) to the LCD
void LCD_Send_Data(char data) {
	PORTC |= (1 << RS);  // RS = 1 (data mode)
	
	// Send higher nibble
	PORTC = (PORTC & 0xF0) | ((data >> 4) & 0x0F);
	PORTC |= (1 << E);   // Enable pulse
	_delay_us(1);
	PORTC &= ~(1 << E);
	_delay_us(200);
	
	// Send lower nibble
	PORTC = (PORTC & 0xF0) | (data & 0x0F);
	PORTC |= (1 << E);   // Enable pulse
	_delay_us(1);
	PORTC &= ~(1 << E);
	_delay_us(2);
}

void LCD_Send_String(char *str){
	while(*str){
		LCD_Send_Data(*str);
		*str++;
		_delay_ms(10);
	}
}

void LCD_SetCursor(uint8_t row, uint8_t col) {
	uint8_t address = (row == 1) ? 0x00 : 0x40; // Line 1 or Line 2
	address += col;
	LCD_Send_Command(0x80 | address); // Set DDRAM address
}