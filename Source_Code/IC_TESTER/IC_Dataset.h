/*
 * IC_Dataset.h
 *
 * Created: 12/4/2024 6:03:49 PM
 *  Author: mo ali
 */ 


#ifndef IC_DATASET_H_
#define IC_DATASET_H_

#include "STD_Libraries.h"


typedef struct {
	uint32_t Name ;
	uint16_t Direction ;
	uint16_t *logic ;
	uint16_t *dont_care;
	uint16_t *clk;
	uint8_t number_of_pins;
	uint8_t sizeof_array_logic;
}IC_INFO;



const uint16_t logic_4000[] PROGMEM = {8864,8992,9488,10504,11544,12548,13588,14604,15644};
const uint16_t Dont_care_4000[] PROGMEM = {16383,16383,16383,16383,16383,16383,16383,16383,16383};
const uint16_t CLK_4000[] PROGMEM = {0,0,0,0,0,0,0,0,0};
const IC_INFO IC_4000 PROGMEM = {.Name = 4000 ,.Direction = 15583 ,.number_of_pins = 14,.logic = logic_4000,.dont_care = Dont_care_4000 ,.clk = CLK_4000,.sizeof_array_logic = 9};

const uint16_t logic_4001[] PROGMEM = {9740,12578,10385,14771};
const uint16_t Dont_care_4001[] PROGMEM = {16383,16383,16383,16383};
const uint16_t CLK_4001[] PROGMEM = {0,0,0,0};
const IC_INFO IC_4001 PROGMEM = {.Name = 4001 ,.Direction = 14835 ,.number_of_pins = 14,.logic = logic_4001,.dont_care = Dont_care_4001 ,.clk = CLK_4001,.sizeof_array_logic = 4};

const uint16_t logic_4002[] PROGMEM = {8976,8464,12048,11288,12038,8708,12062,12289,9482,10772};
const uint16_t Dont_care_4002[] PROGMEM = {16383,16383,16383,16383,16383,16383,16383,16383,16383,16383};
const uint16_t CLK_4002[] PROGMEM = {0,0,0,0,0,0,0,0,0,0};
const IC_INFO IC_4002 PROGMEM = {.Name = 4002 ,.Direction = 12286 ,.number_of_pins = 14,.logic = logic_4002,.dont_care = Dont_care_4002 ,.clk = CLK_4002,.sizeof_array_logic = 10};

const uint16_t logic_4009[] PROGMEM = {51755,42325};
const uint16_t Dont_care_4009[] PROGMEM = {61439,61439};
const uint16_t CLK_4009[] PROGMEM = {0,0};
const IC_INFO IC_4009 PROGMEM = {.Name = 4009 ,.Direction = 42453 ,.number_of_pins = 16,.logic = logic_4009,.dont_care = Dont_care_4009 ,.clk = CLK_4009,.sizeof_array_logic = 2};

const uint16_t logic_4010[] PROGMEM = {61311,32769};
const uint16_t Dont_care_4010[] PROGMEM = {61439,61439};
const uint16_t CLK_4010[] PROGMEM = {0,0};
const IC_INFO IC_4010 PROGMEM = {.Name = 4010 ,.Direction = 42453 ,.number_of_pins = 16,.logic = logic_4010,.dont_care = Dont_care_4010 ,.clk = CLK_4010,.sizeof_array_logic = 2};

const uint16_t logic_40106[] PROGMEM = {10922,13589};
const uint16_t Dont_care_40106[] PROGMEM = {16383,16383};
const uint16_t CLK_40106[] PROGMEM = {0,0};
const IC_INFO IC_40106 PROGMEM = {.Name = 40106 ,.Direction = 13653 ,.number_of_pins = 14,.logic = logic_40106,.dont_care = Dont_care_40106 ,.clk = CLK_40106,.sizeof_array_logic = 2};

const uint16_t logic_4011[] PROGMEM = {9652,11933,14126,14859};
const uint16_t Dont_care_4011[] PROGMEM = {16383,16383,16383,16383};
const uint16_t CLK_4011[] PROGMEM = {0,0,0,0};
const IC_INFO IC_4011 PROGMEM = {.Name = 4011 ,.Direction = 14835 ,.number_of_pins = 14,.logic = logic_4011,.dont_care = Dont_care_4011 ,.clk = CLK_4011,.sizeof_array_logic = 4};

const uint16_t logic_4012[] PROGMEM = {12289,13579,14869,12062};
const uint16_t Dont_care_4012[] PROGMEM = {16223,16223,16223,16223};
const uint16_t CLK_4012[] PROGMEM = {0,0,0,0};
const IC_INFO IC_4012 PROGMEM = {.Name = 4012 ,.Direction = 12126 ,.number_of_pins = 14,.logic = logic_4012,.dont_care = Dont_care_4012 ,.clk = CLK_4012,.sizeof_array_logic = 4};

const uint16_t logic_4013[] PROGMEM = {10762,12449,10242,12561};
const uint16_t Dont_care_4013[] PROGMEM = {16383,16383,16383,16383};
const uint16_t CLK_4013[] PROGMEM = {1028,1028,1028,1028};
const IC_INFO IC_4013 PROGMEM = {.Name = 4013 ,.Direction = 10236 ,.number_of_pins = 14,.logic = logic_4013,.dont_care = Dont_care_4013 ,.clk = CLK_4013,.sizeof_array_logic = 4};

const uint16_t logic_4015[] PROGMEM = {40992,53328,55384,56412,36366};
const uint16_t Dont_care_4015[] PROGMEM = {65535,65535,65535,65535,65535};
const uint16_t CLK_4015[] PROGMEM = {257,257,257,257,257};
const IC_INFO IC_4015 PROGMEM = {.Name = 4015 ,.Direction = 57825 ,.number_of_pins = 16,.logic = logic_4015,.dont_care = Dont_care_4015 ,.clk = CLK_4015,.sizeof_array_logic = 5};

const uint16_t logic_4016[] PROGMEM = {8966,10127,14384,16319};
const uint16_t Dont_care_4016[] PROGMEM = {16383,16383,16383,16383};
const uint16_t CLK_4016[] PROGMEM = {0,0,0,0};
const IC_INFO IC_4016 PROGMEM = {.Name = 4016 ,.Direction = 15609 ,.number_of_pins = 14,.logic = logic_4016,.dont_care = Dont_care_4016 ,.clk = CLK_4016,.sizeof_array_logic = 4};

const uint16_t logic_40161[] PROGMEM = {33076,33588,44085,44865,40769,65345,33601,41793,37699,37697,33600,33601};
const uint16_t Dont_care_40161[] PROGMEM = {33791,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,33791};
const uint16_t CLK_40161[] PROGMEM = {2,2,2,0,2,2,2,2,0,0,0,2};
const IC_INFO IC_40161 PROGMEM = {.Name = 40161 ,.Direction = 33791 ,.number_of_pins = 16,.logic = logic_40161,.dont_care = Dont_care_40161 ,.clk = CLK_40161,.sizeof_array_logic = 12};

const uint16_t logic_40162[] PROGMEM = {33052,47133,47937,34625,59201,33601,41793,37697,45891,45890,45888,33602,33601};
const uint16_t Dont_care_40162[] PROGMEM = {33791,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,33791};
const uint16_t CLK_40162[] PROGMEM = {2,2,0,2,2,2,2,2,0,0,0,0,2};
const IC_INFO IC_40162 PROGMEM = {.Name = 40162 ,.Direction = 33791 ,.number_of_pins = 16,.logic = logic_40162,.dont_care = Dont_care_40162 ,.clk = CLK_40162,.sizeof_array_logic = 13};

const uint16_t logic_4017[] PROGMEM = {51204,34818,34824,34880,35328,32769,32784,32800,33024,33792,34820,38916};
const uint16_t Dont_care_4017[] PROGMEM = {65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535};
const uint16_t CLK_4017[] PROGMEM = {8192,8192,8192,8192,8192,8192,8192,8192,8192,8192,8192,8192};
const IC_INFO IC_4017 PROGMEM = {.Name = 4017 ,.Direction = 61568 ,.number_of_pins = 16,.logic = logic_4017,.dont_care = Dont_care_4017 ,.clk = CLK_4017,.sizeof_array_logic = 12};

const uint16_t logic_40174[] PROGMEM = {65151,32769,32768,46124};
const uint16_t Dont_care_40174[] PROGMEM = {65535,65535,65535,65535};
const uint16_t CLK_40174[] PROGMEM = {256,256,256,256};
const IC_INFO IC_40174 PROGMEM = {.Name = 40174 ,.Direction = 46509 ,.number_of_pins = 16,.logic = logic_40174,.dont_care = Dont_care_40174 ,.clk = CLK_40174,.sizeof_array_logic = 4};

const uint16_t logic_40175[] PROGMEM = {55899,42021,42020,48188};
const uint16_t Dont_care_40175[] PROGMEM = {65535,65535,65535,65535};
const uint16_t CLK_40175[] PROGMEM = {256,256,256,256};
const IC_INFO IC_40175 PROGMEM = {.Name = 40175 ,.Direction = 39321 ,.number_of_pins = 16,.logic = logic_40175,.dont_care = Dont_care_40175 ,.clk = CLK_40175,.sizeof_array_logic = 4};

const uint16_t logic_4018[] PROGMEM = {56633,40233,40225,40193,39169,35072,35640,33848,37945,37929};
const uint16_t Dont_care_4018[] PROGMEM = {65535,65535,65535,65535,65535,65535,65535,65535,65535,65535};
const uint16_t CLK_4018[] PROGMEM = {8192,8192,8192,8192,8192,8192,8192,8192,8192,8192};
const IC_INFO IC_4018 PROGMEM = {.Name = 4018 ,.Direction = 60359 ,.number_of_pins = 16,.logic = logic_4018,.dont_care = Dont_care_4018 ,.clk = CLK_4018,.sizeof_array_logic = 10};

const uint16_t logic_4019[] PROGMEM = {65407,65151,49279,61696,36693,48725};
const uint16_t Dont_care_4019[] PROGMEM = {65535,65535,65535,65535,65535,65535};
const uint16_t CLK_4019[] PROGMEM = {0,0,0,0,0,0};
const IC_INFO IC_4019 PROGMEM = {.Name = 4019 ,.Direction = 57855 ,.number_of_pins = 16,.logic = logic_4019,.dont_care = Dont_care_4019 ,.clk = CLK_4019,.sizeof_array_logic = 6};

const uint16_t logic_40192[] PROGMEM = {65049,55871,39982,40024,40008,40028,37964,39960,39944,39964,39956,39960,35856,40028};
const uint16_t Dont_care_40192[] PROGMEM = {65433,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535};
const uint16_t CLK_40192[] PROGMEM = {0,0,0,0,0,0,0,0,0,0,0,0,0,0};
const IC_INFO IC_40192 PROGMEM = {.Name = 40192 ,.Direction = 59289 ,.number_of_pins = 16,.logic = logic_40192,.dont_care = Dont_care_40192 ,.clk = CLK_40192,.sizeof_array_logic = 14};

const uint16_t logic_40193[] PROGMEM = {65304,56188,40044,40058,40042,40062,37998,39960,39944,39964,39956,39960,35856,40062};
const uint16_t Dont_care_40193[] PROGMEM = {65433,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535};
const uint16_t CLK_40193[] PROGMEM = {0,0,0,0,0,0,0,0,0,0,0,0,0,0};
const IC_INFO IC_40193 PROGMEM = {.Name = 40193 ,.Direction = 59289 ,.number_of_pins = 16,.logic = logic_40193,.dont_care = Dont_care_40193 ,.clk = CLK_40193,.sizeof_array_logic = 14};

const uint16_t logic_4020[] PROGMEM = {33792,32768,33024,32768,33024,32768,33024,32768,33024,32832,33088,32832,33088,32832,33088,32832,33088,32784};
const uint16_t Dont_care_4020[] PROGMEM = {65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535};
const uint16_t CLK_4020[] PROGMEM = {0,0,512,512,512,512,512,512,512,512,512,512,512,512,512,512,512,512};
const IC_INFO IC_4020 PROGMEM = {.Name = 4020 ,.Direction = 34432 ,.number_of_pins = 16,.logic = logic_4020,.dont_care = Dont_care_4020 ,.clk = CLK_4020,.sizeof_array_logic = 18};

const uint16_t logic_4022[] PROGMEM = {51202,34817,34820,34880,33792,32776,32784,33280,34818,38914};
const uint16_t Dont_care_4022[] PROGMEM = {65247,65247,65247,65247,65247,65247,65247,65247,65247,65247};
const uint16_t CLK_4022[] PROGMEM = {8192,8192,8192,8192,8192,8192,8192,8192,8192,8192};
const IC_INFO IC_4022 PROGMEM = {.Name = 4022 ,.Direction = 61568 ,.number_of_pins = 16,.logic = logic_4022,.dont_care = Dont_care_4022 ,.clk = CLK_4022,.sizeof_array_logic = 10};

const uint16_t logic_4023[] PROGMEM = {8992,10148,11049,12205,13106,14262,15163,15519};
const uint16_t Dont_care_4023[] PROGMEM = {16383,16383,16383,16383,16383,16383,16383,16383};
const uint16_t CLK_4023[] PROGMEM = {0,0,0,0,0,0,0,0};
const IC_INFO IC_4023 PROGMEM = {.Name = 4023 ,.Direction = 15583 ,.number_of_pins = 14,.logic = logic_4023,.dont_care = Dont_care_4023 ,.clk = CLK_4023,.sizeof_array_logic = 8};

const uint16_t logic_4024[] PROGMEM = {8194,10240,9216,11264,8448,10496,9472,11520,8224,10272,9248,11296,8480,8194};
const uint16_t Dont_care_4024[] PROGMEM = {8259,11647,11647,11647,11647,11647,11647,11647,11647,11647,11647,11647,11647,11647};
const uint16_t CLK_4024[] PROGMEM = {1,1,1,1,1,1,1,1,1,1,1,1,1,1};
const IC_INFO IC_4024 PROGMEM = {.Name = 4024 ,.Direction = 8259 ,.number_of_pins = 14,.logic = logic_4024,.dont_care = Dont_care_4024 ,.clk = CLK_4024,.sizeof_array_logic = 14};

const uint16_t logic_4025[] PROGMEM = {8992,9348,10249,11405,12306,13462,14363,15519};
const uint16_t Dont_care_4025[] PROGMEM = {16383,16383,16383,16383,16383,16383,16383,16383};
const uint16_t CLK_4025[] PROGMEM = {0,0,0,0,0,0,0,0};
const IC_INFO IC_4025 PROGMEM = {.Name = 4025 ,.Direction = 15583 ,.number_of_pins = 14,.logic = logic_4025,.dont_care = Dont_care_4025 ,.clk = CLK_4025,.sizeof_array_logic = 8};

const uint16_t logic_4027[] PROGMEM = {50513,43562,40993,40978,41009,41010,49666,41986,50690,42498};
const uint16_t Dont_care_4027[] PROGMEM = {65535,65535,65535,65535,65535,65535,65535,65535,65535,65535};
const uint16_t CLK_4027[] PROGMEM = {0,0,4,4,4,4,4096,4096,4096,4096};
const IC_INFO IC_4027 PROGMEM = {.Name = 4027 ,.Direction = 40956 ,.number_of_pins = 16,.logic = logic_4027,.dont_care = Dont_care_4027 ,.clk = CLK_4027,.sizeof_array_logic = 10};

const uint16_t logic_4028[] PROGMEM = {32772,41472,32772,53760,34817,35360,38976,39432,34048,34320};
const uint16_t Dont_care_4028[] PROGMEM = {65535,65535,65535,65535,65535,65535,65535,65535,65535,65535};
const uint16_t CLK_4028[] PROGMEM = {0,0,0,0,0,0,0,0,0,0};
const IC_INFO IC_4028 PROGMEM = {.Name = 4028 ,.Direction = 40576 ,.number_of_pins = 16,.logic = logic_4028,.dont_care = Dont_care_4028 ,.clk = CLK_4028,.sizeof_array_logic = 10};

const uint16_t logic_4029[] PROGMEM = {33345,33376,34368,34400,41536,41568,42560,42592,33346,32802,32834,42080,42048,41056,41024,33888,33856,32864,32848,32768,32866,48704};
const uint16_t Dont_care_4029[] PROGMEM = {65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535};
const uint16_t CLK_4029[] PROGMEM = {16384,16384,16384,16384,16384,16384,16384,16384,16384,16384,16384,16384,16384,16384,16384,16384,16384,16384,16384,16384,16384,16385};
const IC_INFO IC_4029 PROGMEM = {.Name = 4029 ,.Direction = 56221 ,.number_of_pins = 16,.logic = logic_4029,.dont_care = Dont_care_4029 ,.clk = CLK_4029,.sizeof_array_logic = 22};

const uint16_t logic_4030[] PROGMEM = {11933,14126,8192,14771};
const uint16_t Dont_care_4030[] PROGMEM = {16383,16383,16383,16383};
const uint16_t CLK_4030[] PROGMEM = {0,0,0,0};
const IC_INFO IC_4030 PROGMEM = {.Name = 4030 ,.Direction = 14835 ,.number_of_pins = 14,.logic = logic_4030,.dont_care = Dont_care_4030 ,.clk = CLK_4030,.sizeof_array_logic = 4};

const uint16_t logic_4031[] PROGMEM = {49184,32832,33313,33344};
const uint16_t Dont_care_4031[] PROGMEM = {49891,49891,49891,49891};
const uint16_t CLK_4031[] PROGMEM = {2,2,2,2};
const IC_INFO IC_4031 PROGMEM = {.Name = 4031 ,.Direction = 49795 ,.number_of_pins = 16,.logic = logic_4031,.dont_care = Dont_care_4031 ,.clk = CLK_4031,.sizeof_array_logic = 4};

const uint16_t logic_4040[] PROGMEM = {33792,33024,32832,33088,32800,33056,32864,33120,32784,33040,32848,33104,32816,33072,32880};
const uint16_t Dont_care_4040[] PROGMEM = {34432,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535};
const uint16_t CLK_4040[] PROGMEM = {512,512,512,512,512,512,512,512,512,512,512,512,512,512,512};
const IC_INFO IC_4040 PROGMEM = {.Name = 4040 ,.Direction = 34432 ,.number_of_pins = 16,.logic = logic_4040,.dont_care = Dont_care_4040 ,.clk = CLK_4040,.sizeof_array_logic = 15};

const uint16_t logic_4041[] PROGMEM = {13997,10514};
const uint16_t Dont_care_4041[] PROGMEM = {16383,16383};
const uint16_t CLK_4041[] PROGMEM = {0,0};
const IC_INFO IC_4041 PROGMEM = {.Name = 4041 ,.Direction = 12900 ,.number_of_pins = 14,.logic = logic_4041,.dont_care = Dont_care_4041 ,.clk = CLK_4041,.sizeof_array_logic = 2};

const uint16_t logic_4042[] PROGMEM = {46667,46683,51508};
const uint16_t Dont_care_4042[] PROGMEM = {65535,65535,65535};
const uint16_t CLK_4042[] PROGMEM = {0,0,0};
const IC_INFO IC_4042 PROGMEM = {.Name = 4042 ,.Direction = 45304 ,.number_of_pins = 16,.logic = logic_4042,.dont_care = Dont_care_4042 ,.clk = CLK_4042,.sizeof_array_logic = 3};

const uint16_t logic_4043[] PROGMEM = {50260,43835,33555,65407};
const uint16_t Dont_care_4043[] PROGMEM = {65535,65535,65535,65535};
const uint16_t CLK_4043[] PROGMEM = {0,0,0,0};
const IC_INFO IC_4043 PROGMEM = {.Name = 4043 ,.Direction = 64764 ,.number_of_pins = 16,.logic = logic_4043,.dont_care = Dont_care_4043 ,.clk = CLK_4043,.sizeof_array_logic = 4};

const uint16_t logic_4044[] PROGMEM = {47929,65405,50260};
const uint16_t Dont_care_4044[] PROGMEM = {65533,65533,65533};
const uint16_t CLK_4044[] PROGMEM = {0,0,0};
const IC_INFO IC_4044 PROGMEM = {.Name = 4044 ,.Direction = 60668 ,.number_of_pins = 16,.logic = logic_4044,.dont_care = Dont_care_4044 ,.clk = CLK_4044,.sizeof_array_logic = 3};

const uint16_t logic_4048[] PROGMEM = {32771,37910,38167,33026};
const uint16_t Dont_care_4048[] PROGMEM = {65535,65535,65535,65535};
const uint16_t CLK_4048[] PROGMEM = {0,0,0,0};
const IC_INFO IC_4048 PROGMEM = {.Name = 4048 ,.Direction = 65534 ,.number_of_pins = 16,.logic = logic_4048,.dont_care = Dont_care_4048 ,.clk = CLK_4048,.sizeof_array_logic = 4};

const uint16_t logic_4049[] PROGMEM = {46669,43315};
const uint16_t Dont_care_4049[] PROGMEM = {65535,65535};
const uint16_t CLK_4049[] PROGMEM = {0,0};
const IC_INFO IC_4049 PROGMEM = {.Name = 4049 ,.Direction = 46549 ,.number_of_pins = 16,.logic = logic_4049,.dont_care = Dont_care_4049 ,.clk = CLK_4049,.sizeof_array_logic = 2};

const uint16_t logic_4051[] PROGMEM = {59419,56347,47643,63003,63770,64779,64281,65299,36868,41988,49668,40452,33029,34068,33542,34572,59455};
const uint16_t Dont_care_4051[] PROGMEM = {65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535};
const uint16_t CLK_4051[] PROGMEM = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
const IC_INFO IC_4051 PROGMEM = {.Name = 4051 ,.Direction = 65531 ,.number_of_pins = 16,.logic = logic_4051,.dont_care = Dont_care_4051 ,.clk = CLK_4051,.sizeof_array_logic = 17};

const uint16_t logic_4053[] PROGMEM = {34834,59418,59662,59929,62490};
const uint16_t Dont_care_4053[] PROGMEM = {40951,65535,65535,65535,65535};
const uint16_t CLK_4053[] PROGMEM = {0,0,0,0,0};
const IC_INFO IC_4053 PROGMEM = {.Name = 4053 ,.Direction = 40951 ,.number_of_pins = 16,.logic = logic_4053,.dont_care = Dont_care_4053 ,.clk = CLK_4053,.sizeof_array_logic = 5};

const uint16_t logic_4066[] PROGMEM = {8966,10127,14384,16319};
const uint16_t Dont_care_4066[] PROGMEM = {16383,16383,16383,16383};
const uint16_t CLK_4066[] PROGMEM = {0,0,0,0};
const IC_INFO IC_4066 PROGMEM = {.Name = 4066 ,.Direction = 15609 ,.number_of_pins = 14,.logic = logic_4066,.dont_care = Dont_care_4066 ,.clk = CLK_4066,.sizeof_array_logic = 4};

const uint16_t logic_4068[] PROGMEM = {12062,13578,14868,15384,13062,16128,12288,14110,16150,15900};
const uint16_t Dont_care_4068[] PROGMEM = {16383,16383,16383,16383,16383,16383,16383,16383,16383,16383};
const uint16_t CLK_4068[] PROGMEM = {0,0,0,0,0,0,0,0,0,0};
const IC_INFO IC_4068 PROGMEM = {.Name = 4068 ,.Direction = 12287 ,.number_of_pins = 14,.logic = logic_4068,.dont_care = Dont_care_4068 ,.clk = CLK_4068,.sizeof_array_logic = 10};

const uint16_t logic_4069[] PROGMEM = {10922,13589};
const uint16_t Dont_care_4069[] PROGMEM = {16383,16383};
const uint16_t CLK_4069[] PROGMEM = {0,0};
const IC_INFO IC_4069 PROGMEM = {.Name = 4069 ,.Direction = 13653 ,.number_of_pins = 14,.logic = logic_4069,.dont_care = Dont_care_4069 ,.clk = CLK_4069,.sizeof_array_logic = 2};

const uint16_t logic_4070[] PROGMEM = {8192,11933,14126,14771};
const uint16_t Dont_care_4070[] PROGMEM = {16383,16383,16383,16383};
const uint16_t CLK_4070[] PROGMEM = {0,0,0,0};
const IC_INFO IC_4070 PROGMEM = {.Name = 4070 ,.Direction = 14835 ,.number_of_pins = 14,.logic = logic_4070,.dont_care = Dont_care_4070 ,.clk = CLK_4070,.sizeof_array_logic = 4};

const uint16_t logic_4071[] PROGMEM = {9144,11933,14126,15367};
const uint16_t Dont_care_4071[] PROGMEM = {16383,16383,16383,16383};
const uint16_t CLK_4071[] PROGMEM = {0,0,0,0};
const IC_INFO IC_4071 PROGMEM = {.Name = 4071 ,.Direction = 14835 ,.number_of_pins = 14,.logic = logic_4071,.dont_care = Dont_care_4071 ,.clk = CLK_4071,.sizeof_array_logic = 4};

const uint16_t logic_4072[] PROGMEM = {8192,12547,12805,13063,13321,13579,13837,14095,14353,14611,16159};
const uint16_t Dont_care_4072[] PROGMEM = {16383,16383,16383,16383,16383,16383,16383,16383,16383,16383,16383};
const uint16_t CLK_4072[] PROGMEM = {0,0,0,0,0,0,0,0,0,0,0};
const IC_INFO IC_4072 PROGMEM = {.Name = 4072 ,.Direction = 12286 ,.number_of_pins = 14,.logic = logic_4072,.dont_care = Dont_care_4072 ,.clk = CLK_4072,.sizeof_array_logic = 11};

const uint16_t logic_4073[] PROGMEM = {8192,9348,10249,11405,12307,13462,14355,16319};
const uint16_t Dont_care_4073[] PROGMEM = {16383,16383,16383,16383,16383,16383,16383,16383};
const uint16_t CLK_4073[] PROGMEM = {0,0,0,0,0,0,0,0};
const IC_INFO IC_4073 PROGMEM = {.Name = 4073 ,.Direction = 15583 ,.number_of_pins = 14,.logic = logic_4073,.dont_care = Dont_care_4073 ,.clk = CLK_4073,.sizeof_array_logic = 8};

const uint16_t logic_4075[] PROGMEM = {8192,10156,11049,12205,13107,14262,15163,10175};
const uint16_t Dont_care_4075[] PROGMEM = {16383,16383,16383,16383,16383,16383,16383,16383};
const uint16_t CLK_4075[] PROGMEM = {0,0,0,0,0,0,0,0};
const IC_INFO IC_4075 PROGMEM = {.Name = 4075 ,.Direction = 15583 ,.number_of_pins = 14,.logic = logic_4075,.dont_care = Dont_care_4075 ,.clk = CLK_4075,.sizeof_array_logic = 8};

const uint16_t logic_4076[] PROGMEM = {48188,43028,37928};
const uint16_t Dont_care_4076[] PROGMEM = {65535,65535,65535};
const uint16_t CLK_4076[] PROGMEM = {64,64,64};
const IC_INFO IC_4076 PROGMEM = {.Name = 4076 ,.Direction = 65475 ,.number_of_pins = 16,.logic = logic_4076,.dont_care = Dont_care_4076 ,.clk = CLK_4076,.sizeof_array_logic = 3};

const uint16_t logic_4077[] PROGMEM = {9740,10385,12578,16319};
const uint16_t Dont_care_4077[] PROGMEM = {16383,16383,16383,16383};
const uint16_t CLK_4077[] PROGMEM = {0,0,0,0};
const IC_INFO IC_4077 PROGMEM = {.Name = 4077 ,.Direction = 14835 ,.number_of_pins = 14,.logic = logic_4077,.dont_care = Dont_care_4077 ,.clk = CLK_4077,.sizeof_array_logic = 4};

const uint16_t logic_4078[] PROGMEM = {12063,9482,10772,11288,8966,12032,12288,10015,12054,11804};
const uint16_t Dont_care_4078[] PROGMEM = {16383,16383,16383,16383,16383,16383,16383,16383,16383,16383};
const uint16_t CLK_4078[] PROGMEM = {0,0,0,0,0,0,0,0,0,0};
const IC_INFO IC_4078 PROGMEM = {.Name = 4078 ,.Direction = 12287 ,.number_of_pins = 14,.logic = logic_4078,.dont_care = Dont_care_4078 ,.clk = CLK_4078,.sizeof_array_logic = 10};

const uint16_t logic_4081[] PROGMEM = {9144,10385,12578,15367};
const uint16_t Dont_care_4081[] PROGMEM = {16383,16383,16383,16383};
const uint16_t CLK_4081[] PROGMEM = {0,0,0,0};
const IC_INFO IC_4081 PROGMEM = {.Name = 4081 ,.Direction = 14835 ,.number_of_pins = 14,.logic = logic_4081,.dont_care = Dont_care_4081 ,.clk = CLK_4081,.sizeof_array_logic = 4};

const uint16_t logic_4082[] PROGMEM = {8192,8450,8708,8966,9224,9482,9740,9998,11920,10514,16159};
const uint16_t Dont_care_4082[] PROGMEM = {16383,16383,16383,16383,16383,16383,16383,16383,16383,16383,16383};
const uint16_t CLK_4082[] PROGMEM = {0,0,0,0,0,0,0,0,0,0,0};
const IC_INFO IC_4082 PROGMEM = {.Name = 4082 ,.Direction = 12286 ,.number_of_pins = 14,.logic = logic_4082,.dont_care = Dont_care_4082 ,.clk = CLK_4082,.sizeof_array_logic = 11};

const uint16_t logic_4093[] PROGMEM = {9740,11933,14126,14771};
const uint16_t Dont_care_4093[] PROGMEM = {16383,16383,16383,16383};
const uint16_t CLK_4093[] PROGMEM = {0,0,0,0};
const IC_INFO IC_4093 PROGMEM = {.Name = 4093 ,.Direction = 14835 ,.number_of_pins = 14,.logic = logic_4093,.dont_care = Dont_care_4093 ,.clk = CLK_4093,.sizeof_array_logic = 4};

const uint16_t logic_4094[] PROGMEM = {49153,49163,49169,49195,49233,57387,53329,59435,54353,59435,54609,54354,59435,48249};
const uint16_t Dont_care_4094[] PROGMEM = {49285,49295,49311,49343,49407,57599,61695,63743,64767,65023,65023,65023,65023,65023};
const uint16_t CLK_4094[] PROGMEM = {0,4,4,4,4,4,4,4,4,4,4,4,0,0};
const IC_INFO IC_4094 PROGMEM = {.Name = 4094 ,.Direction = 49285 ,.number_of_pins = 16,.logic = logic_4094,.dont_care = Dont_care_4094 ,.clk = CLK_4094,.sizeof_array_logic = 14};

const uint16_t logic_4098[] PROGMEM = {41282,46422,48158,48158,48702,40284,46422,48478,47662,39244,48478};
const uint16_t Dont_care_4098[] PROGMEM = {65535,65535,64671,64671,65535,65535,65535,65535,65535,65535,65535};
const uint16_t CLK_4098[] PROGMEM = {0,0,0,0,0,0,0,0,0,0,0};
const IC_INFO IC_4098 PROGMEM = {.Name = 4098 ,.Direction = 64671 ,.number_of_pins = 16,.logic = logic_4098,.dont_care = Dont_care_4098 ,.clk = CLK_4098,.sizeof_array_logic = 11};

const uint16_t logic_4503[] PROGMEM = {45917,36215,57112,62566};
const uint16_t Dont_care_4503[] PROGMEM = {65535,65535,65535,65535};
const uint16_t CLK_4503[] PROGMEM = {0,0,0,0};
const IC_INFO IC_4503 PROGMEM = {.Name = 4503 ,.Direction = 60075 ,.number_of_pins = 16,.logic = logic_4503,.dont_care = Dont_care_4503 ,.clk = CLK_4503,.sizeof_array_logic = 4};

const uint16_t logic_4510[] PROGMEM = {45673,42560,42592,42048,41056};
const uint16_t Dont_care_4510[] PROGMEM = {65535,65535,65535,65535,65535};
const uint16_t CLK_4510[] PROGMEM = {16384,16384,16384,16384,16384};
const IC_INFO IC_4510 PROGMEM = {.Name = 4510 ,.Direction = 56221 ,.number_of_pins = 16,.logic = logic_4510,.dont_care = Dont_care_4510 ,.clk = CLK_4510,.sizeof_array_logic = 5};

const uint16_t logic_4511[] PROGMEM = {65288,35916,63054,57100,32772};
const uint16_t Dont_care_4511[] PROGMEM = {65535,65535,65535,65535,65535};
const uint16_t CLK_4511[] PROGMEM = {0,0,0,0,0};
const IC_INFO IC_4511 PROGMEM = {.Name = 4511 ,.Direction = 33023 ,.number_of_pins = 16,.logic = logic_4511,.dont_care = Dont_care_4511 ,.clk = CLK_4511,.sizeof_array_logic = 5};

const uint16_t logic_4512[] PROGMEM = {33150,40961,34173,41986,35195,43012,36215,44040,37231,45072,38239,58400,39231,47168,40063,48384,40704,64639};
const uint16_t Dont_care_4512[] PROGMEM = {65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535};
const uint16_t CLK_4512[] PROGMEM = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
const IC_INFO IC_4512 PROGMEM = {.Name = 4512 ,.Direction = 57343 ,.number_of_pins = 16,.logic = logic_4512,.dont_care = Dont_care_4512 ,.clk = CLK_4512,.sizeof_array_logic = 18};

const uint16_t logic_4518[] PROGMEM = {49730,32768,49730,32768,34310,34824,33282};
const uint16_t Dont_care_4518[] PROGMEM = {50115,50115,65535,65535,65535,65535,50115};
const uint16_t CLK_4518[] PROGMEM = {257,257,257,257,257,257,257};
const IC_INFO IC_4518 PROGMEM = {.Name = 4518 ,.Direction = 50115 ,.number_of_pins = 16,.logic = logic_4518,.dont_care = Dont_care_4518 ,.clk = CLK_4518,.sizeof_array_logic = 7};

const uint16_t logic_4519[] PROGMEM = {49278,59980,46874,61749,43337,44903};
const uint16_t Dont_care_4519[] PROGMEM = {65535,65535,65535,65535,65535,65535};
const uint16_t CLK_4519[] PROGMEM = {0,0,0,0,0,0};
const IC_INFO IC_4519 PROGMEM = {.Name = 4519 ,.Direction = 57855 ,.number_of_pins = 16,.logic = logic_4519,.dont_care = Dont_care_4519 ,.clk = CLK_4519,.sizeof_array_logic = 6};

const uint16_t logic_4520[] PROGMEM = {49730,34310,35338,36366,37394,38422,39450,40478,41506,42534,43562};
const uint16_t Dont_care_4520[] PROGMEM = {50115,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535};
const uint16_t CLK_4520[] PROGMEM = {257,257,257,257,257,257,257,257,257,257,257};
const IC_INFO IC_4520 PROGMEM = {.Name = 4520 ,.Direction = 50115 ,.number_of_pins = 16,.logic = logic_4520,.dont_care = Dont_care_4520 ,.clk = CLK_4520,.sizeof_array_logic = 11};

const uint16_t logic_4529[] PROGMEM = {60171,59435,38773,54356};
const uint16_t Dont_care_4529[] PROGMEM = {65535,65535,65535,65535};
const uint16_t CLK_4529[] PROGMEM = {0,0,0,0};
const IC_INFO IC_4529 PROGMEM = {.Name = 4529 ,.Direction = 64767 ,.number_of_pins = 16,.logic = logic_4529,.dont_care = Dont_care_4529 ,.clk = CLK_4529,.sizeof_array_logic = 4};

const uint16_t logic_4532[] PROGMEM = {32768,49168,41336,41076,41266,41009,45392,43088,42256,41488};
const uint16_t Dont_care_4532[] PROGMEM = {65535,65535,65535,65535,65535,65535,65535,65535,65535,65535};
const uint16_t CLK_4532[] PROGMEM = {0,0,0,0,0,0,0,0,0,0};
const IC_INFO IC_4532 PROGMEM = {.Name = 4532 ,.Direction = 40607 ,.number_of_pins = 16,.logic = logic_4532,.dont_care = Dont_care_4532 ,.clk = CLK_4532,.sizeof_array_logic = 10};

const uint16_t logic_4543[] PROGMEM = {65289,34321,64775,32781};
const uint16_t Dont_care_4543[] PROGMEM = {65535,65535,65535,65535};
const uint16_t CLK_4543[] PROGMEM = {0,0,0,0};
const IC_INFO IC_4543 PROGMEM = {.Name = 4543 ,.Direction = 33023 ,.number_of_pins = 16,.logic = logic_4543,.dont_care = Dont_care_4543 ,.clk = CLK_4543,.sizeof_array_logic = 4};

const uint16_t logic_4572[] PROGMEM = {38165,46373,55882,60010};
const uint16_t Dont_care_4572[] PROGMEM = {65535,65535,65535,65535};
const uint16_t CLK_4572[] PROGMEM = {0,0,0,0};
const IC_INFO IC_4572 PROGMEM = {.Name = 4572 ,.Direction = 60138 ,.number_of_pins = 16,.logic = logic_4572,.dont_care = Dont_care_4572 ,.clk = CLK_4572,.sizeof_array_logic = 4};

const uint16_t logic_7400[] PROGMEM = {9380,11693,14006,15131};
const uint16_t Dont_care_7400[] PROGMEM = {16383,16383,16383,16383};
const uint16_t CLK_7400[] PROGMEM = {0,0,0,0};
const IC_INFO IC_7400 PROGMEM = {.Name = 7400 ,.Direction = 15195 ,.number_of_pins = 14,.logic = logic_7400,.dont_care = Dont_care_7400 ,.clk = CLK_7400,.sizeof_array_logic = 4};

const uint16_t logic_7401[] PROGMEM = {12809,13979,15149,11702};
const uint16_t Dont_care_7401[] PROGMEM = {16383,16383,16383,16383};
const uint16_t CLK_7401[] PROGMEM = {0,0,0,0};
const IC_INFO IC_7401 PROGMEM = {.Name = 7401 ,.Direction = 11766 ,.number_of_pins = 14,.logic = logic_7401,.dont_care = Dont_care_7401 ,.clk = CLK_7401,.sizeof_array_logic = 4};

const uint16_t logic_7402[] PROGMEM = {12809,9362,10532,11702};
const uint16_t Dont_care_7402[] PROGMEM = {16383,16383,16383,16383};
const uint16_t CLK_7402[] PROGMEM = {0,0,0,0};
const IC_INFO IC_7402 PROGMEM = {.Name = 7402 ,.Direction = 11766 ,.number_of_pins = 14,.logic = logic_7402,.dont_care = Dont_care_7402 ,.clk = CLK_7402,.sizeof_array_logic = 4};

const uint16_t logic_7403[] PROGMEM = {9380,11693,14006,15131};
const uint16_t Dont_care_7403[] PROGMEM = {16383,16383,16383,16383};
const uint16_t CLK_7403[] PROGMEM = {0,0,0,0};
const IC_INFO IC_7403 PROGMEM = {.Name = 7403 ,.Direction = 15195 ,.number_of_pins = 14,.logic = logic_7403,.dont_care = Dont_care_7403 ,.clk = CLK_7403,.sizeof_array_logic = 4};

const uint16_t logic_7404[] PROGMEM = {10922,13589};
const uint16_t Dont_care_7404[] PROGMEM = {16383,16383};
const uint16_t CLK_7404[] PROGMEM = {0,0};
const IC_INFO IC_7404 PROGMEM = {.Name = 7404 ,.Direction = 13653 ,.number_of_pins = 14,.logic = logic_7404,.dont_care = Dont_care_7404 ,.clk = CLK_7404,.sizeof_array_logic = 2};

const uint16_t logic_7405[] PROGMEM = {10922,13589};
const uint16_t Dont_care_7405[] PROGMEM = {16383,16383};
const uint16_t CLK_7405[] PROGMEM = {0,0};
const IC_INFO IC_7405 PROGMEM = {.Name = 7405 ,.Direction = 13653 ,.number_of_pins = 14,.logic = logic_7405,.dont_care = Dont_care_7405 ,.clk = CLK_7405,.sizeof_array_logic = 2};

const uint16_t logic_7406[] PROGMEM = {10922,13589};
const uint16_t Dont_care_7406[] PROGMEM = {16383,16383};
const uint16_t CLK_7406[] PROGMEM = {0,0};
const IC_INFO IC_7406 PROGMEM = {.Name = 7406 ,.Direction = 13653 ,.number_of_pins = 14,.logic = logic_7406,.dont_care = Dont_care_7406 ,.clk = CLK_7406,.sizeof_array_logic = 2};

const uint16_t logic_7407[] PROGMEM = {16319,8192};
const uint16_t Dont_care_7407[] PROGMEM = {16383,16383};
const uint16_t CLK_7407[] PROGMEM = {0,0};
const IC_INFO IC_7407 PROGMEM = {.Name = 7407 ,.Direction = 13653 ,.number_of_pins = 14,.logic = logic_7407,.dont_care = Dont_care_7407 ,.clk = CLK_7407,.sizeof_array_logic = 2};

const uint16_t logic_7408[] PROGMEM = {8192,12818,10505,16319};
const uint16_t Dont_care_7408[] PROGMEM = {16383,16383,16383,16383};
const uint16_t CLK_7408[] PROGMEM = {0,0,0,0};
const IC_INFO IC_7408 PROGMEM = {.Name = 7408 ,.Direction = 15195 ,.number_of_pins = 14,.logic = logic_7408,.dont_care = Dont_care_7408 ,.clk = CLK_7408,.sizeof_array_logic = 4};

const uint16_t logic_7409[] PROGMEM = {16319,10505,12818,8192};
const uint16_t Dont_care_7409[] PROGMEM = {16383,16383,16383,16383};
const uint16_t CLK_7409[] PROGMEM = {0,0,0,0};
const IC_INFO IC_7409 PROGMEM = {.Name = 7409 ,.Direction = 15195 ,.number_of_pins = 14,.logic = logic_7409,.dont_care = Dont_care_7409 ,.clk = CLK_7409,.sizeof_array_logic = 4};

const uint16_t logic_7410[] PROGMEM = {10400,14756,10921,15277,11442,15798,11963,14111};
const uint16_t Dont_care_7410[] PROGMEM = {16383,16383,16383,16383,16383,16383,16383,16383};
const uint16_t CLK_7410[] PROGMEM = {0,0,0,0,0,0,0,0};
const IC_INFO IC_7410 PROGMEM = {.Name = 7410 ,.Direction = 14175 ,.number_of_pins = 14,.logic = logic_7410,.dont_care = Dont_care_7410 ,.clk = CLK_7410,.sizeof_array_logic = 8};

const uint16_t logic_74107[] PROGMEM = {8226,9387,12834,12949,13866,13981};
const uint16_t Dont_care_74107[] PROGMEM = {16383,16383,16383,16383,16383,16383};
const uint16_t CLK_74107[] PROGMEM = {2304,2304,2304,2304,2304,2304};
const IC_INFO IC_74107 PROGMEM = {.Name = 74107 ,.Direction = 16329 ,.number_of_pins = 14,.logic = logic_74107,.dont_care = Dont_care_74107 ,.clk = CLK_74107,.sizeof_array_logic = 6};

const uint16_t logic_74109[] PROGMEM = {34128,46422,49697,63015,50513,58931,54837,63031};
const uint16_t Dont_care_74109[] PROGMEM = {65535,65535,65535,65535,65535,65535,65535,65535};
const uint16_t CLK_74109[] PROGMEM = {2056,2056,2056,2056,2056,2056,2056,2056};
const IC_INFO IC_74109 PROGMEM = {.Name = 74109 ,.Direction = 64671 ,.number_of_pins = 16,.logic = logic_74109,.dont_care = Dont_care_74109 ,.clk = CLK_74109,.sizeof_array_logic = 8};

const uint16_t logic_7411[] PROGMEM = {8192,13328,8714,8453,8975,13850,13589,16319};
const uint16_t Dont_care_7411[] PROGMEM = {16383,16383,16383,16383,16383,16383,16383,16383};
const uint16_t CLK_7411[] PROGMEM = {0,0,0,0,0,0,0,0};
const IC_INFO IC_7411 PROGMEM = {.Name = 7411 ,.Direction = 14175 ,.number_of_pins = 14,.logic = logic_7411,.dont_care = Dont_care_7411 ,.clk = CLK_7411,.sizeof_array_logic = 8};

const uint16_t logic_74112[] PROGMEM = {57616,60694,33384,33390,57960,59164,60010,61214};
const uint16_t Dont_care_74112[] PROGMEM = {65535,65535,65535,65535,65535,65535,65535,65535};
const uint16_t CLK_74112[] PROGMEM = {4097,4097,4097,4097,4097,4097,4097,4097};
const IC_INFO IC_74112 PROGMEM = {.Name = 74112 ,.Direction = 65167 ,.number_of_pins = 16,.logic = logic_74112,.dont_care = Dont_care_74112 ,.clk = CLK_74112,.sizeof_array_logic = 8};

const uint16_t logic_74113[] PROGMEM = {8464,11542,8984,8476,10922,12062};
const uint16_t Dont_care_74113[] PROGMEM = {16383,16383,16383,16383,16383,16383};
const uint16_t CLK_74113[] PROGMEM = {4097,4097,4097,4097,4097,4097};
const IC_INFO IC_74113 PROGMEM = {.Name = 74113 ,.Direction = 15951 ,.number_of_pins = 14,.logic = logic_74113,.dont_care = Dont_care_74113 ,.clk = CLK_74113,.sizeof_array_logic = 6};

const uint16_t logic_7412[] PROGMEM = {10400,14756,10921,15277,11442,15798,11963,14111};
const uint16_t Dont_care_7412[] PROGMEM = {16383,16383,16383,16383,16383,16383,16383,16383};
const uint16_t CLK_7412[] PROGMEM = {0,0,0,0,0,0,0,0};
const IC_INFO IC_7412 PROGMEM = {.Name = 7412 ,.Direction = 14175 ,.number_of_pins = 14,.logic = logic_7412,.dont_care = Dont_care_7412 ,.clk = CLK_7412,.sizeof_array_logic = 8};

const uint16_t logic_74123[] PROGMEM = {51272,52043,51786,53071,51272,52557};
const uint16_t Dont_care_74123[] PROGMEM = {65535,65535,65535,65535,65535,65535};
const uint16_t CLK_74123[] PROGMEM = {0,0,0,0,0,0};
const IC_INFO IC_74123 PROGMEM = {.Name = 74123 ,.Direction = 34695 ,.number_of_pins = 16,.logic = logic_74123,.dont_care = Dont_care_74123 ,.clk = CLK_74123,.sizeof_array_logic = 6};

const uint16_t logic_74125[] PROGMEM = {11702,8192,13997,16319,16061,14255,16047,14269};
const uint16_t Dont_care_74125[] PROGMEM = {16383,16383,16383,16383,16383,16383,16383,16383};
const uint16_t CLK_74125[] PROGMEM = {0,0,0,0,0,0,0,0};
const IC_INFO IC_74125 PROGMEM = {.Name = 74125 ,.Direction = 15195 ,.number_of_pins = 14,.logic = logic_74125,.dont_care = Dont_care_74125 ,.clk = CLK_74125,.sizeof_array_logic = 8};

const uint16_t logic_74126[] PROGMEM = {16319,12809,9380,11702};
const uint16_t Dont_care_74126[] PROGMEM = {16383,16383,16383,16383};
const uint16_t CLK_74126[] PROGMEM = {0,0,0,0};
const IC_INFO IC_74126 PROGMEM = {.Name = 74126 ,.Direction = 15195 ,.number_of_pins = 14,.logic = logic_74126,.dont_care = Dont_care_74126 ,.clk = CLK_74126,.sizeof_array_logic = 4};

const uint16_t logic_7413[] PROGMEM = {8352,8609,8866,9123,10408,10665,10922,11179,16159};
const uint16_t Dont_care_7413[] PROGMEM = {16383,16383,16383,16383,16383,16383,16383,16383,16383};
const uint16_t CLK_7413[] PROGMEM = {0,0,0,0,0,0,0,0,0};
const IC_INFO IC_7413 PROGMEM = {.Name = 7413 ,.Direction = 16223 ,.number_of_pins = 14,.logic = logic_7413,.dont_care = Dont_care_7413 ,.clk = CLK_7413,.sizeof_array_logic = 9};

const uint16_t logic_74132[] PROGMEM = {9380,11693,14006,15131};
const uint16_t Dont_care_74132[] PROGMEM = {16383,16383,16383,16383};
const uint16_t CLK_74132[] PROGMEM = {0,0,0,0};
const IC_INFO IC_74132 PROGMEM = {.Name = 74132 ,.Direction = 15195 ,.number_of_pins = 14,.logic = logic_74132,.dont_care = Dont_care_74132 ,.clk = CLK_74132,.sizeof_array_logic = 4};

const uint16_t logic_74133[] PROGMEM = {33024,33025,33027,36608,33039,33055,65280,33151,33663,34687,36735,40831,49023,65151};
const uint16_t Dont_care_74133[] PROGMEM = {65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535};
const uint16_t CLK_74133[] PROGMEM = {0,0,0,0,0,0,0,0,0,0,0,0,0,0};
const IC_INFO IC_74133 PROGMEM = {.Name = 74133 ,.Direction = 65279 ,.number_of_pins = 16,.logic = logic_74133,.dont_care = Dont_care_74133 ,.clk = CLK_74133,.sizeof_array_logic = 14};

const uint16_t logic_74136[] PROGMEM = {8192,11693,14006,15131};
const uint16_t Dont_care_74136[] PROGMEM = {16383,16383,16383,16383};
const uint16_t CLK_74136[] PROGMEM = {0,0,0,0};
const IC_INFO IC_74136 PROGMEM = {.Name = 74136 ,.Direction = 15195 ,.number_of_pins = 14,.logic = logic_74136,.dont_care = Dont_care_74136 ,.clk = CLK_74136,.sizeof_array_logic = 4};

const uint16_t logic_74137[] PROGMEM = {65407,65360,65375,65344,48992,57185,61282,63331,64356,64869,65126,65319};
const uint16_t Dont_care_74137[] PROGMEM = {65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535};
const uint16_t CLK_74137[] PROGMEM = {0,0,0,0,0,0,0,0,0,0,0,0};
const IC_INFO IC_74137 PROGMEM = {.Name = 74137 ,.Direction = 32959 ,.number_of_pins = 16,.logic = logic_74137,.dont_care = Dont_care_74137 ,.clk = CLK_74137,.sizeof_array_logic = 12};

const uint16_t logic_74138[] PROGMEM = {65407,65368,65375,65344,48992,57185,61282,63331,64356,64869,65126,65319};
const uint16_t Dont_care_74138[] PROGMEM = {65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535};
const uint16_t CLK_74138[] PROGMEM = {0,0,0,0,0,0,0,0,0,0,0,0};
const IC_INFO IC_74138 PROGMEM = {.Name = 74138 ,.Direction = 32959 ,.number_of_pins = 16,.logic = logic_74138,.dont_care = Dont_care_74138 ,.clk = CLK_74138,.sizeof_array_logic = 12};

const uint16_t logic_74139[] PROGMEM = {61309,57211,34672,43882,40284,48702};
const uint16_t Dont_care_74139[] PROGMEM = {65535,65535,65535,65535,65535,65535};
const uint16_t CLK_74139[] PROGMEM = {0,0,0,0,0,0};
const IC_INFO IC_74139 PROGMEM = {.Name = 74139 ,.Direction = 61575 ,.number_of_pins = 16,.logic = logic_74139,.dont_care = Dont_care_74139 ,.clk = CLK_74139,.sizeof_array_logic = 6};

const uint16_t logic_7414[] PROGMEM = {10922,13589};
const uint16_t Dont_care_7414[] PROGMEM = {16383,16383};
const uint16_t CLK_7414[] PROGMEM = {0,0};
const IC_INFO IC_7414 PROGMEM = {.Name = 7414 ,.Direction = 13653 ,.number_of_pins = 14,.logic = logic_7414,.dont_care = Dont_care_7414 ,.clk = CLK_7414,.sizeof_array_logic = 2};

const uint16_t logic_74140[] PROGMEM = {8352,8609,8866,9123,10408,10665,10922,11179,16159};
const uint16_t Dont_care_74140[] PROGMEM = {16383,16383,16383,16383,16383,16383,16383,16383,16383};
const uint16_t CLK_74140[] PROGMEM = {0,0,0,0,0,0,0,0,0};
const IC_INFO IC_74140 PROGMEM = {.Name = 74140 ,.Direction = 16223 ,.number_of_pins = 14,.logic = logic_74140,.dont_care = Dont_care_74140 ,.clk = CLK_74140,.sizeof_array_logic = 9};

const uint16_t logic_74145[] PROGMEM = {34686,51069,42875,59255,38767,55135,46911,63103,36223,52095,44927,61311,40831,57215,49023,65407};
const uint16_t Dont_care_74145[] PROGMEM = {65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535};
const uint16_t CLK_74145[] PROGMEM = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
const IC_INFO IC_74145 PROGMEM = {.Name = 74145 ,.Direction = 63616 ,.number_of_pins = 16,.logic = logic_74145,.dont_care = Dont_care_74145 ,.clk = CLK_74145,.sizeof_array_logic = 16};

const uint16_t logic_74147[] PROGMEM = {49023,40063,40815,48663,48923,48733,48990,44607,46911,47743};
const uint16_t Dont_care_74147[] PROGMEM = {65535,65535,65535,65535,65535,65535,65535,65535,65535,65535};
const uint16_t CLK_74147[] PROGMEM = {0,0,0,0,0,0,0,0,0,0};
const IC_INFO IC_74147 PROGMEM = {.Name = 74147 ,.Direction = 56991 ,.number_of_pins = 16,.logic = logic_74147,.dont_care = Dont_care_74147 ,.clk = CLK_74147,.sizeof_array_logic = 10};

const uint16_t logic_74148[] PROGMEM = {62842,49007,54277,51978,54349,52046,51759,54575,55919,56687};
const uint16_t Dont_care_74148[] PROGMEM = {65535,65535,65535,65535,65535,65535,65535,65535,65535,65535};
const uint16_t CLK_74148[] PROGMEM = {0,0,0,0,0,0,0,0,0,0};
const IC_INFO IC_74148 PROGMEM = {.Name = 74148 ,.Direction = 40607 ,.number_of_pins = 16,.logic = logic_74148,.dont_care = Dont_care_74148 ,.clk = CLK_74148,.sizeof_array_logic = 10};

const uint16_t logic_7415[] PROGMEM = {8192,12548,8713,13069,9234,13590,9755,16319};
const uint16_t Dont_care_7415[] PROGMEM = {16383,16383,16383,16383,16383,16383,16383,16383};
const uint16_t CLK_7415[] PROGMEM = {0,0,0,0,0,0,0,0};
const IC_INFO IC_7415 PROGMEM = {.Name = 7415 ,.Direction = 14175 ,.number_of_pins = 14,.logic = logic_7415,.dont_care = Dont_care_7415 ,.clk = CLK_7415,.sizeof_array_logic = 8};

const uint16_t logic_74151[] PROGMEM = {54634,43621,63527,32792,64555,33812,64045,33298,65070,34321,47407,49424,56623,42256,60207,37648,63279,36624};
const uint16_t Dont_care_74151[] PROGMEM = {65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535};
const uint16_t CLK_74151[] PROGMEM = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
const IC_INFO IC_74151 PROGMEM = {.Name = 74151 ,.Direction = 65487 ,.number_of_pins = 16,.logic = logic_74151,.dont_care = Dont_care_74151 ,.clk = CLK_74151,.sizeof_array_logic = 18};

const uint16_t logic_74153[] PROGMEM = {59945,54295,51732,54376,59944,62550,51734,54378,59946,62550,37929,35605,43561,46357,37419,36119,43563,46359};
const uint16_t Dont_care_74153[] PROGMEM = {65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535};
const uint16_t CLK_74153[] PROGMEM = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
const IC_INFO IC_74153 PROGMEM = {.Name = 74153 ,.Direction = 65215 ,.number_of_pins = 16,.logic = logic_74153,.dont_care = Dont_care_74153 ,.clk = CLK_74153,.sizeof_array_logic = 18};

const uint16_t logic_74157[] PROGMEM = {49023,53797,32768,37412,44378,49022,32769,42003,39789,58386};
const uint16_t Dont_care_74157[] PROGMEM = {65535,65535,65535,65535,65535,65535,65535,65535,65535,65535};
const uint16_t CLK_74157[] PROGMEM = {0,0,0,0,0,0,0,0,0,0};
const IC_INFO IC_74157 PROGMEM = {.Name = 74157 ,.Direction = 63159 ,.number_of_pins = 16,.logic = logic_74157,.dont_care = Dont_care_74157 ,.clk = CLK_74157,.sizeof_array_logic = 10};

const uint16_t logic_74158[] PROGMEM = {56154,60781,35144,39788,42002,46646,35145,44379,37413,46647};
const uint16_t Dont_care_74158[] PROGMEM = {65535,65535,65535,65535,65535,65535,65535,65535,65535,65535};
const uint16_t CLK_74158[] PROGMEM = {0,0,0,0,0,0,0,0,0,0};
const IC_INFO IC_74158 PROGMEM = {.Name = 74158 ,.Direction = 63159 ,.number_of_pins = 16,.logic = logic_74158,.dont_care = Dont_care_74158 ,.clk = CLK_74158,.sizeof_array_logic = 10};

const uint16_t logic_7416[] PROGMEM = {10922,13589};
const uint16_t Dont_care_7416[] PROGMEM = {16383,16383};
const uint16_t CLK_7416[] PROGMEM = {0,0};
const IC_INFO IC_7416 PROGMEM = {.Name = 7416 ,.Direction = 13653 ,.number_of_pins = 14,.logic = logic_7416,.dont_care = Dont_care_7416 ,.clk = CLK_7416,.sizeof_array_logic = 2};

const uint16_t logic_74160[] PROGMEM = {32768,33600,47709,34625,59229,33601,41793,37697,45889,35649,43841,39747,39745,33600};
const uint16_t Dont_care_74160[] PROGMEM = {65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535};
const uint16_t CLK_74160[] PROGMEM = {2,2,2,2,2,2,2,2,2,2,2,0,0,0};
const IC_INFO IC_74160 PROGMEM = {.Name = 74160 ,.Direction = 33791 ,.number_of_pins = 16,.logic = logic_74160,.dont_care = Dont_care_74160 ,.clk = CLK_74160,.sizeof_array_logic = 14};

const uint16_t logic_74161[] PROGMEM = {32770,33602,33089,33537,33025,32769,36465,44865,40769,65345,33601,41793,37699,37697,33600,33601};
const uint16_t Dont_care_74161[] PROGMEM = {65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,33791};
const uint16_t CLK_74161[] PROGMEM = {0,0,2,2,2,2,2,2,2,2,2,2,0,0,0,2};
const IC_INFO IC_74161 PROGMEM = {.Name = 74161 ,.Direction = 33791 ,.number_of_pins = 16,.logic = logic_74161,.dont_care = Dont_care_74161 ,.clk = CLK_74161,.sizeof_array_logic = 16};

const uint16_t logic_74162[] PROGMEM = {32770,32768,32768,33540,33089,33537,33536,47133,34673,59201,33601,41793,37697,45891,45890,45888,33602,33601};
const uint16_t Dont_care_74162[] PROGMEM = {33791,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,33791};
const uint16_t CLK_74162[] PROGMEM = {0,2,2,2,2,2,2,2,2,2,2,2,2,0,0,0,0,2};
const IC_INFO IC_74162 PROGMEM = {.Name = 74162 ,.Direction = 33791 ,.number_of_pins = 16,.logic = logic_74162,.dont_care = Dont_care_74162 ,.clk = CLK_74162,.sizeof_array_logic = 18};

const uint16_t logic_74163[] PROGMEM = {32770,32769,32768,33540,36465,44865,40769,65345,33601,41793,37697,45889,35649,43843,43842,43840,33602};
const uint16_t Dont_care_74163[] PROGMEM = {33791,33791,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535};
const uint16_t CLK_74163[] PROGMEM = {0,0,2,2,2,2,2,2,2,2,2,2,2,0,0,0,0};
const IC_INFO IC_74163 PROGMEM = {.Name = 74163 ,.Direction = 33791 ,.number_of_pins = 16,.logic = logic_74163,.dont_care = Dont_care_74163 ,.clk = CLK_74163,.sizeof_array_logic = 17};

const uint16_t logic_74164[] PROGMEM = {8192,8195,8448,8455,8463,8472,8498,8993};
const uint16_t Dont_care_74164[] PROGMEM = {16383,16383,16383,16383,16383,16383,16383,16383};
const uint16_t CLK_74164[] PROGMEM = {128,128,128,128,128,128,128,128};
const IC_INFO IC_74164 PROGMEM = {.Name = 74164 ,.Direction = 8643 ,.number_of_pins = 14,.logic = logic_74164,.dont_care = Dont_care_74164 ,.clk = CLK_74164,.sizeof_array_logic = 8};

const uint16_t logic_74165[] PROGMEM = {32832,32840,32841,33361,33569,33345};
const uint16_t Dont_care_74165[] PROGMEM = {65535,65535,65535,65535,65535,65535};
const uint16_t CLK_74165[] PROGMEM = {2,2,2,2,2,2};
const IC_INFO IC_74165 PROGMEM = {.Name = 74165 ,.Direction = 65215 ,.number_of_pins = 16,.logic = logic_74165,.dont_care = Dont_care_74165 ,.clk = CLK_74165,.sizeof_array_logic = 6};

const uint16_t logic_74166[] PROGMEM = {32768,60959,33024,61215,33024,48927,53505,65311,53504,65310,53537,48958};
const uint16_t Dont_care_74166[] PROGMEM = {65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535};
const uint16_t CLK_74166[] PROGMEM = {64,64,64,64,64,64,64,64,64,64,64,64};
const IC_INFO IC_74166 PROGMEM = {.Name = 74166 ,.Direction = 61439 ,.number_of_pins = 16,.logic = logic_74166,.dont_care = Dont_care_74166 ,.clk = CLK_74166,.sizeof_array_logic = 12};

const uint16_t logic_7417[] PROGMEM = {16319,8192};
const uint16_t Dont_care_7417[] PROGMEM = {16383,16383};
const uint16_t CLK_7417[] PROGMEM = {0,0};
const IC_INFO IC_7417 PROGMEM = {.Name = 7417 ,.Direction = 13653 ,.number_of_pins = 14,.logic = logic_7417,.dont_care = Dont_care_7417 ,.clk = CLK_7417,.sizeof_array_logic = 2};

const uint16_t logic_74173[] PROGMEM = {49152,65280,37928,43304,43560,43816,43028,38164,38420,38676,37928,35888,65280,45068,65280};
const uint16_t Dont_care_74173[] PROGMEM = {65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535};
const uint16_t CLK_74173[] PROGMEM = {64,64,64,64,64,64,64,64,64,64,64,64,64,64,64};
const IC_INFO IC_74173 PROGMEM = {.Name = 74173 ,.Direction = 65475 ,.number_of_pins = 16,.logic = logic_74173,.dont_care = Dont_care_74173 ,.clk = CLK_74173,.sizeof_array_logic = 15};

const uint16_t logic_74174[] PROGMEM = {32768,46124,39015,58905,65151,46124};
const uint16_t Dont_care_74174[] PROGMEM = {65535,65535,65535,65535,65535,65535};
const uint16_t CLK_74174[] PROGMEM = {256,256,256,256,256,256};
const IC_INFO IC_74174 PROGMEM = {.Name = 74174 ,.Direction = 46509 ,.number_of_pins = 16,.logic = logic_74174,.dont_care = Dont_care_74174 ,.clk = CLK_74174,.sizeof_array_logic = 6};

const uint16_t logic_74175[] PROGMEM = {42020,48188,55899,42021};
const uint16_t Dont_care_74175[] PROGMEM = {65535,65535,65535,65535};
const uint16_t CLK_74175[] PROGMEM = {256,256,256,256};
const IC_INFO IC_74175 PROGMEM = {.Name = 74175 ,.Direction = 39321 ,.number_of_pins = 16,.logic = logic_74175,.dont_care = Dont_care_74175 ,.clk = CLK_74175,.sizeof_array_logic = 4};

const uint16_t logic_7418[] PROGMEM = {8352,8609,8866,9123,10408,10665,10922,11179,16159};
const uint16_t Dont_care_7418[] PROGMEM = {16383,16383,16383,16383,16383,16383,16383,16383,16383};
const uint16_t CLK_7418[] PROGMEM = {0,0,0,0,0,0,0,0,0};
const IC_INFO IC_7418 PROGMEM = {.Name = 7418 ,.Direction = 16223 ,.number_of_pins = 14,.logic = logic_7418,.dont_care = Dont_care_7418 ,.clk = CLK_7418,.sizeof_array_logic = 9};

const uint16_t logic_74182[] PROGMEM = {39795,41493};
const uint16_t Dont_care_74182[] PROGMEM = {65535,65535};
const uint16_t CLK_74182[] PROGMEM = {0,0};
const IC_INFO IC_74182 PROGMEM = {.Name = 74182 ,.Direction = 61631 ,.number_of_pins = 16,.logic = logic_74182,.dont_care = Dont_care_74182 ,.clk = CLK_74182,.sizeof_array_logic = 2};

const uint16_t logic_74190[] PROGMEM = {36864,37896,37892,37890,37894,37920,37910,37906,37908};
const uint16_t Dont_care_74190[] PROGMEM = {65535,65535,65535,65535,65535,65535,65535,65535,65535};
const uint16_t CLK_74190[] PROGMEM = {8192,8192,8192,8192,8192,8192,8192,8192,8192};
const IC_INFO IC_74190 PROGMEM = {.Name = 74190 ,.Direction = 59289 ,.number_of_pins = 16,.logic = logic_74190,.dont_care = Dont_care_74190 ,.clk = CLK_74190,.sizeof_array_logic = 9};

const uint16_t logic_74191[] PROGMEM = {36864,37896,37892,37890,37894,37920,37910,37906,37908};
const uint16_t Dont_care_74191[] PROGMEM = {65535,65535,65535,65535,65535,65535,65535,65535,65535};
const uint16_t CLK_74191[] PROGMEM = {8192,8192,8192,8192,8192,8192,8192,8192,8192};
const IC_INFO IC_74191 PROGMEM = {.Name = 74191 ,.Direction = 59289 ,.number_of_pins = 16,.logic = logic_74191,.dont_care = Dont_care_74191 ,.clk = CLK_74191,.sizeof_array_logic = 9};

const uint16_t logic_74192[] PROGMEM = {48408,40216,39256,40280,40264,40284,38220};
const uint16_t Dont_care_74192[] PROGMEM = {65535,65535,65535,65535,65535,65535,65535};
const uint16_t CLK_74192[] PROGMEM = {0,0,0,0,0,0,0};
const IC_INFO IC_74192 PROGMEM = {.Name = 74192 ,.Direction = 65433 ,.number_of_pins = 16,.logic = logic_74192,.dont_care = Dont_care_74192 ,.clk = CLK_74192,.sizeof_array_logic = 7};

const uint16_t logic_74193[] PROGMEM = {39259,55868,56191,57203,57205,57201,57175,57171,57173,57169,57143,57139,57141,57137,57111,57107,57109,57113,53009,57215,55151,57113,57101,57099,57103,57129,57133,57131,57135,57161,57113};
const uint16_t Dont_care_74193[] PROGMEM = {65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535};
const uint16_t CLK_74193[] PROGMEM = {0,0,0,8,8,8,8,8,8,8,8,8,8,8,8,8,8,0,0,0,0,0,16,16,16,16,16,16,16,16,8192};
const IC_INFO IC_74193 PROGMEM = {.Name = 74193 ,.Direction = 59289 ,.number_of_pins = 16,.logic = logic_74193,.dont_care = Dont_care_74193 ,.clk = CLK_74193,.sizeof_array_logic = 31};

const uint16_t logic_74194[] PROGMEM = {32768,33662,32769,64383,64317,33603,49471,57667,61763,63811,47361,39293,47681,64127,61953,57919,57345,57471,51839,39551,47743,64127,33662};
const uint16_t Dont_care_74194[] PROGMEM = {65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535};
const uint16_t CLK_74194[] PROGMEM = {1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024,1024};
const IC_INFO IC_74194 PROGMEM = {.Name = 74194 ,.Direction = 34815 ,.number_of_pins = 16,.logic = logic_74194,.dont_care = Dont_care_74194 ,.clk = CLK_74194,.sizeof_array_logic = 23};

const uint16_t logic_74195[] PROGMEM = {33792,33793,34049,34053,34049,50439,42243};
const uint16_t Dont_care_74195[] PROGMEM = {65535,65535,65535,65535,65535,65535,65535};
const uint16_t CLK_74195[] PROGMEM = {512,512,512,512,512,512,512};
const IC_INFO IC_74195 PROGMEM = {.Name = 74195 ,.Direction = 33791 ,.number_of_pins = 16,.logic = logic_74195,.dont_care = Dont_care_74195 ,.clk = CLK_74195,.sizeof_array_logic = 7};

const uint16_t logic_7420[] PROGMEM = {8352,8609,8866,9123,10408,10665,10922,11179,16159};
const uint16_t Dont_care_7420[] PROGMEM = {16383,16383,16383,16383,16383,16383,16383,16383,16383};
const uint16_t CLK_7420[] PROGMEM = {0,0,0,0,0,0,0,0,0};
const IC_INFO IC_7420 PROGMEM = {.Name = 7420 ,.Direction = 16223 ,.number_of_pins = 14,.logic = logic_7420,.dont_care = Dont_care_7420 ,.clk = CLK_7420,.sizeof_array_logic = 9};

const uint16_t logic_7421[] PROGMEM = {15291,12818,10505,8192};
const uint16_t Dont_care_7421[] PROGMEM = {15355,15355,15355,15355};
const uint16_t CLK_7421[] PROGMEM = {0,0,0,0};
const IC_INFO IC_7421 PROGMEM = {.Name = 7421 ,.Direction = 15195 ,.number_of_pins = 14,.logic = logic_7421,.dont_care = Dont_care_7421 ,.clk = CLK_7421,.sizeof_array_logic = 4};

const uint16_t logic_7422[] PROGMEM = {8352,8609,8866,9123,10408,10665,10922,11179,12464,12721,12978,13235,14520,14777,15034,15131};
const uint16_t Dont_care_7422[] PROGMEM = {16383,16383,16383,16383,16383,16383,16383,16383,16383,16383,16383,16383,16383,16383,16383,16383};
const uint16_t CLK_7422[] PROGMEM = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
const IC_INFO IC_7422 PROGMEM = {.Name = 7422 ,.Direction = 16223 ,.number_of_pins = 14,.logic = logic_7422,.dont_care = Dont_care_7422 ,.clk = CLK_7422,.sizeof_array_logic = 16};

const uint16_t logic_74237[] PROGMEM = {32784,32792,49184,40993,36898,34851,33828,33317,33062,32871};
const uint16_t Dont_care_74237[] PROGMEM = {32959,65535,65535,65535,65535,65535,65535,65535,65535,65535};
const uint16_t CLK_74237[] PROGMEM = {0,0,0,0,0,0,0,0,0,0};
const IC_INFO IC_74237 PROGMEM = {.Name = 74237 ,.Direction = 32959 ,.number_of_pins = 16,.logic = logic_74237,.dont_care = Dont_care_74237 ,.clk = CLK_74237,.sizeof_array_logic = 10};

const uint16_t logic_74242[] PROGMEM = {12349,14209,10112,8252};
const uint16_t Dont_care_74242[] PROGMEM = {16383,16383,16383,16383};
const uint16_t CLK_74242[] PROGMEM = {0,0,0,0};
const IC_INFO IC_74242 PROGMEM = {.Name = 74242 ,.Direction = 16323 ,.number_of_pins = 14,.logic = logic_74242,.dont_care = Dont_care_74242 ,.clk = CLK_74242,.sizeof_array_logic = 4};

const uint16_t logic_74243[] PROGMEM = {14269,12289,10172,8192};
const uint16_t Dont_care_74243[] PROGMEM = {16383,16383,16383,16383};
const uint16_t CLK_74243[] PROGMEM = {0,0,0,0};
const IC_INFO IC_74243 PROGMEM = {.Name = 74243 ,.Direction = 16323 ,.number_of_pins = 14,.logic = logic_74243,.dont_care = Dont_care_74243 ,.clk = CLK_74243,.sizeof_array_logic = 4};

const uint16_t logic_7425[] PROGMEM = {9477,9734,9991,11276,11533,11790,12047,13332,13589,13846,14103,15388,15645,15902,16159,9380};
const uint16_t Dont_care_7425[] PROGMEM = {16383,16383,16383,16383,16383,16383,16383,16383,16383,16383,16383,16383,16383,16383,16383,16383};
const uint16_t CLK_7425[] PROGMEM = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
const IC_INFO IC_7425 PROGMEM = {.Name = 7425 ,.Direction = 16223 ,.number_of_pins = 14,.logic = logic_7425,.dont_care = Dont_care_7425 ,.clk = CLK_7425,.sizeof_array_logic = 16};

const uint16_t logic_74251[] PROGMEM = {43045,54293,53797,54805,53525,54565,54037,55077};
const uint16_t Dont_care_74251[] PROGMEM = {65535,65535,65535,65535,65535,65535,65535,65535};
const uint16_t CLK_74251[] PROGMEM = {0,0,0,0,0,0,0,0};
const IC_INFO IC_74251 PROGMEM = {.Name = 74251 ,.Direction = 65487 ,.number_of_pins = 16,.logic = logic_74251,.dont_care = Dont_care_74251 ,.clk = CLK_74251,.sizeof_array_logic = 8};

const uint16_t logic_74253[] PROGMEM = {49473,65407,32768,33632,40960,42320,32770,35146};
const uint16_t Dont_care_74253[] PROGMEM = {65535,65535,65535,65535,65535,65535,65535,65535};
const uint16_t CLK_74253[] PROGMEM = {0,0,0,0,0,0,0,0};
const IC_INFO IC_74253 PROGMEM = {.Name = 74253 ,.Direction = 65215 ,.number_of_pins = 16,.logic = logic_74253,.dont_care = Dont_care_74253 ,.clk = CLK_74253,.sizeof_array_logic = 8};

const uint16_t logic_74257[] PROGMEM = {51528,65407,32768,37412,44378,49022,32769,42003,39789,49023};
const uint16_t Dont_care_74257[] PROGMEM = {65535,65535,65535,65535,65535,65535,65535,65535,65535,65535};
const uint16_t CLK_74257[] PROGMEM = {0,0,0,0,0,0,0,0,0,0};
const IC_INFO IC_74257 PROGMEM = {.Name = 74257 ,.Direction = 63159 ,.number_of_pins = 16,.logic = logic_74257,.dont_care = Dont_care_74257 ,.clk = CLK_74257,.sizeof_array_logic = 10};

const uint16_t logic_74258[] PROGMEM = {51528,65407,35144,39788,42002,46646,35145,44379,37413,46647};
const uint16_t Dont_care_74258[] PROGMEM = {65535,65535,65535,65535,65535,65535,65535,65535,65535,65535};
const uint16_t CLK_74258[] PROGMEM = {0,0,0,0,0,0,0,0,0,0};
const IC_INFO IC_74258 PROGMEM = {.Name = 74258 ,.Direction = 63159 ,.number_of_pins = 16,.logic = logic_74258,.dont_care = Dont_care_74258 ,.clk = CLK_74258,.sizeof_array_logic = 10};

const uint16_t logic_74259[] PROGMEM = {40961,45058,45060,36872,36881,36898,36931,37124};
const uint16_t Dont_care_74259[] PROGMEM = {65535,65535,65535,65535,65535,65535,65535,65535};
const uint16_t CLK_74259[] PROGMEM = {0,0,0,0,0,0,0,0};
const IC_INFO IC_74259 PROGMEM = {.Name = 74259 ,.Direction = 61575 ,.number_of_pins = 16,.logic = logic_74259,.dont_care = Dont_care_74259 ,.clk = CLK_74259,.sizeof_array_logic = 8};

const uint16_t logic_7426[] PROGMEM = {9380,13997,11702,15131};
const uint16_t Dont_care_7426[] PROGMEM = {16383,16383,16383,16383};
const uint16_t CLK_7426[] PROGMEM = {0,0,0,0};
const IC_INFO IC_7426 PROGMEM = {.Name = 7426 ,.Direction = 15195 ,.number_of_pins = 14,.logic = logic_7426,.dont_care = Dont_care_7426 ,.clk = CLK_7426,.sizeof_array_logic = 4};

const uint16_t logic_74260[] PROGMEM = {8240,12933,11530,15755,11780,16271,8321,14087,11142,14733};
const uint16_t Dont_care_74260[] PROGMEM = {16383,16383,16383,16383,16383,16383,16383,16383,16383,16383};
const uint16_t CLK_74260[] PROGMEM = {0,0,0,0,0,0,0,0,0,0};
const IC_INFO IC_74260 PROGMEM = {.Name = 74260 ,.Direction = 16335 ,.number_of_pins = 14,.logic = logic_74260,.dont_care = Dont_care_74260 ,.clk = CLK_74260,.sizeof_array_logic = 10};

const uint16_t logic_74266[] PROGMEM = {9740,10385,12578,16319};
const uint16_t Dont_care_74266[] PROGMEM = {16383,16383,16383,16383};
const uint16_t CLK_74266[] PROGMEM = {0,0,0,0};
const IC_INFO IC_74266 PROGMEM = {.Name = 74266 ,.Direction = 14835 ,.number_of_pins = 14,.logic = logic_74266,.dont_care = Dont_care_74266 ,.clk = CLK_74266,.sizeof_array_logic = 4};

const uint16_t logic_7427[] PROGMEM = {10400,12548,8713,13069,9234,13589,9755,14111};
const uint16_t Dont_care_7427[] PROGMEM = {16383,16383,16383,16383,16383,16383,16383,16383};
const uint16_t CLK_7427[] PROGMEM = {0,0,0,0,0,0,0,0};
const IC_INFO IC_7427 PROGMEM = {.Name = 7427 ,.Direction = 14175 ,.number_of_pins = 14,.logic = logic_7427,.dont_care = Dont_care_7427 ,.clk = CLK_7427,.sizeof_array_logic = 8};

const uint16_t logic_7428[] PROGMEM = {12809,9362,10532,11702};
const uint16_t Dont_care_7428[] PROGMEM = {16383,16383,16383,16383};
const uint16_t CLK_7428[] PROGMEM = {0,0,0,0};
const IC_INFO IC_7428 PROGMEM = {.Name = 7428 ,.Direction = 11766 ,.number_of_pins = 14,.logic = logic_7428,.dont_care = Dont_care_7428 ,.clk = CLK_7428,.sizeof_array_logic = 4};

const uint16_t logic_74280[] PROGMEM = {13609,10898,16299,8208,12459,16160,13091,9880};
const uint16_t Dont_care_74280[] PROGMEM = {16383,16383,16383,16383,16383,16383,16383,16383};
const uint16_t CLK_74280[] PROGMEM = {0,0,0,0,0,0,0,0};
const IC_INFO IC_74280 PROGMEM = {.Name = 74280 ,.Direction = 16335 ,.number_of_pins = 14,.logic = logic_74280,.dont_care = Dont_care_74280 ,.clk = CLK_74280,.sizeof_array_logic = 8};

const uint16_t logic_74283[] PROGMEM = {32768,32840,65407,47661,57905,40270};
const uint16_t Dont_care_74283[] PROGMEM = {65535,65535,65535,65535,65535,65535};
const uint16_t CLK_74283[] PROGMEM = {0,0,0,0,0,0};
const IC_INFO IC_74283 PROGMEM = {.Name = 74283 ,.Direction = 60918 ,.number_of_pins = 16,.logic = logic_74283,.dont_care = Dont_care_74283 ,.clk = CLK_74283,.sizeof_array_logic = 6};

const uint16_t logic_74292[] PROGMEM = {32769,33793,33793,33857,33857,33793};
const uint16_t Dont_care_74292[] PROGMEM = {61339,65535,65535,65535,65535,65535};
const uint16_t CLK_74292[] PROGMEM = {0,8,8,8,8,8};
const IC_INFO IC_74292 PROGMEM = {.Name = 74292 ,.Direction = 61339 ,.number_of_pins = 16,.logic = logic_74292,.dont_care = Dont_care_74292 ,.clk = CLK_74292,.sizeof_array_logic = 6};

const uint16_t logic_74293[] PROGMEM = {15872,9728,9472,9984,8976,10000,8968,9992,8984,10008,9088,10112};
const uint16_t Dont_care_74293[] PROGMEM = {16383,16383,16383,16383,16383,16383,16383,16383,16383,16383,16383,16383};
const uint16_t CLK_74293[] PROGMEM = {0,0,0,0,0,0,0,0,0,0,0,0};
const IC_INFO IC_74293 PROGMEM = {.Name = 74293 ,.Direction = 15975 ,.number_of_pins = 14,.logic = logic_74293,.dont_care = Dont_care_74293 ,.clk = CLK_74293,.sizeof_array_logic = 12};

const uint16_t logic_74294[] PROGMEM = {32769,33793,33793,33857,33857,33793,33793,33857,33857};
const uint16_t Dont_care_74294[] PROGMEM = {58523,58591,58591,58591,58591,58591,58591,58591,58591};
const uint16_t CLK_74294[] PROGMEM = {8,8,8,8,8,8,8,8,8};
const IC_INFO IC_74294 PROGMEM = {.Name = 74294 ,.Direction = 58523 ,.number_of_pins = 16,.logic = logic_74294,.dont_care = Dont_care_74294 ,.clk = CLK_74294,.sizeof_array_logic = 9};

const uint16_t logic_74298[] PROGMEM = {53541,43813};
const uint16_t Dont_care_74298[] PROGMEM = {65535,65535};
const uint16_t CLK_74298[] PROGMEM = {1024,1024};
const IC_INFO IC_74298 PROGMEM = {.Name = 74298 ,.Direction = 34815 ,.number_of_pins = 16,.logic = logic_74298,.dont_care = Dont_care_74298 ,.clk = CLK_74298,.sizeof_array_logic = 2};

const uint16_t logic_7430[] PROGMEM = {11327,11454,11453,11451,11447,11439,11423,10431,9407,8321};
const uint16_t Dont_care_7430[] PROGMEM = {16383,16383,16383,16383,16383,16383,16383,16383,16383,16383};
const uint16_t CLK_7430[] PROGMEM = {0,0,0,0,0,0,0,0,0,0};
const IC_INFO IC_7430 PROGMEM = {.Name = 7430 ,.Direction = 16255 ,.number_of_pins = 14,.logic = logic_7430,.dont_care = Dont_care_7430 ,.clk = CLK_7430,.sizeof_array_logic = 10};

const uint16_t logic_7432[] PROGMEM = {8192,11702,13997,16319};
const uint16_t Dont_care_7432[] PROGMEM = {16383,16383,16383,16383};
const uint16_t CLK_7432[] PROGMEM = {0,0,0,0};
const IC_INFO IC_7432 PROGMEM = {.Name = 7432 ,.Direction = 15195 ,.number_of_pins = 14,.logic = logic_7432,.dont_care = Dont_care_7432 ,.clk = CLK_7432,.sizeof_array_logic = 4};

const uint16_t logic_74365[] PROGMEM = {65407,65406,49022,32768,49023,65406,38229,54612};
const uint16_t Dont_care_74365[] PROGMEM = {65535,65535,65535,65535,65535,65535,65535,65535};
const uint16_t CLK_74365[] PROGMEM = {0,0,0,0,0,0,0,0};
const IC_INFO IC_74365 PROGMEM = {.Name = 74365 ,.Direction = 60075 ,.number_of_pins = 16,.logic = logic_74365,.dont_care = Dont_care_74365 ,.clk = CLK_74365,.sizeof_array_logic = 8};

const uint16_t logic_74366[] PROGMEM = {38229,54612,65407,65406,43562,38228};
const uint16_t Dont_care_74366[] PROGMEM = {65535,65535,65535,65535,65535,65535};
const uint16_t CLK_74366[] PROGMEM = {0,0,0,0,0,0};
const IC_INFO IC_74366 PROGMEM = {.Name = 74366 ,.Direction = 60075 ,.number_of_pins = 16,.logic = logic_74366,.dont_care = Dont_care_74366 ,.clk = CLK_74366,.sizeof_array_logic = 6};

const uint16_t logic_74367[] PROGMEM = {65407,32768,49022,32864,33282};
const uint16_t Dont_care_74367[] PROGMEM = {65535,65535,65535,65535,60075};
const uint16_t CLK_74367[] PROGMEM = {0,0,0,0,0};
const IC_INFO IC_74367 PROGMEM = {.Name = 74367 ,.Direction = 60075 ,.number_of_pins = 16,.logic = logic_74367,.dont_care = Dont_care_74367 ,.clk = CLK_74367,.sizeof_array_logic = 5};

const uint16_t logic_74368[] PROGMEM = {65407,38229,38228,43562};
const uint16_t Dont_care_74368[] PROGMEM = {65535,65535,65535,65535};
const uint16_t CLK_74368[] PROGMEM = {0,0,0,0};
const IC_INFO IC_74368 PROGMEM = {.Name = 74368 ,.Direction = 60075 ,.number_of_pins = 16,.logic = logic_74368,.dont_care = Dont_care_74368 ,.clk = CLK_74368,.sizeof_array_logic = 4};

const uint16_t logic_7437[] PROGMEM = {9380,11693,14006,15131};
const uint16_t Dont_care_7437[] PROGMEM = {16383,16383,16383,16383};
const uint16_t CLK_7437[] PROGMEM = {0,0,0,0};
const IC_INFO IC_7437 PROGMEM = {.Name = 7437 ,.Direction = 15195 ,.number_of_pins = 14,.logic = logic_7437,.dont_care = Dont_care_7437 ,.clk = CLK_7437,.sizeof_array_logic = 4};

const uint16_t logic_74375[] PROGMEM = {43562,56669,54613,37908};
const uint16_t Dont_care_74375[] PROGMEM = {65535,65535,65535,65535};
const uint16_t CLK_74375[] PROGMEM = {0,0,0,0};
const IC_INFO IC_74375 PROGMEM = {.Name = 74375 ,.Direction = 51657 ,.number_of_pins = 16,.logic = logic_74375,.dont_care = Dont_care_74375 ,.clk = CLK_74375,.sizeof_array_logic = 4};

const uint16_t logic_7438[] PROGMEM = {9380,11693,14006,15131};
const uint16_t Dont_care_7438[] PROGMEM = {16383,16383,16383,16383};
const uint16_t CLK_7438[] PROGMEM = {0,0,0,0};
const IC_INFO IC_7438 PROGMEM = {.Name = 7438 ,.Direction = 15195 ,.number_of_pins = 14,.logic = logic_7438,.dont_care = Dont_care_7438 ,.clk = CLK_7438,.sizeof_array_logic = 4};

const uint16_t logic_74386[] PROGMEM = {8192,11933,14126,14771};
const uint16_t Dont_care_74386[] PROGMEM = {16383,16383,16383,16383};
const uint16_t CLK_74386[] PROGMEM = {0,0,0,0};
const IC_INFO IC_74386 PROGMEM = {.Name = 74386 ,.Direction = 14835 ,.number_of_pins = 14,.logic = logic_74386,.dont_care = Dont_care_74386 ,.clk = CLK_74386,.sizeof_array_logic = 4};

const uint16_t logic_74390[] PROGMEM = {40962,32768,36868,33808,37908,33312,37412,34352,38452,33088,37188,32768};
const uint16_t Dont_care_74390[] PROGMEM = {59531,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535};
const uint16_t CLK_74390[] PROGMEM = {0,0,16385,16385,16385,16385,16385,16385,16385,16385,16385,16385};
const IC_INFO IC_74390 PROGMEM = {.Name = 74390 ,.Direction = 59531 ,.number_of_pins = 16,.logic = logic_74390,.dont_care = Dont_care_74390 ,.clk = CLK_74390,.sizeof_array_logic = 12};

const uint16_t logic_74393[] PROGMEM = {8192,8192,8192,14339,12289,9220,13317,8712,12809,9740,13837,8464,12561,9492,13589};
const uint16_t Dont_care_74393[] PROGMEM = {14403,14403,14403,16383,16383,16383,16383,16383,16383,16383,16383,16383,16383,16383,16383};
const uint16_t CLK_74393[] PROGMEM = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
const IC_INFO IC_74393 PROGMEM = {.Name = 74393 ,.Direction = 14403 ,.number_of_pins = 14,.logic = logic_74393,.dont_care = Dont_care_74393 ,.clk = CLK_74393,.sizeof_array_logic = 15};

const uint16_t logic_7440[] PROGMEM = {8352,8609,8866,9123,10408,10665,10922,11179,16159};
const uint16_t Dont_care_7440[] PROGMEM = {16383,16383,16383,16383,16383,16383,16383,16383,16383};
const uint16_t CLK_7440[] PROGMEM = {0,0,0,0,0,0,0,0,0};
const IC_INFO IC_7440 PROGMEM = {.Name = 7440 ,.Direction = 16223 ,.number_of_pins = 14,.logic = logic_7440,.dont_care = Dont_care_7440 ,.clk = CLK_7440,.sizeof_array_logic = 9};

const uint16_t logic_7442[] PROGMEM = {34686,51069,42875,59255,38767,55135,46911,63103,36223,52095};
const uint16_t Dont_care_7442[] PROGMEM = {65535,65535,65535,65535,65535,65535,65535,65535,65535,65535};
const uint16_t CLK_7442[] PROGMEM = {0,0,0,0,0,0,0,0,0,0};
const IC_INFO IC_7442 PROGMEM = {.Name = 7442 ,.Direction = 63616 ,.number_of_pins = 16,.logic = logic_7442,.dont_care = Dont_care_7442 ,.clk = CLK_7442,.sizeof_array_logic = 10};

const uint16_t logic_7446[] PROGMEM = {40988,62284,50205,49485,37662,35150,38943,58191,32828,33644};
const uint16_t Dont_care_7446[] PROGMEM = {65535,65535,65535,65535,65535,65535,65535,65535,65535,65535};
const uint16_t CLK_7446[] PROGMEM = {0,0,0,0,0,0,0,0,0,0};
const IC_INFO IC_7446 PROGMEM = {.Name = 7446 ,.Direction = 33015 ,.number_of_pins = 16,.logic = logic_7446,.dont_care = Dont_care_7446 ,.clk = CLK_7446,.sizeof_array_logic = 10};

const uint16_t logic_7447[] PROGMEM = {40988,62284,50205,49485,37662,35150,38943,58191,32828,33644};
const uint16_t Dont_care_7447[] PROGMEM = {65535,65535,65535,65535,65535,65535,65535,65535,65535,65535};
const uint16_t CLK_7447[] PROGMEM = {0,0,0,0,0,0,0,0,0,0};
const IC_INFO IC_7447 PROGMEM = {.Name = 7447 ,.Direction = 33015 ,.number_of_pins = 16,.logic = logic_7447,.dont_care = Dont_care_7447 ,.clk = CLK_7447,.sizeof_array_logic = 10};

const uint16_t logic_7450[] PROGMEM = {10400,15135,10667,14361};
const uint16_t Dont_care_7450[] PROGMEM = {16383,16383,16383,16383};
const uint16_t CLK_7450[] PROGMEM = {0,0,0,0};
const IC_INFO IC_7450 PROGMEM = {.Name = 7450 ,.Direction = 16223 ,.number_of_pins = 14,.logic = logic_7450,.dont_care = Dont_care_7450 ,.clk = CLK_7450,.sizeof_array_logic = 4};

const uint16_t logic_7451[] PROGMEM = {13089,12962,8613,8326,8616,9008,8856,8365,12339,12446};
const uint16_t Dont_care_7451[] PROGMEM = {16383,16383,16383,16383,16383,16383,16383,16383,16383,16383};
const uint16_t CLK_7451[] PROGMEM = {0,0,0,0,0,0,0,0,0,0};
const IC_INFO IC_7451 PROGMEM = {.Name = 7451 ,.Direction = 16223 ,.number_of_pins = 14,.logic = logic_7451,.dont_care = Dont_care_7451 ,.clk = CLK_7451,.sizeof_array_logic = 10};

const uint16_t logic_7455[] PROGMEM = {8463,16128,15233,14722,14211,13700,13189,12678,12167,11656};
const uint16_t Dont_care_7455[] PROGMEM = {16383,16383,16383,16383,16383,16383,16383,16383,16383,16383};
const uint16_t CLK_7455[] PROGMEM = {0,0,0,0,0,0,0,0,0,0};
const IC_INFO IC_7455 PROGMEM = {.Name = 7455 ,.Direction = 16255 ,.number_of_pins = 14,.logic = logic_7455,.dont_care = Dont_care_7455 ,.clk = CLK_7455,.sizeof_array_logic = 10};

const uint16_t logic_7458[] PROGMEM = {16319,14503,8192};
const uint16_t Dont_care_7458[] PROGMEM = {16383,16383,16383};
const uint16_t CLK_7458[] PROGMEM = {0,0,0};
const IC_INFO IC_7458 PROGMEM = {.Name = 7458 ,.Direction = 16223 ,.number_of_pins = 14,.logic = logic_7458,.dont_care = Dont_care_7458 ,.clk = CLK_7458,.sizeof_array_logic = 3};

const uint16_t logic_74589[] PROGMEM = {45653,41813,45909,45653,45909,37461,37717};
const uint16_t Dont_care_74589[] PROGMEM = {65279,65535,65535,65535,65535,65535,65535};
const uint16_t CLK_74589[] PROGMEM = {2048,0,0,1024,1024,1024,1024};
const IC_INFO IC_74589 PROGMEM = {.Name = 74589 ,.Direction = 65279 ,.number_of_pins = 16,.logic = logic_74589,.dont_care = Dont_care_74589 ,.clk = CLK_74589,.sizeof_array_logic = 7};

const uint16_t logic_74595[] PROGMEM = {32768,33280,41472,41472,41472,41472,57863};
const uint16_t Dont_care_74595[] PROGMEM = {48768,65535,65535,65535,65535,65535,65535};
const uint16_t CLK_74595[] PROGMEM = {0,0,1024,1024,1024,1024,2048};
const IC_INFO IC_74595 PROGMEM = {.Name = 74595 ,.Direction = 48768 ,.number_of_pins = 16,.logic = logic_74595,.dont_care = Dont_care_74595 ,.clk = CLK_74595,.sizeof_array_logic = 7};

const uint16_t logic_74597[] PROGMEM = {45141,41557,41557,45909,45653};
const uint16_t Dont_care_74597[] PROGMEM = {65279,65535,65535,65535,65535};
const uint16_t CLK_74597[] PROGMEM = {2048,2048,2048,1024,1024};
const IC_INFO IC_74597 PROGMEM = {.Name = 74597 ,.Direction = 65279 ,.number_of_pins = 16,.logic = logic_74597,.dont_care = Dont_care_74597 ,.clk = CLK_74597,.sizeof_array_logic = 5};

const uint16_t logic_7460[] PROGMEM = {14015,10645,14634,10496};
const uint16_t Dont_care_7460[] PROGMEM = {16383,16383,16383,16383};
const uint16_t CLK_7460[] PROGMEM = {0,0,0,0};
const IC_INFO IC_7460 PROGMEM = {.Name = 7460 ,.Direction = 12543 ,.number_of_pins = 14,.logic = logic_7460,.dont_care = Dont_care_7460 ,.clk = CLK_7460,.sizeof_array_logic = 4};

const uint16_t logic_7461[] PROGMEM = {16319,13333,10282,8192,8455,8376,15872};
const uint16_t Dont_care_7461[] PROGMEM = {16383,16383,16383,16383,16383,16383,16383};
const uint16_t CLK_7461[] PROGMEM = {0,0,0,0,0,0,0};
const IC_INFO IC_7461 PROGMEM = {.Name = 7461 ,.Direction = 15487 ,.number_of_pins = 14,.logic = logic_7461,.dont_care = Dont_care_7461 ,.clk = CLK_7461,.sizeof_array_logic = 7};

const uint16_t logic_7462[] PROGMEM = {16287,8224,8323,8348,10112,14464,13621,10794};
const uint16_t Dont_care_7462[] PROGMEM = {16383,16383,16383,16383,16383,16383,16383,16383};
const uint16_t CLK_7462[] PROGMEM = {0,0,0,0,0,0,0,0};
const IC_INFO IC_7462 PROGMEM = {.Name = 7462 ,.Direction = 16223 ,.number_of_pins = 14,.logic = logic_7462,.dont_care = Dont_care_7462 ,.clk = CLK_7462,.sizeof_array_logic = 8};

const uint16_t logic_7465[] PROGMEM = {8320,13738,10901,16191,8198,8248,9984,14337};
const uint16_t Dont_care_7465[] PROGMEM = {16383,16383,16383,16383,16383,16383,16383,16383};
const uint16_t CLK_7465[] PROGMEM = {0,0,0,0,0,0,0,0};
const IC_INFO IC_7465 PROGMEM = {.Name = 7465 ,.Direction = 16255 ,.number_of_pins = 14,.logic = logic_7465,.dont_care = Dont_care_7465 ,.clk = CLK_7465,.sizeof_array_logic = 8};

const uint16_t logic_7472[] PROGMEM = {12348,10114,12418,12674,13186,14114,12322,12326,12334,12446,14142,14238,13978};
const uint16_t Dont_care_7472[] PROGMEM = {16383,16383,16383,16383,16383,16383,16383,16383,16383,16383,16383,16383,16383};
const uint16_t CLK_7472[] PROGMEM = {2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048,2048};
const IC_INFO IC_7472 PROGMEM = {.Name = 7472 ,.Direction = 16223 ,.number_of_pins = 14,.logic = logic_7472,.dont_care = Dont_care_7472 ,.clk = CLK_7472,.sizeof_array_logic = 13};

const uint16_t logic_7474[] PROGMEM = {8874,8849,8873,8859,10920,12584,12968,15144};
const uint16_t Dont_care_7474[] PROGMEM = {16383,16383,16383,16383,16383,16383,16383,16383};
const uint16_t CLK_7474[] PROGMEM = {4,4,4,4,1024,1024,1024,1024};
const IC_INFO IC_7474 PROGMEM = {.Name = 7474 ,.Direction = 15951 ,.number_of_pins = 14,.logic = logic_7474,.dont_care = Dont_care_7474 ,.clk = CLK_7474,.sizeof_array_logic = 8};

const uint16_t logic_7475[] PROGMEM = {13465,9361,42226,17653,50422,49840,50512,50032};
const uint16_t Dont_care_7475[] PROGMEM = {65535,65535,65535,65535,65535,65535,65535,65535};
const uint16_t CLK_7475[] PROGMEM = {0,0,4096,4096,4096,8,8,8};
const IC_INFO IC_7475 PROGMEM = {.Name = 7475 ,.Direction = 6270 ,.number_of_pins = 16,.logic = logic_7475,.dont_care = Dont_care_7475 ,.clk = CLK_7475,.sizeof_array_logic = 8};

const uint16_t logic_7485[] PROGMEM = {59922,38217,54547,43592,51475,46664,52755,45384,52249,45890,52261,45834};
const uint16_t Dont_care_7485[] PROGMEM = {65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535};
const uint16_t CLK_7485[] PROGMEM = {0,0,0,0,0,0,0,0,0,0,0,0};
const IC_INFO IC_7485 PROGMEM = {.Name = 7485 ,.Direction = 65423 ,.number_of_pins = 16,.logic = logic_7485,.dont_care = Dont_care_7485 ,.clk = CLK_7485,.sizeof_array_logic = 12};

const uint16_t logic_7486[] PROGMEM = {8192,14006,11693,15131};
const uint16_t Dont_care_7486[] PROGMEM = {16383,16383,16383,16383};
const uint16_t CLK_7486[] PROGMEM = {0,0,0,0};
const IC_INFO IC_7486 PROGMEM = {.Name = 7486 ,.Direction = 15195 ,.number_of_pins = 14,.logic = logic_7486,.dont_care = Dont_care_7486 ,.clk = CLK_7486,.sizeof_array_logic = 4};

const uint16_t logic_74176[] PROGMEM = {8193,8192,16158,13062,15384,16128,12318,12288};
const uint16_t Dont_care_74176[] PROGMEM = {16383,16383,16383,16383,16383,16383,16383,16383};
const uint16_t CLK_74176[] PROGMEM = {160,160,160,160,160,160,160,160};
const IC_INFO IC_74176 PROGMEM = {.Name = 74176 ,.Direction = 14061 ,.number_of_pins = 14,.logic = logic_74176,.dont_care = Dont_care_74176 ,.clk = CLK_74176,.sizeof_array_logic = 8};

const uint16_t logic_74170[] PROGMEM = {34816,47164,39186,46104,51721};
const uint16_t Dont_care_74170[] PROGMEM = {65535,65535,65535,65535,65535};
const uint16_t CLK_74170[] PROGMEM = {0,0,0,0,0};
const IC_INFO IC_74170 PROGMEM = {.Name = 74170 ,.Direction = 64671 ,.number_of_pins = 16,.logic = logic_74170,.dont_care = Dont_care_74170 ,.clk = CLK_74170,.sizeof_array_logic = 5};




IC_INFO *ICs[] = {&IC_4000,&IC_4001,&IC_4002,&IC_4009,&IC_4010,&IC_40106,&IC_4011,&IC_4012,&IC_4013,&IC_4015,&IC_4016,&IC_40161,&IC_40162,&IC_4017,&IC_40174,&IC_40175,&IC_4018,
				  &IC_4019,&IC_40192,&IC_40193,&IC_4020,&IC_4022,&IC_4023,&IC_4024,&IC_4025,&IC_4027,&IC_4028,&IC_4029,&IC_4030,&IC_4031,&IC_4040,&IC_4041,&IC_4042,&IC_4043,
				  &IC_4044,&IC_4048,&IC_4049,&IC_4051,&IC_4053,&IC_4066,&IC_4068,&IC_4069,&IC_4070,&IC_4071,&IC_4072,&IC_4073,&IC_4075,&IC_4076,&IC_4077,&IC_4078,&IC_4081,&IC_4082,
				  &IC_4093,&IC_4094,&IC_4098,&IC_4503,&IC_4510,&IC_4511,&IC_4512,&IC_4518,&IC_4519,&IC_4520,&IC_4529,&IC_4532,&IC_4543,&IC_4572,&IC_7400,&IC_7401,&IC_7402,&IC_7403,
				  &IC_7404,&IC_7405,&IC_7406,&IC_7407,&IC_7408,&IC_7409,&IC_7410,&IC_74107,&IC_74109,&IC_7411,&IC_74112,&IC_74113,&IC_7412,&IC_74123,&IC_74125,&IC_74126,&IC_7413,
				  &IC_74132,&IC_74133,&IC_74136,&IC_74137,&IC_74138,&IC_74139,&IC_7414,&IC_74140,&IC_74145,&IC_74147,&IC_74148,&IC_7415,&IC_74151,&IC_74153,&IC_74157,&IC_74158,
				  &IC_7416,&IC_74160,&IC_74161,&IC_74162,&IC_74163,&IC_74164,&IC_74165,&IC_74166,&IC_7417,&IC_74173,&IC_74174,&IC_74175,&IC_7418,&IC_74182,&IC_74190,&IC_74191,
				  &IC_74192,&IC_74193,&IC_74194,&IC_74195,&IC_7420,&IC_7421,&IC_7422,&IC_74237,&IC_74242,&IC_74243,&IC_7425,&IC_74251,&IC_74253,&IC_74257,&IC_74258,&IC_74259,
				  &IC_7426,&IC_74260,&IC_74266,&IC_7427,&IC_7428,&IC_74280,&IC_74283,&IC_74292,&IC_74293,&IC_74294,&IC_74298,&IC_7430,&IC_7432,&IC_74365,&IC_74366,&IC_74367,
				  &IC_74368,&IC_7437,&IC_74375,&IC_7438,&IC_74386,&IC_74390,&IC_74393,&IC_7440,&IC_7442,&IC_7446,&IC_7447,&IC_7450,&IC_7451,&IC_7455,&IC_7458,&IC_74589,&IC_74595,
				  &IC_74597,&IC_7460,&IC_7461,&IC_7462,&IC_7465,&IC_7472,&IC_7474,&IC_7475,&IC_7485,&IC_7486,&IC_74176,&IC_74170,};



#endif /* IC_DATASET_H_ */