/*
 * IC_Dataset.h
 *
 * Created: 12/4/2024 6:03:49 PM
 *  Author: mo ali
 */ 


#ifndef IC_DATASET_H_
#define IC_DATASET_H_


typedef struct {
	int Name ;
	unsigned short Direction ;
	unsigned char NumOfPins;
	unsigned char Input_Pins[12];
	unsigned char index_Input_Pins;
	unsigned short *logic ;
}IC_INFO;


unsigned short logic_4000[] = {8864,8992,9488,10504,11544,12548,13588,14604,15644};
IC_INFO IC_4000 = {.Name = 4000 ,.Direction = 15583 ,.NumOfPins = 14 ,.index_Input_Pins = 3,.logic = &logic_4000,.Input_Pins[0] = 5,.Input_Pins[1] = 8,.Input_Pins[2] = 9};

unsigned short logic_4001[] = {9740,12578,10385,14771};
IC_INFO IC_4001 = {.Name = 4001 ,.Direction = 14835 ,.NumOfPins = 14 ,.index_Input_Pins = 4,.logic = &logic_4001,.Input_Pins[0] = 2,.Input_Pins[1] = 3,.Input_Pins[2] = 9,.Input_Pins[3] = 10};

unsigned short logic_4002[] = {8976,8464,12048,11288,12038,8708,12062,12289,9482,10772};
IC_INFO IC_4002 = {.Name = 4002 ,.Direction = 12286 ,.NumOfPins = 14 ,.index_Input_Pins = 2,.logic = &logic_4002,.Input_Pins[0] = 0,.Input_Pins[1] = 12};

unsigned short logic_4009[] = {51755,42325};
IC_INFO IC_4009 = {.Name = 4009 ,.Direction = 46549 ,.NumOfPins = 16 ,.index_Input_Pins = 6,.logic = &logic_4009,.Input_Pins[0] = 10,.Input_Pins[1] = 0,.Input_Pins[2] = 5,.Input_Pins[3] = 9,.Input_Pins[4] = 11,.Input_Pins[5] = 14};

unsigned short logic_4010[] = {61311,32769};
IC_INFO IC_4010 = {.Name = 4010 ,.Direction = 46549 ,.NumOfPins = 16 ,.index_Input_Pins = 6,.logic = &logic_4010,.Input_Pins[0] = 10,.Input_Pins[1] = 0,.Input_Pins[2] = 5,.Input_Pins[3] = 9,.Input_Pins[4] = 11,.Input_Pins[5] = 14};

unsigned short logic_40106[] = {43690,46357};
IC_INFO IC_40106 = {.Name = 40106 ,.Direction = 13653 ,.NumOfPins = 14 ,.index_Input_Pins = 6,.logic = &logic_40106,.Input_Pins[0] = 1,.Input_Pins[1] = 3,.Input_Pins[2] = 5,.Input_Pins[3] = 7,.Input_Pins[4] = 9,.Input_Pins[5] = 11};

unsigned short logic_4011[] = {42420,44701,46894,47627};
IC_INFO IC_4011 = {.Name = 4011 ,.Direction = 14835 ,.NumOfPins = 14 ,.index_Input_Pins = 4,.logic = &logic_4011,.Input_Pins[0] = 2,.Input_Pins[1] = 3,.Input_Pins[2] = 9,.Input_Pins[3] = 10};

unsigned short logic_4012[] = {45057,46347,47637,44830};
IC_INFO IC_4012 = {.Name = 4012 ,.Direction = 12286 ,.NumOfPins = 14 ,.index_Input_Pins = 2,.logic = &logic_4012,.Input_Pins[0] = 0,.Input_Pins[1] = 12};

unsigned short logic_4013[] = {43530,45217,43010,45329};
IC_INFO IC_4013 = {.Name = 4013 ,.Direction = 10236 ,.NumOfPins = 14 ,.index_Input_Pins = 4,.logic = &logic_4013,.Input_Pins[0] = 0,.Input_Pins[1] = 1,.Input_Pins[2] = 11,.Input_Pins[3] = 12};

unsigned short logic_4015[] = {40992,53328,55384,56412,36366};
IC_INFO IC_4015 = {.Name = 4015 ,.Direction = 57825 ,.NumOfPins = 16 ,.index_Input_Pins = 8,.logic = &logic_4015,.Input_Pins[0] = 10,.Input_Pins[1] = 0,.Input_Pins[2] = 3,.Input_Pins[3] = 4,.Input_Pins[4] = 9,.Input_Pins[5] = 10,.Input_Pins[6] = 11,.Input_Pins[7] = 12};

unsigned short logic_4016[] = {41734,42895,47152,49087};
IC_INFO IC_4016 = {.Name = 4016 ,.Direction = 15609 ,.NumOfPins = 14 ,.index_Input_Pins = 4,.logic = &logic_4016,.Input_Pins[0] = 1,.Input_Pins[1] = 2,.Input_Pins[2] = 8,.Input_Pins[3] = 9};

unsigned short logic_40161[] = {33076,33588,44085,44865,40769,65345,33601,41793,37699,37697,33600,33601};
IC_INFO IC_40161 = {.Name = 40161 ,.Direction = 65535 ,.NumOfPins = 16 ,.index_Input_Pins = 0,.logic = &logic_40161};

unsigned short logic_40162[] = {33052,47133,47937,34625,59201,33601,41793,37697,45891,45890,45888,33602,33601};
IC_INFO IC_40162 = {.Name = 40162 ,.Direction = 65535 ,.NumOfPins = 16 ,.index_Input_Pins = 0,.logic = &logic_40162};

unsigned short logic_4017[] = {51204,34818,34824,34880,35328,32769,32784,32800,33024,33792,34820,38916};
IC_INFO IC_4017 = {.Name = 4017 ,.Direction = 61568 ,.NumOfPins = 16 ,.index_Input_Pins = 11,.logic = &logic_4017,.Input_Pins[0] = 32,.Input_Pins[1] = 10,.Input_Pins[2] = 0,.Input_Pins[3] = 3,.Input_Pins[4] = 4,.Input_Pins[5] = 5,.Input_Pins[6] = 6,.Input_Pins[7] = 8,.Input_Pins[8] = 9,.Input_Pins[9] = 10,.Input_Pins[10] = 11};

unsigned short logic_40174[] = {65151,32769,32768,46124};
IC_INFO IC_40174 = {.Name = 40174 ,.Direction = 46509 ,.NumOfPins = 16 ,.index_Input_Pins = 6,.logic = &logic_40174,.Input_Pins[0] = 32,.Input_Pins[1] = 10,.Input_Pins[2] = 0,.Input_Pins[3] = 9,.Input_Pins[4] = 11,.Input_Pins[5] = 14};

unsigned short logic_40175[] = {55899,42021,42020,48188};
IC_INFO IC_40175 = {.Name = 40175 ,.Direction = 39321 ,.NumOfPins = 16 ,.index_Input_Pins = 8,.logic = &logic_40175,.Input_Pins[0] = 32,.Input_Pins[1] = 10,.Input_Pins[2] = 0,.Input_Pins[3] = 6,.Input_Pins[4] = 9,.Input_Pins[5] = 10,.Input_Pins[6] = 13,.Input_Pins[7] = 14};

unsigned short logic_4018[] = {56633,40233,40225,40193,39169,35072,35640,33848,37945,37929};
IC_INFO IC_4018 = {.Name = 4018 ,.Direction = 60359 ,.NumOfPins = 16 ,.index_Input_Pins = 5,.logic = &logic_4018,.Input_Pins[0] = 32,.Input_Pins[1] = 10,.Input_Pins[2] = 0,.Input_Pins[3] = 10,.Input_Pins[4] = 12};

unsigned short logic_4019[] = {65407,65151,49279,61696,36693,48725};
IC_INFO IC_4019 = {.Name = 4019 ,.Direction = 57855 ,.NumOfPins = 16 ,.index_Input_Pins = 4,.logic = &logic_4019,.Input_Pins[0] = 10,.Input_Pins[1] = 0,.Input_Pins[2] = 11,.Input_Pins[3] = 12};

unsigned short logic_40192[] = {65049,55871,39982,40024,40008,40028,37964,39960,39944,39964,39956,39960,35856,39996};
IC_INFO IC_40192 = {.Name = 40192 ,.Direction = 59391 ,.NumOfPins = 16 ,.index_Input_Pins = 2,.logic = &logic_40192,.Input_Pins[0] = 10,.Input_Pins[1] = 0};

unsigned short logic_40193[] = {65304,56188,40044,40058,40042,40062,37998,39960,39944,39964,39956,39960,35856,40062};
IC_INFO IC_40193 = {.Name = 40193 ,.Direction = 59391 ,.NumOfPins = 16 ,.index_Input_Pins = 2,.logic = &logic_40193,.Input_Pins[0] = 10,.Input_Pins[1] = 0};

unsigned short logic_4020[] = {33792,32768,33024,32768,33024,32768,33024,32768,33024,32832,33088,32832,33088,32832,33088,32832,33088,32784};
IC_INFO IC_4020 = {.Name = 4020 ,.Direction = 34432 ,.NumOfPins = 16 ,.index_Input_Pins = 12,.logic = &logic_4020,.Input_Pins[0] = 10,.Input_Pins[1] = 0,.Input_Pins[2] = 2,.Input_Pins[3] = 3,.Input_Pins[4] = 4,.Input_Pins[5] = 5,.Input_Pins[6] = 6,.Input_Pins[7] = 8,.Input_Pins[8] = 11,.Input_Pins[9] = 12,.Input_Pins[10] = 13,.Input_Pins[11] = 14};

unsigned short logic_4022[] = {51202,34817,34820,34880,33792,32776,32784,33280,34818,38914};
IC_INFO IC_4022 = {.Name = 4022 ,.Direction = 61856 ,.NumOfPins = 16 ,.index_Input_Pins = 9,.logic = &logic_4022,.Input_Pins[0] = 10,.Input_Pins[1] = 0,.Input_Pins[2] = 2,.Input_Pins[3] = 3,.Input_Pins[4] = 4,.Input_Pins[5] = 6,.Input_Pins[6] = 9,.Input_Pins[7] = 10,.Input_Pins[8] = 11};

unsigned short logic_4023[] = {41760,42916,43817,44973,45874,47030,47931,48287};
IC_INFO IC_4023 = {.Name = 4023 ,.Direction = 15583 ,.NumOfPins = 14 ,.index_Input_Pins = 3,.logic = &logic_4023,.Input_Pins[0] = 5,.Input_Pins[1] = 8,.Input_Pins[2] = 9};

unsigned short logic_4024[] = {40962,43008,41984,44032,41216,43264,42240,44288,40992,43040,42016,44064,41248,40962};
IC_INFO IC_4024 = {.Name = 4024 ,.Direction = 16383 ,.NumOfPins = 14 ,.index_Input_Pins = 0,.logic = &logic_4024};

unsigned short logic_4025[] = {41760,42116,43017,44173,45074,46230,47131,48287};
IC_INFO IC_4025 = {.Name = 4025 ,.Direction = 15583 ,.NumOfPins = 14 ,.index_Input_Pins = 3,.logic = &logic_4025,.Input_Pins[0] = 5,.Input_Pins[1] = 8,.Input_Pins[2] = 9};

unsigned short logic_4027[] = {50513,43562,40993,40978,41009,41010,49666,41986,50690,42498};
IC_INFO IC_4027 = {.Name = 4027 ,.Direction = 40956 ,.NumOfPins = 16 ,.index_Input_Pins = 4,.logic = &logic_4027,.Input_Pins[0] = 10,.Input_Pins[1] = 0,.Input_Pins[2] = 13,.Input_Pins[3] = 14};

unsigned short logic_4028[] = {32772,41472,32772,53760,34817,35360,38976,39432,34048,34320};
IC_INFO IC_4028 = {.Name = 4028 ,.Direction = 40576 ,.NumOfPins = 16 ,.index_Input_Pins = 10,.logic = &logic_4028,.Input_Pins[0] = 10,.Input_Pins[1] = 0,.Input_Pins[2] = 2,.Input_Pins[3] = 3,.Input_Pins[4] = 4,.Input_Pins[5] = 5,.Input_Pins[6] = 6,.Input_Pins[7] = 8,.Input_Pins[8] = 13,.Input_Pins[9] = 14};

unsigned short logic_4029[] = {33345,33376,34368,34400,41536,41568,42560,42592,33346,32802,32834,42080,42048,41056,41024,33888,33856,32864,32848,32768,32866,48704};
IC_INFO IC_4029 = {.Name = 4029 ,.Direction = 56221 ,.NumOfPins = 16 ,.index_Input_Pins = 5,.logic = &logic_4029,.Input_Pins[0] = 10,.Input_Pins[1] = 0,.Input_Pins[2] = 6,.Input_Pins[3] = 10,.Input_Pins[4] = 13};

unsigned short logic_4030[] = {44701,46894,40960,47539};
IC_INFO IC_4030 = {.Name = 4030 ,.Direction = 14835 ,.NumOfPins = 14 ,.index_Input_Pins = 4,.logic = &logic_4030,.Input_Pins[0] = 2,.Input_Pins[1] = 3,.Input_Pins[2] = 9,.Input_Pins[3] = 10};

unsigned short logic_4031[] = {49184,32832,33313,33344};
IC_INFO IC_4031 = {.Name = 4031 ,.Direction = 65439 ,.NumOfPins = 16 ,.index_Input_Pins = 2,.logic = &logic_4031,.Input_Pins[0] = 10,.Input_Pins[1] = 0};

unsigned short logic_4040[] = {33792,33024,32832,33088,32800,33056,32864,33120,32784,33040,32848,33104,32816,33072,32880};
IC_INFO IC_4040 = {.Name = 4040 ,.Direction = 65535 ,.NumOfPins = 16 ,.index_Input_Pins = 0,.logic = &logic_4040};

unsigned short logic_4041[] = {46765,43282};
IC_INFO IC_4041 = {.Name = 4041 ,.Direction = 12900 ,.NumOfPins = 14 ,.index_Input_Pins = 8,.logic = &logic_4041,.Input_Pins[0] = 0,.Input_Pins[1] = 1,.Input_Pins[2] = 3,.Input_Pins[3] = 4,.Input_Pins[4] = 7,.Input_Pins[5] = 8,.Input_Pins[6] = 10,.Input_Pins[7] = 11};

unsigned short logic_4042[] = {46667,46683,51508};
IC_INFO IC_4042 = {.Name = 4042 ,.Direction = 45304 ,.NumOfPins = 16 ,.index_Input_Pins = 8,.logic = &logic_4042,.Input_Pins[0] = 10,.Input_Pins[1] = 0,.Input_Pins[2] = 2,.Input_Pins[3] = 8,.Input_Pins[4] = 9,.Input_Pins[5] = 10,.Input_Pins[6] = 11,.Input_Pins[7] = 14};

unsigned short logic_4043[] = {50260,43835,33555,65407};
IC_INFO IC_4043 = {.Name = 4043 ,.Direction = 64764 ,.NumOfPins = 16 ,.index_Input_Pins = 4,.logic = &logic_4043,.Input_Pins[0] = 10,.Input_Pins[1] = 0,.Input_Pins[2] = 8,.Input_Pins[3] = 9};

unsigned short logic_4044[] = {47929,65405,50260};
IC_INFO IC_4044 = {.Name = 4044 ,.Direction = 60670 ,.NumOfPins = 16 ,.index_Input_Pins = 4,.logic = &logic_4044,.Input_Pins[0] = 10,.Input_Pins[1] = 0,.Input_Pins[2] = 9,.Input_Pins[3] = 12};

unsigned short logic_4048[] = {32771,37910,38167,33026};
IC_INFO IC_4048 = {.Name = 4048 ,.Direction = 65534 ,.NumOfPins = 16 ,.index_Input_Pins = 1,.logic = &logic_4048,.Input_Pins[0] = 10};

unsigned short logic_4049[] = {46669,43315};
IC_INFO IC_4049 = {.Name = 4049 ,.Direction = 46549 ,.NumOfPins = 16 ,.index_Input_Pins = 6,.logic = &logic_4049,.Input_Pins[0] = 10,.Input_Pins[1] = 0,.Input_Pins[2] = 5,.Input_Pins[3] = 9,.Input_Pins[4] = 11,.Input_Pins[5] = 14};

unsigned short logic_4051[] = {59419,56347,47643,63003,63770,64779,64281,65299,36868,41988,49668,40452,33029,34068,33542,34572,59455};
IC_INFO IC_4051 = {.Name = 4051 ,.Direction = 65531 ,.NumOfPins = 16 ,.index_Input_Pins = 1,.logic = &logic_4051,.Input_Pins[0] = 10};

unsigned short logic_4053[] = {34834,59418,59662,59929,62490};
IC_INFO IC_4053 = {.Name = 4053 ,.Direction = 65535 ,.NumOfPins = 16 ,.index_Input_Pins = 0,.logic = &logic_4053};

unsigned short logic_4066[] = {58118,42895,47152,49087};
IC_INFO IC_4066 = {.Name = 4066 ,.Direction = 15609 ,.NumOfPins = 14 ,.index_Input_Pins = 4,.logic = &logic_4066,.Input_Pins[0] = 1,.Input_Pins[1] = 2,.Input_Pins[2] = 8,.Input_Pins[3] = 9};

unsigned short logic_4068[] = {44830,46346,47636,48152,45830,48896,45056,46878,48918,48668};
IC_INFO IC_4068 = {.Name = 4068 ,.Direction = 12287 ,.NumOfPins = 14 ,.index_Input_Pins = 1,.logic = &logic_4068,.Input_Pins[0] = 12};

unsigned short logic_4069[] = {43690,46357};
IC_INFO IC_4069 = {.Name = 4069 ,.Direction = 13653 ,.NumOfPins = 14 ,.index_Input_Pins = 6,.logic = &logic_4069,.Input_Pins[0] = 1,.Input_Pins[1] = 3,.Input_Pins[2] = 5,.Input_Pins[3] = 7,.Input_Pins[4] = 9,.Input_Pins[5] = 11};

unsigned short logic_4070[] = {40960,44701,46894,47539};
IC_INFO IC_4070 = {.Name = 4070 ,.Direction = 14835 ,.NumOfPins = 14 ,.index_Input_Pins = 4,.logic = &logic_4070,.Input_Pins[0] = 2,.Input_Pins[1] = 3,.Input_Pins[2] = 9,.Input_Pins[3] = 10};

unsigned short logic_4071[] = {41912,44701,46894,48135};
IC_INFO IC_4071 = {.Name = 4071 ,.Direction = 14835 ,.NumOfPins = 14 ,.index_Input_Pins = 4,.logic = &logic_4071,.Input_Pins[0] = 2,.Input_Pins[1] = 3,.Input_Pins[2] = 9,.Input_Pins[3] = 10};

unsigned short logic_4072[] = {40960,45315,45573,45831,46089,46347,46605,46863,47121,47379,48927};
IC_INFO IC_4072 = {.Name = 4072 ,.Direction = 12286 ,.NumOfPins = 14 ,.index_Input_Pins = 2,.logic = &logic_4072,.Input_Pins[0] = 0,.Input_Pins[1] = 12};

unsigned short logic_4073[] = {40960,42116,43017,44173,45075,46230,47123,49087};
IC_INFO IC_4073 = {.Name = 4073 ,.Direction = 15583 ,.NumOfPins = 14 ,.index_Input_Pins = 3,.logic = &logic_4073,.Input_Pins[0] = 5,.Input_Pins[1] = 8,.Input_Pins[2] = 9};

unsigned short logic_4075[] = {40960,42924,43817,44973,45875,47030,47931,42943};
IC_INFO IC_4075 = {.Name = 4075 ,.Direction = 15583 ,.NumOfPins = 14 ,.index_Input_Pins = 3,.logic = &logic_4075,.Input_Pins[0] = 5,.Input_Pins[1] = 8,.Input_Pins[2] = 9};

unsigned short logic_4076[] = {48188,43028,37928};
IC_INFO IC_4076 = {.Name = 4076 ,.Direction = 65475 ,.NumOfPins = 16 ,.index_Input_Pins = 4,.logic = &logic_4076,.Input_Pins[0] = 10,.Input_Pins[1] = 0,.Input_Pins[2] = 4,.Input_Pins[3] = 5};

unsigned short logic_4077[] = {42508,43153,45346,49087};
IC_INFO IC_4077 = {.Name = 4077 ,.Direction = 14835 ,.NumOfPins = 14 ,.index_Input_Pins = 4,.logic = &logic_4077,.Input_Pins[0] = 2,.Input_Pins[1] = 3,.Input_Pins[2] = 9,.Input_Pins[3] = 10};

unsigned short logic_4078[] = {44831,42250,43540,44056,41734,44800,45056,42783,44822,44572};
IC_INFO IC_4078 = {.Name = 4078 ,.Direction = 12287 ,.NumOfPins = 14 ,.index_Input_Pins = 1,.logic = &logic_4078,.Input_Pins[0] = 12};

unsigned short logic_4081[] = {41912,43153,45346,48135};
IC_INFO IC_4081 = {.Name = 4081 ,.Direction = 14835 ,.NumOfPins = 14 ,.index_Input_Pins = 4,.logic = &logic_4081,.Input_Pins[0] = 2,.Input_Pins[1] = 3,.Input_Pins[2] = 9,.Input_Pins[3] = 10};

unsigned short logic_4082[] = {40960,41218,41476,41734,41992,42250,42508,42766,44688,43282,48927};
IC_INFO IC_4082 = {.Name = 4082 ,.Direction = 12286 ,.NumOfPins = 14 ,.index_Input_Pins = 2,.logic = &logic_4082,.Input_Pins[0] = 0,.Input_Pins[1] = 12};

unsigned short logic_4093[] = {42508,44701,46894,47539};
IC_INFO IC_4093 = {.Name = 4093 ,.Direction = 14835 ,.NumOfPins = 14 ,.index_Input_Pins = 4,.logic = &logic_4093,.Input_Pins[0] = 2,.Input_Pins[1] = 3,.Input_Pins[2] = 9,.Input_Pins[3] = 10};

unsigned short logic_4094[] = {49153,49163,49169,49195,49233,57387,53329,59435,54353,59435,54609,54354,59435,48249};
IC_INFO IC_4094 = {.Name = 4094 ,.Direction = 65535 ,.NumOfPins = 16 ,.index_Input_Pins = 0,.logic = &logic_4094};

unsigned short logic_4098[] = {41282,46422,48158,48158,48702,40284,46422,48478,47662,39244,48478};
IC_INFO IC_4098 = {.Name = 4098 ,.Direction = 64671 ,.NumOfPins = 16 ,.index_Input_Pins = 4,.logic = &logic_4098,.Input_Pins[0] = 10,.Input_Pins[1] = 0,.Input_Pins[2] = 8,.Input_Pins[3] = 9};

unsigned short logic_4503[] = {45917,36215,57112,62566};
IC_INFO IC_4503 = {.Name = 4503 ,.Direction = 60075 ,.NumOfPins = 16 ,.index_Input_Pins = 6,.logic = &logic_4503,.Input_Pins[0] = 10,.Input_Pins[1] = 0,.Input_Pins[2] = 6,.Input_Pins[3] = 8,.Input_Pins[4] = 10,.Input_Pins[5] = 12};

unsigned short logic_4510[] = {45673,42560,42592,42048,41056};
IC_INFO IC_4510 = {.Name = 4510 ,.Direction = 56221 ,.NumOfPins = 16 ,.index_Input_Pins = 5,.logic = &logic_4510,.Input_Pins[0] = 10,.Input_Pins[1] = 0,.Input_Pins[2] = 6,.Input_Pins[3] = 10,.Input_Pins[4] = 13};

unsigned short logic_4511[] = {65288,35916,63054,57100,32772};
IC_INFO IC_4511 = {.Name = 4511 ,.Direction = 33023 ,.NumOfPins = 16 ,.index_Input_Pins = 7,.logic = &logic_4511,.Input_Pins[0] = 10,.Input_Pins[1] = 0,.Input_Pins[2] = 10,.Input_Pins[3] = 11,.Input_Pins[4] = 12,.Input_Pins[5] = 13,.Input_Pins[6] = 14};

unsigned short logic_4512[] = {33150,40961,34173,41986,35195,43012,36215,44040,37231,45072,38239,58400,39231,47168,40063,48384,40704,64639};
IC_INFO IC_4512 = {.Name = 4512 ,.Direction = 57343 ,.NumOfPins = 16 ,.index_Input_Pins = 1,.logic = &logic_4512,.Input_Pins[0] = 10};

unsigned short logic_4518[] = {49730,32768,49730,32768,34310,34824,33282};
IC_INFO IC_4518 = {.Name = 4518 ,.Direction = 65535 ,.NumOfPins = 16 ,.index_Input_Pins = 0,.logic = &logic_4518};

unsigned short logic_4519[] = {49278,59980,46874,61749,43337,44903};
IC_INFO IC_4519 = {.Name = 4519 ,.Direction = 57855 ,.NumOfPins = 16 ,.index_Input_Pins = 4,.logic = &logic_4519,.Input_Pins[0] = 10,.Input_Pins[1] = 0,.Input_Pins[2] = 11,.Input_Pins[3] = 12};

unsigned short logic_4520[] = {49730,34310,35338,36366,37394,38422,39450,40478,41506,42534,43562};
IC_INFO IC_4520 = {.Name = 4520 ,.Direction = 65535 ,.NumOfPins = 16 ,.index_Input_Pins = 0,.logic = &logic_4520};

unsigned short logic_4529[] = {60171,59435,38773,54356};
IC_INFO IC_4529 = {.Name = 4529 ,.Direction = 64767 ,.NumOfPins = 16 ,.index_Input_Pins = 2,.logic = &logic_4529,.Input_Pins[0] = 10,.Input_Pins[1] = 0};

unsigned short logic_4532[] = {32768,49168,41336,41076,41266,41009,45392,43088,42256,41488};
IC_INFO IC_4532 = {.Name = 4532 ,.Direction = 40607 ,.NumOfPins = 16 ,.index_Input_Pins = 5,.logic = &logic_4532,.Input_Pins[0] = 10,.Input_Pins[1] = 0,.Input_Pins[2] = 8,.Input_Pins[3] = 13,.Input_Pins[4] = 14};

unsigned short logic_4543[] = {65289,34321,64775,32781};
IC_INFO IC_4543 = {.Name = 4543 ,.Direction = 33023 ,.NumOfPins = 16 ,.index_Input_Pins = 7,.logic = &logic_4543,.Input_Pins[0] = 10,.Input_Pins[1] = 0,.Input_Pins[2] = 10,.Input_Pins[3] = 11,.Input_Pins[4] = 12,.Input_Pins[5] = 13,.Input_Pins[6] = 14};

unsigned short logic_4572[] = {38165,46373,55882,60010};
IC_INFO IC_4572 = {.Name = 4572 ,.Direction = 60138 ,.NumOfPins = 16 ,.index_Input_Pins = 6,.logic = &logic_4572,.Input_Pins[0] = 10,.Input_Pins[1] = 0,.Input_Pins[2] = 4,.Input_Pins[3] = 8,.Input_Pins[4] = 10,.Input_Pins[5] = 12};

unsigned short logic_7400[] = {58532,44461,46774,47899};
IC_INFO IC_7400 = {.Name = 7400 ,.Direction = 15195 ,.NumOfPins = 14 ,.index_Input_Pins = 4,.logic = &logic_7400,.Input_Pins[0] = 2,.Input_Pins[1] = 5,.Input_Pins[2] = 7,.Input_Pins[3] = 10};

unsigned short logic_7401[] = {45577,46747,47917,44470};
IC_INFO IC_7401 = {.Name = 7401 ,.Direction = 11766 ,.NumOfPins = 14 ,.index_Input_Pins = 4,.logic = &logic_7401,.Input_Pins[0] = 0,.Input_Pins[1] = 3,.Input_Pins[2] = 9,.Input_Pins[3] = 12};

unsigned short logic_7402[] = {45577,42130,43300,44470};
IC_INFO IC_7402 = {.Name = 7402 ,.Direction = 11766 ,.NumOfPins = 14 ,.index_Input_Pins = 4,.logic = &logic_7402,.Input_Pins[0] = 0,.Input_Pins[1] = 3,.Input_Pins[2] = 9,.Input_Pins[3] = 12};

unsigned short logic_7403[] = {42148,44461,46774,47899};
IC_INFO IC_7403 = {.Name = 7403 ,.Direction = 15195 ,.NumOfPins = 14 ,.index_Input_Pins = 4,.logic = &logic_7403,.Input_Pins[0] = 2,.Input_Pins[1] = 5,.Input_Pins[2] = 7,.Input_Pins[3] = 10};

unsigned short logic_7404[] = {43690,46357};
IC_INFO IC_7404 = {.Name = 7404 ,.Direction = 13653 ,.NumOfPins = 14 ,.index_Input_Pins = 6,.logic = &logic_7404,.Input_Pins[0] = 1,.Input_Pins[1] = 3,.Input_Pins[2] = 5,.Input_Pins[3] = 7,.Input_Pins[4] = 9,.Input_Pins[5] = 11};

unsigned short logic_7405[] = {43690,46357};
IC_INFO IC_7405 = {.Name = 7405 ,.Direction = 13653 ,.NumOfPins = 14 ,.index_Input_Pins = 6,.logic = &logic_7405,.Input_Pins[0] = 1,.Input_Pins[1] = 3,.Input_Pins[2] = 5,.Input_Pins[3] = 7,.Input_Pins[4] = 9,.Input_Pins[5] = 11};

unsigned short logic_7406[] = {43690,46357};
IC_INFO IC_7406 = {.Name = 7406 ,.Direction = 13653 ,.NumOfPins = 14 ,.index_Input_Pins = 6,.logic = &logic_7406,.Input_Pins[0] = 1,.Input_Pins[1] = 3,.Input_Pins[2] = 5,.Input_Pins[3] = 7,.Input_Pins[4] = 9,.Input_Pins[5] = 11};

unsigned short logic_7407[] = {49087,40960};
IC_INFO IC_7407 = {.Name = 7407 ,.Direction = 13653 ,.NumOfPins = 14 ,.index_Input_Pins = 6,.logic = &logic_7407,.Input_Pins[0] = 1,.Input_Pins[1] = 3,.Input_Pins[2] = 5,.Input_Pins[3] = 7,.Input_Pins[4] = 9,.Input_Pins[5] = 11};

unsigned short logic_7408[] = {40960,45586,43273,49087};
IC_INFO IC_7408 = {.Name = 7408 ,.Direction = 15195 ,.NumOfPins = 14 ,.index_Input_Pins = 4,.logic = &logic_7408,.Input_Pins[0] = 2,.Input_Pins[1] = 5,.Input_Pins[2] = 7,.Input_Pins[3] = 10};

unsigned short logic_7409[] = {49087,43273,45586,40960};
IC_INFO IC_7409 = {.Name = 7409 ,.Direction = 15195 ,.NumOfPins = 14 ,.index_Input_Pins = 4,.logic = &logic_7409,.Input_Pins[0] = 2,.Input_Pins[1] = 5,.Input_Pins[2] = 7,.Input_Pins[3] = 10};

unsigned short logic_7410[] = {43168,47524,43689,48045,44210,48566,44731,46879};
IC_INFO IC_7410 = {.Name = 7410 ,.Direction = 14175 ,.NumOfPins = 14 ,.index_Input_Pins = 3,.logic = &logic_7410,.Input_Pins[0] = 5,.Input_Pins[1] = 7,.Input_Pins[2] = 11};

unsigned short logic_74107[] = {40994,42155,45602,45717,46634,46749};
IC_INFO IC_74107 = {.Name = 74107 ,.Direction = 16329 ,.NumOfPins = 14 ,.index_Input_Pins = 4,.logic = &logic_74107,.Input_Pins[0] = 1,.Input_Pins[1] = 2,.Input_Pins[2] = 4,.Input_Pins[3] = 5};

unsigned short logic_74109[] = {34128,46422,49697,63015,50513,58931,54837,63031};
IC_INFO IC_74109 = {.Name = 74109 ,.Direction = 64671 ,.NumOfPins = 16 ,.index_Input_Pins = 4,.logic = &logic_74109,.Input_Pins[0] = 10,.Input_Pins[1] = 0,.Input_Pins[2] = 8,.Input_Pins[3] = 9};

unsigned short logic_7411[] = {57344,46096,41482,41221,41743,46618,46357,49087};
IC_INFO IC_7411 = {.Name = 7411 ,.Direction = 14175 ,.NumOfPins = 14 ,.index_Input_Pins = 3,.logic = &logic_7411,.Input_Pins[0] = 5,.Input_Pins[1] = 7,.Input_Pins[2] = 11};

unsigned short logic_74112[] = {57616,60694,33384,33390,57960,59164,60010,61214};
IC_INFO IC_74112 = {.Name = 74112 ,.Direction = 65167 ,.NumOfPins = 16 ,.index_Input_Pins = 4,.logic = &logic_74112,.Input_Pins[0] = 10,.Input_Pins[1] = 0,.Input_Pins[2] = 6,.Input_Pins[3] = 8};

unsigned short logic_74113[] = {57616,44310,41752,41244,43690,44830};
IC_INFO IC_74113 = {.Name = 74113 ,.Direction = 15951 ,.NumOfPins = 14 ,.index_Input_Pins = 4,.logic = &logic_74113,.Input_Pins[0] = 4,.Input_Pins[1] = 5,.Input_Pins[2] = 7,.Input_Pins[3] = 8};

unsigned short logic_7412[] = {43168,47524,43689,48045,44210,48566,44731,46879};
IC_INFO IC_7412 = {.Name = 7412 ,.Direction = 14175 ,.NumOfPins = 14 ,.index_Input_Pins = 3,.logic = &logic_7412,.Input_Pins[0] = 5,.Input_Pins[1] = 7,.Input_Pins[2] = 11};

unsigned short logic_74123[] = {51272,52043,51786,53071,51272,52557};
IC_INFO IC_74123 = {.Name = 74123 ,.Direction = 34695 ,.NumOfPins = 16 ,.index_Input_Pins = 8,.logic = &logic_74123,.Input_Pins[0] = 10,.Input_Pins[1] = 0,.Input_Pins[2] = 5,.Input_Pins[3] = 6,.Input_Pins[4] = 11,.Input_Pins[5] = 12,.Input_Pins[6] = 13,.Input_Pins[7] = 14};

unsigned short logic_74125[] = {60854,40960,46765,49087,48829,47023,48815,47037};
IC_INFO IC_74125 = {.Name = 74125 ,.Direction = 15195 ,.NumOfPins = 14 ,.index_Input_Pins = 4,.logic = &logic_74125,.Input_Pins[0] = 2,.Input_Pins[1] = 5,.Input_Pins[2] = 7,.Input_Pins[3] = 10};

unsigned short logic_74126[] = {49087,45577,42148,44470};
IC_INFO IC_74126 = {.Name = 74126 ,.Direction = 15195 ,.NumOfPins = 14 ,.index_Input_Pins = 4,.logic = &logic_74126,.Input_Pins[0] = 2,.Input_Pins[1] = 5,.Input_Pins[2] = 7,.Input_Pins[3] = 10};

unsigned short logic_7413[] = {41120,41377,41634,41891,43176,43433,43690,43947,48927};
IC_INFO IC_7413 = {.Name = 7413 ,.Direction = 16223 ,.NumOfPins = 14 ,.index_Input_Pins = 2,.logic = &logic_7413,.Input_Pins[0] = 5,.Input_Pins[1] = 7};

unsigned short logic_74132[] = {42148,44461,46774,47899};
IC_INFO IC_74132 = {.Name = 74132 ,.Direction = 15195 ,.NumOfPins = 14 ,.index_Input_Pins = 4,.logic = &logic_74132,.Input_Pins[0] = 2,.Input_Pins[1] = 5,.Input_Pins[2] = 7,.Input_Pins[3] = 10};

unsigned short logic_74133[] = {33024,33025,33027,36608,33039,33055,65280,33151,33663,34687,36735,40831,49023,65151};
IC_INFO IC_74133 = {.Name = 74133 ,.Direction = 65279 ,.NumOfPins = 16 ,.index_Input_Pins = 1,.logic = &logic_74133,.Input_Pins[0] = 10};

unsigned short logic_74136[] = {57344,44461,46774,47899};
IC_INFO IC_74136 = {.Name = 74136 ,.Direction = 15195 ,.NumOfPins = 14 ,.index_Input_Pins = 4,.logic = &logic_74136,.Input_Pins[0] = 2,.Input_Pins[1] = 5,.Input_Pins[2] = 7,.Input_Pins[3] = 10};

unsigned short logic_74137[] = {65407,65360,65375,65344,48992,57185,61282,63331,64356,64869,65126,65319};
IC_INFO IC_74137 = {.Name = 74137 ,.Direction = 32959 ,.NumOfPins = 16 ,.index_Input_Pins = 8,.logic = &logic_74137,.Input_Pins[0] = 10,.Input_Pins[1] = 0,.Input_Pins[2] = 9,.Input_Pins[3] = 10,.Input_Pins[4] = 11,.Input_Pins[5] = 12,.Input_Pins[6] = 13,.Input_Pins[7] = 14};

unsigned short logic_74138[] = {65407,65368,65375,65344,48992,57185,61282,63331,64356,64869,65126,65319};
IC_INFO IC_74138 = {.Name = 74138 ,.Direction = 32959 ,.NumOfPins = 16 ,.index_Input_Pins = 8,.logic = &logic_74138,.Input_Pins[0] = 10,.Input_Pins[1] = 0,.Input_Pins[2] = 9,.Input_Pins[3] = 10,.Input_Pins[4] = 11,.Input_Pins[5] = 12,.Input_Pins[6] = 13,.Input_Pins[7] = 14};

unsigned short logic_74139[] = {61309,57211,34672,43882,40284,48702};
IC_INFO IC_74139 = {.Name = 74139 ,.Direction = 61575 ,.NumOfPins = 16 ,.index_Input_Pins = 8,.logic = &logic_74139,.Input_Pins[0] = 10,.Input_Pins[1] = 0,.Input_Pins[2] = 5,.Input_Pins[3] = 6,.Input_Pins[4] = 8,.Input_Pins[5] = 9,.Input_Pins[6] = 10,.Input_Pins[7] = 11};

unsigned short logic_7414[] = {43690,46357};
IC_INFO IC_7414 = {.Name = 7414 ,.Direction = 13653 ,.NumOfPins = 14 ,.index_Input_Pins = 6,.logic = &logic_7414,.Input_Pins[0] = 1,.Input_Pins[1] = 3,.Input_Pins[2] = 5,.Input_Pins[3] = 7,.Input_Pins[4] = 9,.Input_Pins[5] = 11};

unsigned short logic_74140[] = {41120,41377,41634,41891,43176,43433,43690,43947,48927};
IC_INFO IC_74140 = {.Name = 74140 ,.Direction = 16223 ,.NumOfPins = 14 ,.index_Input_Pins = 2,.logic = &logic_74140,.Input_Pins[0] = 5,.Input_Pins[1] = 7};

unsigned short logic_74145[] = {34686,51069,42875,59255,38767,55135,46911,63103,36223,52095,44927,61311,40831,57215,49023,65407};
IC_INFO IC_74145 = {.Name = 74145 ,.Direction = 63616 ,.NumOfPins = 16 ,.index_Input_Pins = 10,.logic = &logic_74145,.Input_Pins[0] = 10,.Input_Pins[1] = 0,.Input_Pins[2] = 2,.Input_Pins[3] = 3,.Input_Pins[4] = 4,.Input_Pins[5] = 5,.Input_Pins[6] = 6,.Input_Pins[7] = 8,.Input_Pins[8] = 9,.Input_Pins[9] = 10};

unsigned short logic_74147[] = {49023,40063,40815,48663,48923,48733,48990,44607,46911,47743};
IC_INFO IC_74147 = {.Name = 74147 ,.Direction = 56991 ,.NumOfPins = 16 ,.index_Input_Pins = 4,.logic = &logic_74147,.Input_Pins[0] = 10,.Input_Pins[1] = 0,.Input_Pins[2] = 8,.Input_Pins[3] = 13};

unsigned short logic_74148[] = {62842,49007,54277,51978,54349,52046,51759,54575,55919,56687};
IC_INFO IC_74148 = {.Name = 74148 ,.Direction = 40607 ,.NumOfPins = 16 ,.index_Input_Pins = 5,.logic = &logic_74148,.Input_Pins[0] = 10,.Input_Pins[1] = 0,.Input_Pins[2] = 8,.Input_Pins[3] = 13,.Input_Pins[4] = 14};

unsigned short logic_7415[] = {57344,45316,41481,45837,42002,46358,42523,49087};
IC_INFO IC_7415 = {.Name = 7415 ,.Direction = 14175 ,.NumOfPins = 14 ,.index_Input_Pins = 3,.logic = &logic_7415,.Input_Pins[0] = 5,.Input_Pins[1] = 7,.Input_Pins[2] = 11};

unsigned short logic_74151[] = {54634,43621,63527,32792,64555,33812,64045,33298,65070,34321,47407,49424,56623,42256,60207,37648,63279,36624};
IC_INFO IC_74151 = {.Name = 74151 ,.Direction = 65487 ,.NumOfPins = 16 ,.index_Input_Pins = 2,.logic = &logic_74151,.Input_Pins[0] = 10,.Input_Pins[1] = 0};

unsigned short logic_74153[] = {59945,54295,51732,54376,59944,62550,51734,54378,59946,62550,37929,35605,43561,46357,37419,36119,43563,46359};
IC_INFO IC_74153 = {.Name = 74153 ,.Direction = 65215 ,.NumOfPins = 16 ,.index_Input_Pins = 2,.logic = &logic_74153,.Input_Pins[0] = 10,.Input_Pins[1] = 0};

unsigned short logic_74157[] = {49023,53797,32768,37412,44378,49022,32769,42003,39789,58386};
IC_INFO IC_74157 = {.Name = 74157 ,.Direction = 63159 ,.NumOfPins = 16 ,.index_Input_Pins = 4,.logic = &logic_74157,.Input_Pins[0] = 10,.Input_Pins[1] = 0,.Input_Pins[2] = 8,.Input_Pins[3] = 11};

unsigned short logic_74158[] = {56154,60781,35144,39788,42002,46646,35145,44379,37413,46647};
IC_INFO IC_74158 = {.Name = 74158 ,.Direction = 63159 ,.NumOfPins = 16 ,.index_Input_Pins = 4,.logic = &logic_74158,.Input_Pins[0] = 10,.Input_Pins[1] = 0,.Input_Pins[2] = 8,.Input_Pins[3] = 11};

unsigned short logic_7416[] = {43690,46357};
IC_INFO IC_7416 = {.Name = 7416 ,.Direction = 13653 ,.NumOfPins = 14 ,.index_Input_Pins = 6,.logic = &logic_7416,.Input_Pins[0] = 1,.Input_Pins[1] = 3,.Input_Pins[2] = 5,.Input_Pins[3] = 7,.Input_Pins[4] = 9,.Input_Pins[5] = 11};

unsigned short logic_74160[] = {32768,33600,47709,34625,59229,33601,41793,37697,45889,35649,43841,39747,39745,33600};
IC_INFO IC_74160 = {.Name = 74160 ,.Direction = 33791 ,.NumOfPins = 16 ,.index_Input_Pins = 5,.logic = &logic_74160,.Input_Pins[0] = 10,.Input_Pins[1] = 0,.Input_Pins[2] = 12,.Input_Pins[3] = 13,.Input_Pins[4] = 14};

unsigned short logic_74161[] = {32770,33602,33089,33537,33025,32769,36465,44865,40769,65345,33601,41793,37699,37697,33600,33601};
IC_INFO IC_74161 = {.Name = 74161 ,.Direction = 33791 ,.NumOfPins = 16 ,.index_Input_Pins = 5,.logic = &logic_74161,.Input_Pins[0] = 10,.Input_Pins[1] = 0,.Input_Pins[2] = 12,.Input_Pins[3] = 13,.Input_Pins[4] = 14};

unsigned short logic_74162[] = {32770,32768,32768,33540,33089,33537,33536,47133,34673,59201,33601,41793,37697,45891,45890,45888,33602,33601};
IC_INFO IC_74162 = {.Name = 74162 ,.Direction = 65535 ,.NumOfPins = 16 ,.index_Input_Pins = 0,.logic = &logic_74162};

unsigned short logic_74163[] = {32770,32769,32768,33540,36465,44865,40769,65345,33601,41793,37697,45889,35649,43843,43842,43840,33602};
IC_INFO IC_74163 = {.Name = 74163 ,.Direction = 65535 ,.NumOfPins = 16 ,.index_Input_Pins = 0,.logic = &logic_74163};

unsigned short logic_74164[] = {40960,40963,41216,41223,41231,41240,41266,41761};
IC_INFO IC_74164 = {.Name = 74164 ,.Direction = 8643 ,.NumOfPins = 14 ,.index_Input_Pins = 8,.logic = &logic_74164,.Input_Pins[0] = 2,.Input_Pins[1] = 3,.Input_Pins[2] = 4,.Input_Pins[3] = 5,.Input_Pins[4] = 9,.Input_Pins[5] = 10,.Input_Pins[6] = 11,.Input_Pins[7] = 12};

unsigned short logic_74165[] = {32832,32840,32841,33361,33569,33345};
IC_INFO IC_74165 = {.Name = 74165 ,.Direction = 65215 ,.NumOfPins = 16 ,.index_Input_Pins = 2,.logic = &logic_74165,.Input_Pins[0] = 10,.Input_Pins[1] = 0};

unsigned short logic_74166[] = {32768,60959,33024,61215,33024,48927,53505,65311,53504,65310,53537,48958};
IC_INFO IC_74166 = {.Name = 74166 ,.Direction = 61439 ,.NumOfPins = 16 ,.index_Input_Pins = 1,.logic = &logic_74166,.Input_Pins[0] = 10};

unsigned short logic_7417[] = {49087,40960};
IC_INFO IC_7417 = {.Name = 7417 ,.Direction = 13653 ,.NumOfPins = 14 ,.index_Input_Pins = 6,.logic = &logic_7417,.Input_Pins[0] = 1,.Input_Pins[1] = 3,.Input_Pins[2] = 5,.Input_Pins[3] = 7,.Input_Pins[4] = 9,.Input_Pins[5] = 11};

unsigned short logic_74173[] = {49152,65280,37928,43304,43560,43816,43028,38164,38420,38676,37928,35888,65280,45068,65280};
IC_INFO IC_74173 = {.Name = 74173 ,.Direction = 65475 ,.NumOfPins = 16 ,.index_Input_Pins = 4,.logic = &logic_74173,.Input_Pins[0] = 10,.Input_Pins[1] = 0,.Input_Pins[2] = 4,.Input_Pins[3] = 5};

unsigned short logic_74174[] = {32768,46124,39015,58905,65151,46124};
IC_INFO IC_74174 = {.Name = 74174 ,.Direction = 46509 ,.NumOfPins = 16 ,.index_Input_Pins = 6,.logic = &logic_74174,.Input_Pins[0] = 10,.Input_Pins[1] = 0,.Input_Pins[2] = 6,.Input_Pins[3] = 9,.Input_Pins[4] = 11,.Input_Pins[5] = 14};

unsigned short logic_74175[] = {42020,48188,55899,42021};
IC_INFO IC_74175 = {.Name = 74175 ,.Direction = 39321 ,.NumOfPins = 16 ,.index_Input_Pins = 8,.logic = &logic_74175,.Input_Pins[0] = 10,.Input_Pins[1] = 0,.Input_Pins[2] = 5,.Input_Pins[3] = 6,.Input_Pins[4] = 9,.Input_Pins[5] = 10,.Input_Pins[6] = 13,.Input_Pins[7] = 14};

unsigned short logic_7418[] = {41120,41377,41634,41891,43176,43433,43690,43947,48927};
IC_INFO IC_7418 = {.Name = 7418 ,.Direction = 16223 ,.NumOfPins = 14 ,.index_Input_Pins = 2,.logic = &logic_7418,.Input_Pins[0] = 5,.Input_Pins[1] = 7};

unsigned short logic_74182[] = {39795,41493};
IC_INFO IC_74182 = {.Name = 74182 ,.Direction = 61631 ,.NumOfPins = 16 ,.index_Input_Pins = 5,.logic = &logic_74182,.Input_Pins[0] = 10,.Input_Pins[1] = 0,.Input_Pins[2] = 9,.Input_Pins[3] = 10,.Input_Pins[4] = 11};

unsigned short logic_74190[] = {36864,37896,37892,37890,37894,37920,37910,37906,37908};
IC_INFO IC_74190 = {.Name = 74190 ,.Direction = 59289 ,.NumOfPins = 16 ,.index_Input_Pins = 6,.logic = &logic_74190,.Input_Pins[0] = 10,.Input_Pins[1] = 0,.Input_Pins[2] = 5,.Input_Pins[3] = 6,.Input_Pins[4] = 11,.Input_Pins[5] = 12};

unsigned short logic_74191[] = {36864,37896,37892,37890,37894,37920,37910,37906,37908};
IC_INFO IC_74191 = {.Name = 74191 ,.Direction = 59289 ,.NumOfPins = 16 ,.index_Input_Pins = 6,.logic = &logic_74191,.Input_Pins[0] = 10,.Input_Pins[1] = 0,.Input_Pins[2] = 5,.Input_Pins[3] = 6,.Input_Pins[4] = 11,.Input_Pins[5] = 12};

unsigned short logic_74192[] = {48408,40216,39256,40280,40264,40284,38220};
IC_INFO IC_74192 = {.Name = 74192 ,.Direction = 65433 ,.NumOfPins = 16 ,.index_Input_Pins = 4,.logic = &logic_74192,.Input_Pins[0] = 10,.Input_Pins[1] = 0,.Input_Pins[2] = 5,.Input_Pins[3] = 6};

unsigned short logic_74193[] = {39259,55868,56191,57203,57205,57201,57175,57171,57173,57169,57143,57139,57141,57137,57111,57107,57109,57113,53009,57215,55151,57113,57101,57099,57103,57129,57133,57131,57135,57161,57113};
IC_INFO IC_74193 = {.Name = 74193 ,.Direction = 59289 ,.NumOfPins = 16 ,.index_Input_Pins = 6,.logic = &logic_74193,.Input_Pins[0] = 10,.Input_Pins[1] = 0,.Input_Pins[2] = 5,.Input_Pins[3] = 6,.Input_Pins[4] = 11,.Input_Pins[5] = 12};

unsigned short logic_74194[] = {32768,33662,32769,64383,64317,33603,49471,57667,61763,63811,47361,39293,47681,64127,61953,57919,57345,57471,51839,39551,47743,64127,33662};
IC_INFO IC_74194 = {.Name = 74194 ,.Direction = 34815 ,.NumOfPins = 16 ,.index_Input_Pins = 4,.logic = &logic_74194,.Input_Pins[0] = 10,.Input_Pins[1] = 0,.Input_Pins[2] = 13,.Input_Pins[3] = 14};

unsigned short logic_74195[] = {33792,33793,34049,34053,34049,50439,42243};
IC_INFO IC_74195 = {.Name = 74195 ,.Direction = 33791 ,.NumOfPins = 16 ,.index_Input_Pins = 5,.logic = &logic_74195,.Input_Pins[0] = 10,.Input_Pins[1] = 0,.Input_Pins[2] = 12,.Input_Pins[3] = 13,.Input_Pins[4] = 14};

unsigned short logic_7420[] = {41120,41377,41634,41891,43176,43433,43690,43947,48927};
IC_INFO IC_7420 = {.Name = 7420 ,.Direction = 16223 ,.NumOfPins = 14 ,.index_Input_Pins = 2,.logic = &logic_7420,.Input_Pins[0] = 5,.Input_Pins[1] = 7};

unsigned short logic_7421[] = {48059,45586,43273,40960};
IC_INFO IC_7421 = {.Name = 7421 ,.Direction = 16223 ,.NumOfPins = 14 ,.index_Input_Pins = 2,.logic = &logic_7421,.Input_Pins[0] = 5,.Input_Pins[1] = 7};

unsigned short logic_7422[] = {41120,41377,41634,41891,43176,43433,43690,43947,45232,45489,45746,46003,47288,47545,47802,47899};
IC_INFO IC_7422 = {.Name = 7422 ,.Direction = 16223 ,.NumOfPins = 14 ,.index_Input_Pins = 2,.logic = &logic_7422,.Input_Pins[0] = 5,.Input_Pins[1] = 7};

unsigned short logic_74237[] = {32784,32792,49184,40993,36898,34851,33828,33317,33062,32871};
IC_INFO IC_74237 = {.Name = 74237 ,.Direction = 65535 ,.NumOfPins = 16 ,.index_Input_Pins = 0,.logic = &logic_74237};

unsigned short logic_74242[] = {45117,46977,42880,41020};
IC_INFO IC_74242 = {.Name = 74242 ,.Direction = 16323 ,.NumOfPins = 14 ,.index_Input_Pins = 4,.logic = &logic_74242,.Input_Pins[0] = 2,.Input_Pins[1] = 3,.Input_Pins[2] = 4,.Input_Pins[3] = 5};

unsigned short logic_74243[] = {47037,45057,42940,40960};
IC_INFO IC_74243 = {.Name = 74243 ,.Direction = 16323 ,.NumOfPins = 14 ,.index_Input_Pins = 4,.logic = &logic_74243,.Input_Pins[0] = 2,.Input_Pins[1] = 3,.Input_Pins[2] = 4,.Input_Pins[3] = 5};

unsigned short logic_7425[] = {42245,42502,42759,44044,44301,44558,44815,46100,46357,46614,46871,48156,48413,48670,48927,42148};
IC_INFO IC_7425 = {.Name = 7425 ,.Direction = 16223 ,.NumOfPins = 14 ,.index_Input_Pins = 2,.logic = &logic_7425,.Input_Pins[0] = 5,.Input_Pins[1] = 7};

unsigned short logic_74251[] = {43045,54293,53797,54805,53525,54565,54037,55077};
IC_INFO IC_74251 = {.Name = 74251 ,.Direction = 65487 ,.NumOfPins = 16 ,.index_Input_Pins = 2,.logic = &logic_74251,.Input_Pins[0] = 10,.Input_Pins[1] = 0};

unsigned short logic_74253[] = {49473,65407,32768,33632,40960,42320,32770,35146};
IC_INFO IC_74253 = {.Name = 74253 ,.Direction = 65215 ,.NumOfPins = 16 ,.index_Input_Pins = 2,.logic = &logic_74253,.Input_Pins[0] = 10,.Input_Pins[1] = 0};

unsigned short logic_74257[] = {51528,65407,32768,37412,44378,49022,32769,42003,39789,49023};
IC_INFO IC_74257 = {.Name = 74257 ,.Direction = 63159 ,.NumOfPins = 16 ,.index_Input_Pins = 4,.logic = &logic_74257,.Input_Pins[0] = 10,.Input_Pins[1] = 0,.Input_Pins[2] = 8,.Input_Pins[3] = 11};

unsigned short logic_74258[] = {51528,65407,35144,39788,42002,46646,35145,44379,37413,46647};
IC_INFO IC_74258 = {.Name = 74258 ,.Direction = 63159 ,.NumOfPins = 16 ,.index_Input_Pins = 4,.logic = &logic_74258,.Input_Pins[0] = 10,.Input_Pins[1] = 0,.Input_Pins[2] = 8,.Input_Pins[3] = 11};

unsigned short logic_74259[] = {40961,45058,45060,36872,36881,36898,36931,37124};
IC_INFO IC_74259 = {.Name = 74259 ,.Direction = 61575 ,.NumOfPins = 16 ,.index_Input_Pins = 8,.logic = &logic_74259,.Input_Pins[0] = 10,.Input_Pins[1] = 0,.Input_Pins[2] = 5,.Input_Pins[3] = 6,.Input_Pins[4] = 8,.Input_Pins[5] = 9,.Input_Pins[6] = 10,.Input_Pins[7] = 11};

unsigned short logic_7426[] = {42148,46765,44470,47899};
IC_INFO IC_7426 = {.Name = 7426 ,.Direction = 15195 ,.NumOfPins = 14 ,.index_Input_Pins = 4,.logic = &logic_7426,.Input_Pins[0] = 2,.Input_Pins[1] = 5,.Input_Pins[2] = 7,.Input_Pins[3] = 10};

unsigned short logic_74260[] = {41008,45701,44298,48523,44548,49039,41089,46855,43910,47501};
IC_INFO IC_74260 = {.Name = 74260 ,.Direction = 16335 ,.NumOfPins = 14 ,.index_Input_Pins = 2,.logic = &logic_74260,.Input_Pins[0] = 4,.Input_Pins[1] = 5};

unsigned short logic_74266[] = {42508,43153,45346,49087};
IC_INFO IC_74266 = {.Name = 74266 ,.Direction = 14835 ,.NumOfPins = 14 ,.index_Input_Pins = 4,.logic = &logic_74266,.Input_Pins[0] = 2,.Input_Pins[1] = 3,.Input_Pins[2] = 9,.Input_Pins[3] = 10};

unsigned short logic_7427[] = {43168,45316,41481,45837,42002,46357,42523,46879};
IC_INFO IC_7427 = {.Name = 7427 ,.Direction = 14175 ,.NumOfPins = 14 ,.index_Input_Pins = 3,.logic = &logic_7427,.Input_Pins[0] = 5,.Input_Pins[1] = 7,.Input_Pins[2] = 11};

unsigned short logic_7428[] = {45577,42130,43300,44470};
IC_INFO IC_7428 = {.Name = 7428 ,.Direction = 11766 ,.NumOfPins = 14 ,.index_Input_Pins = 4,.logic = &logic_7428,.Input_Pins[0] = 0,.Input_Pins[1] = 3,.Input_Pins[2] = 9,.Input_Pins[3] = 12};

unsigned short logic_74280[] = {46377,43666,49067,40976,45227,48928,45859,42648};
IC_INFO IC_74280 = {.Name = 74280 ,.Direction = 16335 ,.NumOfPins = 14 ,.index_Input_Pins = 2,.logic = &logic_74280,.Input_Pins[0] = 4,.Input_Pins[1] = 5};

unsigned short logic_74283[] = {32768,32840,65407,47661,57905,40270};
IC_INFO IC_74283 = {.Name = 74283 ,.Direction = 60918 ,.NumOfPins = 16 ,.index_Input_Pins = 4,.logic = &logic_74283,.Input_Pins[0] = 10,.Input_Pins[1] = 0,.Input_Pins[2] = 9,.Input_Pins[3] = 12};

unsigned short logic_74292[] = {32769,33793,33793,33857,33857,33793};
IC_INFO IC_74292 = {.Name = 74292 ,.Direction = 65535 ,.NumOfPins = 16 ,.index_Input_Pins = 0,.logic = &logic_74292};

unsigned short logic_74293[] = {48640,42496,42240,42752,41744,42768,41736,42760,41752,42776,41856,42880};
IC_INFO IC_74293 = {.Name = 74293 ,.Direction = 15975 ,.NumOfPins = 14 ,.index_Input_Pins = 4,.logic = &logic_74293,.Input_Pins[0] = 3,.Input_Pins[1] = 4,.Input_Pins[2] = 7,.Input_Pins[3] = 8};

unsigned short logic_74294[] = {32769,33793,33793,33857,33857,33793,33793,33857,33857};
IC_INFO IC_74294 = {.Name = 74294 ,.Direction = 65535 ,.NumOfPins = 16 ,.index_Input_Pins = 0,.logic = &logic_74294};

unsigned short logic_74298[] = {53541,43813};
IC_INFO IC_74298 = {.Name = 74298 ,.Direction = 34815 ,.NumOfPins = 16 ,.index_Input_Pins = 4,.logic = &logic_74298,.Input_Pins[0] = 10,.Input_Pins[1] = 0,.Input_Pins[2] = 13,.Input_Pins[3] = 14};

unsigned short logic_7430[] = {44095,44222,44221,44219,44215,44207,44191,43199,42175,41089};
IC_INFO IC_7430 = {.Name = 7430 ,.Direction = 16255 ,.NumOfPins = 14 ,.index_Input_Pins = 1,.logic = &logic_7430,.Input_Pins[0] = 7};

unsigned short logic_7432[] = {40960,44470,46765,49087};
IC_INFO IC_7432 = {.Name = 7432 ,.Direction = 15195 ,.NumOfPins = 14 ,.index_Input_Pins = 4,.logic = &logic_7432,.Input_Pins[0] = 2,.Input_Pins[1] = 5,.Input_Pins[2] = 7,.Input_Pins[3] = 10};

unsigned short logic_74365[] = {65407,65406,49022,32768,49023,65406,38229,54612};
IC_INFO IC_74365 = {.Name = 74365 ,.Direction = 60075 ,.NumOfPins = 16 ,.index_Input_Pins = 6,.logic = &logic_74365,.Input_Pins[0] = 10,.Input_Pins[1] = 0,.Input_Pins[2] = 6,.Input_Pins[3] = 8,.Input_Pins[4] = 10,.Input_Pins[5] = 12};

unsigned short logic_74366[] = {38229,54612,65407,65406,43562,38228};
IC_INFO IC_74366 = {.Name = 74366 ,.Direction = 60075 ,.NumOfPins = 16 ,.index_Input_Pins = 6,.logic = &logic_74366,.Input_Pins[0] = 10,.Input_Pins[1] = 0,.Input_Pins[2] = 6,.Input_Pins[3] = 8,.Input_Pins[4] = 10,.Input_Pins[5] = 12};

unsigned short logic_74367[] = {65407,32768,49022,32864,33282};
IC_INFO IC_74367 = {.Name = 74367 ,.Direction = 60075 ,.NumOfPins = 16 ,.index_Input_Pins = 6,.logic = &logic_74367,.Input_Pins[0] = 10,.Input_Pins[1] = 0,.Input_Pins[2] = 6,.Input_Pins[3] = 8,.Input_Pins[4] = 10,.Input_Pins[5] = 12};

unsigned short logic_74368[] = {65407,38229,38228,43562};
IC_INFO IC_74368 = {.Name = 74368 ,.Direction = 60075 ,.NumOfPins = 16 ,.index_Input_Pins = 6,.logic = &logic_74368,.Input_Pins[0] = 10,.Input_Pins[1] = 0,.Input_Pins[2] = 6,.Input_Pins[3] = 8,.Input_Pins[4] = 10,.Input_Pins[5] = 12};

unsigned short logic_7437[] = {42148,44461,46774,47899};
IC_INFO IC_7437 = {.Name = 7437 ,.Direction = 15195 ,.NumOfPins = 14 ,.index_Input_Pins = 4,.logic = &logic_7437,.Input_Pins[0] = 2,.Input_Pins[1] = 5,.Input_Pins[2] = 7,.Input_Pins[3] = 10};

unsigned short logic_74375[] = {43562,56669,54613,37908};
IC_INFO IC_74375 = {.Name = 74375 ,.Direction = 51657 ,.NumOfPins = 16 ,.index_Input_Pins = 8,.logic = &logic_74375,.Input_Pins[0] = 10,.Input_Pins[1] = 0,.Input_Pins[2] = 4,.Input_Pins[3] = 5,.Input_Pins[4] = 9,.Input_Pins[5] = 10,.Input_Pins[6] = 12,.Input_Pins[7] = 13};

unsigned short logic_7438[] = {42148,44461,46774,47899};
IC_INFO IC_7438 = {.Name = 7438 ,.Direction = 15195 ,.NumOfPins = 14 ,.index_Input_Pins = 4,.logic = &logic_7438,.Input_Pins[0] = 2,.Input_Pins[1] = 5,.Input_Pins[2] = 7,.Input_Pins[3] = 10};

unsigned short logic_74386[] = {40960,44701,46894,47539};
IC_INFO IC_74386 = {.Name = 74386 ,.Direction = 14835 ,.NumOfPins = 14 ,.index_Input_Pins = 4,.logic = &logic_74386,.Input_Pins[0] = 2,.Input_Pins[1] = 3,.Input_Pins[2] = 9,.Input_Pins[3] = 10};

unsigned short logic_74390[] = {40962,32768,36868,33808,37908,33312,37412,34352,38452,33088,37188,32768};
IC_INFO IC_74390 = {.Name = 74390 ,.Direction = 65535 ,.NumOfPins = 16 ,.index_Input_Pins = 0,.logic = &logic_74390};

unsigned short logic_74393[] = {40960,40960,40960,47107,45057,41988,46085,41480,45577,42508,46605,41232,45329,42260,46357};
IC_INFO IC_74393 = {.Name = 74393 ,.Direction = 16383 ,.NumOfPins = 14 ,.index_Input_Pins = 0,.logic = &logic_74393};

unsigned short logic_7440[] = {41120,41377,41634,41891,43176,43433,43690,43947,48927};
IC_INFO IC_7440 = {.Name = 7440 ,.Direction = 16223 ,.NumOfPins = 14 ,.index_Input_Pins = 2,.logic = &logic_7440,.Input_Pins[0] = 5,.Input_Pins[1] = 7};

unsigned short logic_7442[] = {34686,51069,42875,59255,38767,55135,46911,63103,36223,52095};
IC_INFO IC_7442 = {.Name = 7442 ,.Direction = 63616 ,.NumOfPins = 16 ,.index_Input_Pins = 10,.logic = &logic_7442,.Input_Pins[0] = 10,.Input_Pins[1] = 0,.Input_Pins[2] = 2,.Input_Pins[3] = 3,.Input_Pins[4] = 4,.Input_Pins[5] = 5,.Input_Pins[6] = 6,.Input_Pins[7] = 8,.Input_Pins[8] = 9,.Input_Pins[9] = 10};

unsigned short logic_7446[] = {40988,62284,50205,49485,37662,35150,38943,58191,32828,33644};
IC_INFO IC_7446 = {.Name = 7446 ,.Direction = 33015 ,.NumOfPins = 16 ,.index_Input_Pins = 8,.logic = &logic_7446,.Input_Pins[0] = 10,.Input_Pins[1] = 0,.Input_Pins[2] = 9,.Input_Pins[3] = 10,.Input_Pins[4] = 11,.Input_Pins[5] = 12,.Input_Pins[6] = 13,.Input_Pins[7] = 14};

unsigned short logic_7447[] = {40988,62284,50205,49485,37662,35150,38943,58191,32828,33644};
IC_INFO IC_7447 = {.Name = 7447 ,.Direction = 33015 ,.NumOfPins = 16 ,.index_Input_Pins = 8,.logic = &logic_7447,.Input_Pins[0] = 10,.Input_Pins[1] = 0,.Input_Pins[2] = 9,.Input_Pins[3] = 10,.Input_Pins[4] = 11,.Input_Pins[5] = 12,.Input_Pins[6] = 13,.Input_Pins[7] = 14};

unsigned short logic_7450[] = {43168,47903,43435,47129};
IC_INFO IC_7450 = {.Name = 7450 ,.Direction = 16223 ,.NumOfPins = 14 ,.index_Input_Pins = 2,.logic = &logic_7450,.Input_Pins[0] = 5,.Input_Pins[1] = 7};

unsigned short logic_7451[] = {45857,45730,41381,41094,41384,41776,41624,41133,45107,45214};
IC_INFO IC_7451 = {.Name = 7451 ,.Direction = 16223 ,.NumOfPins = 14 ,.index_Input_Pins = 2,.logic = &logic_7451,.Input_Pins[0] = 5,.Input_Pins[1] = 7};

unsigned short logic_7455[] = {41231,48896,48001,47490,46979,46468,45957,45446,44935,44424};
IC_INFO IC_7455 = {.Name = 7455 ,.Direction = 16255 ,.NumOfPins = 14 ,.index_Input_Pins = 1,.logic = &logic_7455,.Input_Pins[0] = 7};

unsigned short logic_7458[] = {49087,47271,40960};
IC_INFO IC_7458 = {.Name = 7458 ,.Direction = 16223 ,.NumOfPins = 14 ,.index_Input_Pins = 2,.logic = &logic_7458,.Input_Pins[0] = 5,.Input_Pins[1] = 7};

unsigned short logic_74589[] = {45653,41813,45909,45653,45909,37461,37717};
IC_INFO IC_74589 = {.Name = 74589 ,.Direction = 65535 ,.NumOfPins = 16 ,.index_Input_Pins = 0,.logic = &logic_74589};

unsigned short logic_74595[] = {32768,33280,41472,41472,41472,41472,57863};
IC_INFO IC_74595 = {.Name = 74595 ,.Direction = 65535 ,.NumOfPins = 16 ,.index_Input_Pins = 0,.logic = &logic_74595};

unsigned short logic_74597[] = {45141,41557,41557,45909,45653};
IC_INFO IC_74597 = {.Name = 74597 ,.Direction = 65535 ,.NumOfPins = 16 ,.index_Input_Pins = 0,.logic = &logic_74597};

unsigned short logic_7460[] = {46783,43413,47402,43264};
IC_INFO IC_7460 = {.Name = 7460 ,.Direction = 12543 ,.NumOfPins = 14 ,.index_Input_Pins = 4,.logic = &logic_7460,.Input_Pins[0] = 8,.Input_Pins[1] = 9,.Input_Pins[2] = 10,.Input_Pins[3] = 11};

unsigned short logic_7461[] = {49087,46101,43050,40960,41223,41144,48640};
IC_INFO IC_7461 = {.Name = 7461 ,.Direction = 15487 ,.NumOfPins = 14 ,.index_Input_Pins = 3,.logic = &logic_7461,.Input_Pins[0] = 7,.Input_Pins[1] = 8,.Input_Pins[2] = 9};

unsigned short logic_7462[] = {49055,40992,41091,41116,42880,47232,46389,43562};
IC_INFO IC_7462 = {.Name = 7462 ,.Direction = 16223 ,.NumOfPins = 14 ,.index_Input_Pins = 2,.logic = &logic_7462,.Input_Pins[0] = 5,.Input_Pins[1] = 7};

unsigned short logic_7465[] = {41088,46506,43669,48959,40966,41016,42752,47105};
IC_INFO IC_7465 = {.Name = 7465 ,.Direction = 16255 ,.NumOfPins = 14 ,.index_Input_Pins = 1,.logic = &logic_7465,.Input_Pins[0] = 7};

unsigned short logic_7472[] = {45116,42882,45186,45442,45954,46882,45090,45094,45102,45214,46910,47006,46746};
IC_INFO IC_7472 = {.Name = 7472 ,.Direction = 16223 ,.NumOfPins = 14 ,.index_Input_Pins = 2,.logic = &logic_7472,.Input_Pins[0] = 5,.Input_Pins[1] = 7};

unsigned short logic_7474[] = {41642,41617,41641,41627,43688,45352,45736,47912};
IC_INFO IC_7474 = {.Name = 7474 ,.Direction = 15951 ,.NumOfPins = 14 ,.index_Input_Pins = 4,.logic = &logic_7474,.Input_Pins[0] = 4,.Input_Pins[1] = 5,.Input_Pins[2] = 7,.Input_Pins[3] = 8};

unsigned short logic_7475[] = {13465,9361,42226,17653,50422,49840,50512,50032};
IC_INFO IC_7475 = {.Name = 7475 ,.Direction = 6270 ,.NumOfPins = 16 ,.index_Input_Pins = 8,.logic = &logic_7475,.Input_Pins[0] = 10,.Input_Pins[1] = 0,.Input_Pins[2] = 8,.Input_Pins[3] = 9,.Input_Pins[4] = 10,.Input_Pins[5] = 13,.Input_Pins[6] = 14,.Input_Pins[7] = 15};

unsigned short logic_7485[] = {59922,38217,54547,43592,51475,46664,52755,45384,52249,45890,52261,45834};
IC_INFO IC_7485 = {.Name = 7485 ,.Direction = 65423 ,.NumOfPins = 16 ,.index_Input_Pins = 3,.logic = &logic_7485,.Input_Pins[0] = 10,.Input_Pins[1] = 0,.Input_Pins[2] = 6};

unsigned short logic_7486[] = {40960,46774,44461,47899};
IC_INFO IC_7486 = {.Name = 7486 ,.Direction = 15195 ,.NumOfPins = 14 ,.index_Input_Pins = 4,.logic = &logic_7486,.Input_Pins[0] = 2,.Input_Pins[1] = 5,.Input_Pins[2] = 7,.Input_Pins[3] = 10};

IC_INFO *ICs[] = {&IC_4000,&IC_4001,&IC_4002,&IC_4009,&IC_4010,&IC_40106,&IC_4011,&IC_4012,&IC_4013,&IC_4015,&IC_4016,&IC_40161,&IC_40162,&IC_4017,&IC_40174,&IC_40175,&IC_4018,&IC_4019,&IC_40192,&IC_40193,&IC_4020,&IC_4022,
	&IC_4023,&IC_4024,&IC_4025,&IC_4027,&IC_4028,&IC_4029,&IC_4030,&IC_4031,&IC_4040,&IC_4041,&IC_4042,&IC_4043,&IC_4044,&IC_4048,&IC_4049,&IC_4051,&IC_4053,&IC_4066,&IC_4068,&IC_4069,&IC_4070,&IC_4071,&IC_4072,&IC_4073,
	&IC_4075,&IC_4076,&IC_4077,&IC_4078,&IC_4081,&IC_4082,&IC_4093,&IC_4094,&IC_4098,&IC_4503,&IC_4510,&IC_4511,&IC_4512,&IC_4518,&IC_4519,&IC_4520,&IC_4529,&IC_4532,&IC_4543,&IC_4572,&IC_7400,&IC_7401,&IC_7402,&IC_7403,
	&IC_7404,&IC_7405,&IC_7406,&IC_7407,&IC_7408,&IC_7409,&IC_7410,&IC_74107,&IC_74109,&IC_7411,&IC_74112,&IC_74113,&IC_7412,&IC_74123,&IC_74125,&IC_74126,&IC_7413,&IC_74132,&IC_74133,&IC_74136,&IC_74137,&IC_74138,&IC_74139,
	&IC_7414,&IC_74140,&IC_74145,&IC_74147,&IC_74148,&IC_7415,&IC_74151,&IC_74153,&IC_74157,&IC_74158,&IC_7416,&IC_74160,&IC_74161,&IC_74162,&IC_74163,&IC_74164,&IC_74165,&IC_74166,&IC_7417,&IC_74173,&IC_74174,&IC_74175,
	&IC_7418,&IC_74182,&IC_74190,&IC_74191,&IC_74192,&IC_74193,&IC_74194,&IC_74195,&IC_7420,&IC_7421,&IC_7422,&IC_74237,&IC_74242,&IC_74243,&IC_7425,&IC_74251,&IC_74253,&IC_74257,&IC_74258,&IC_74259,&IC_7426,&IC_74260,
	&IC_74266,&IC_7427,&IC_7428,&IC_74280,&IC_74283,&IC_74292,&IC_74293,&IC_74294,&IC_74298,&IC_7430,&IC_7432,&IC_74365,&IC_74366,&IC_74367,&IC_74368,&IC_7437,&IC_74375,&IC_7438,&IC_74386,&IC_74390,&IC_74393,&IC_7440,
	&IC_7442,&IC_7446,&IC_7447,&IC_7450,&IC_7451,&IC_7455,&IC_7458,&IC_74589,&IC_74595,&IC_74597,&IC_7460,&IC_7461,&IC_7462,&IC_7465,&IC_7472,&IC_7474,&IC_7475,&IC_7485,&IC_7486,};





#endif /* IC_DATASET_H_ */