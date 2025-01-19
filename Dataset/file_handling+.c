#include <stdio.h>
#include "file_handling+.h"
#include <string.h>


void handle_name(void);
void handle_pattern(void);
void get_Direction(char *input_pattern);
void get_logic(char *input_pattern);
void dont_care_clk_patterns(char* pat,int index);
void clear_dont_care_clk_array(void);

char temp_ch ;
int  temp_i ;
int  index_logic = 0;
int dont_care_flag = 0 ;
int pin = 1 ;
void main (void){
    FILE* f_read;
    FILE* f_write;
    FILE* f_write_;

    f_read = fopen("database.txt","r");
    f_write = fopen("Handled_database.txt","w");
    f_write_ = fopen("ICs_array.txt","w");

    temp_ch = fgetc(f_read);
    fprintf(f_write_,"IC_INFO *ICs[] = {");
    while(temp_ch != EOF){
        if(temp_ch == '$'){
            fgets(name,7,f_read);
            handle_name();

            fgets(text,100,f_read);

            fgets(pins,3,f_read);

            fgets(pattern,22,f_read);
            fgets(pattern,22,f_read);
            handle_pattern();
            if (!strcmp(pins,"14"))
            {
                pin = 14 ;
            }
            else if (!strcmp(pins,"16")){
                pin = 16;
            }
            else {
                pin = 20;
            }
            get_Direction(pattern);    
            get_logic(pattern);
            dont_care_clk_patterns(pattern,index_logic);
            fprintf(f_write_,"&IC_%s,",name);
            fprintf(f_write,"const uint16_t logic_%s[] PROGMEM = {%d",name,logic);
            index_logic = 1 ;
            while(((temp_ch= fgetc(f_read)) != '$') && ((temp_ch= fgetc(f_read)) != EOF)){
                fseek(f_read,-2,SEEK_CUR);
                fgets(pattern , 22,f_read);
                get_logic(pattern);
                fprintf(f_write,",%d",logic);
                dont_care_clk_patterns(pattern,index_logic);
                index_logic++;
            } 
            fprintf(f_write,"};\n");
            fprintf(f_write,"const uint16_t Dont_care_%s[] PROGMEM = {%d",name,Dont_care[0]);
            for (int i = 1 ; i < index_logic ; i++)
                fprintf(f_write,",%d",Dont_care[i]);
            fprintf(f_write,"};\n");

            fprintf(f_write,"const uint16_t CLK_%s[] PROGMEM = {%d",name,clk[0]);
            for (int i = 1 ; i < index_logic ; i++)
                fprintf(f_write,",%d",clk[i]);
            fprintf(f_write,"};\n");

            fprintf(f_write,"const IC_INFO IC_%s PROGMEM = {.Name = %s ,.Direction = %d ,.number_of_pins = %s,.logic = logic_%s,.dont_care = Dont_care_%s ,.clk = CLK_%s,.sizeof_array_logic = %d};\n\n",name,name,Direction,pins,name,name,name,index_logic);
            clear_dont_care_clk_array();
            index_logic = 0 ;
        }
    }
    fprintf(f_write_,"};");
    fclose(f_read);
    fclose(f_write);
    fclose(f_write_);
}


void handle_name(void){
    for(int i = 0 ; i < 8 ;i++){
        if(name[i] == '\n'){
            name[i] = '\0' ;
            break;
        }
    }
}
void handle_pattern(void){
    for(int i = 0 ; i < 22 ;i++){
        if(pattern[i] == '\n'){
            pattern[i] = '\0' ;
            break;
        }
    }
}

void get_Direction(char *input_pattern){
    char position = 0;
    index_Input_Pins = 0 ;
    Direction = 0 ;
    while(position < pin && *input_pattern != '\0'){
        if(*input_pattern == 'L' || *input_pattern == 'H' || *input_pattern == 'X'){
            Direction &= ~(1 << position);
            input_pins[index_Input_Pins] = position ;
            index_Input_Pins++;
        }
        else{
            Direction |= (1 << position);
        }
        position++;
        *(input_pattern++);
    } 
}


void get_logic(char *input_pattern){
    char position = 0;
    logic = 0 ;
    while(position < pin && *input_pattern != '\0'){
        if(*input_pattern == 'H' || *input_pattern == '1' || *input_pattern == 'V'){
            logic |= (1 << position);
        }
        else{
            logic &= ~(1 << position);
        }
        position++;
        *(input_pattern++);
    }
}


void dont_care_clk_patterns(char* pat,int index){
    int position = 0 ;
    if (pin == 14)
        Dont_care[index] = 0x3FFF ;
    else if (pin == 16)
        Dont_care[index] = 0xFFFF ;
    else if(pin = 20)
        Dont_care[index] = 0xFFFFF ;

    while(position < pin && *pat != '\0'){
        if(*pat == 'X'){
            Dont_care[index] &= ~(1 << position);
        } 
        else if (*pat == 'C'){
            clk[index] |= (1 << position);
        }
        *pat++;
        position++;     
    }
}

void clear_dont_care_clk_array(void){
    for (int i = 0 ; i < 31 ; i++){
        Dont_care[i] = 0 ;
        clk[i] = 0 ;
    }
}