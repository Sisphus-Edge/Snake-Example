#include "beep.h"
#include "sys.h"
void BEEP_Init(void)
{
	GPIO_InitTypeDef GPIO_InitStructer;
	
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF,ENABLE);
	
	GPIO_InitStructer.GPIO_Mode=GPIO_Mode_OUT;
	GPIO_InitStructer.GPIO_OType=GPIO_OType_PP; //�������,���������������
	GPIO_InitStructer.GPIO_Pin=GPIO_Pin_8; //
	GPIO_InitStructer.GPIO_PuPd=GPIO_PuPd_UP;  //��������
	GPIO_InitStructer.GPIO_Speed=GPIO_High_Speed;  //����
	GPIO_Init(GPIOF,&GPIO_InitStructer);
}
