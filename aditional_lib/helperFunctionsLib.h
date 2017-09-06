#include "stm32f4xx_tim.h"
#include "stm32f4xx_gpio.h"
#include "stm32f4xx_adc.h"
#include "stm32f4xx_rcc.h"
#include "lcd_5110.h"
#include <math.h>
//#include "promil.c"

void windowFrame1();
void windowFrame2();
void setTimer();
void reverseWindowFrame();
void heatUpProgress(int i);
//void adc1Init();
void printAdcValue();
float printFloatAdcValue();
void bloodAlcLevelShow();
void waitingScreenShow();
void breathAlyzerLogoShow();
void howLongToDrive(float floatValuePerMil);
void ADCInit();


