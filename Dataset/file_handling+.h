

typedef struct {
    int Name ;
    unsigned short Direction ;
    unsigned char NumOfPins;
    unsigned char Input_Pins[12];
    unsigned char index_Input_Pins;
    unsigned short *logic ;
}IC_INFO;



char name[8] ;
char text[50];
char pins[3];
char pattern[22];
unsigned char input_pins[12];
unsigned char index_Input_Pins = 0 ;
unsigned int Direction = 0 ;
unsigned int logic = 0 ;
unsigned int Dont_care[31] = {0};
unsigned int clk[31] = {0};