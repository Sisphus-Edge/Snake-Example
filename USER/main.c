#include "snake.h"
int main(void)
{ 
	START:
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_4);//����ϵͳ�ж����ȼ�����4
	delay_init(168);					//��ʼ����ʱ����
	uart_init(115200);     				//��ʼ������
	FSMC_SRAM_Init();//�ⲿSRAM��ʼ��
	my_mem_init(SRAMIN);//��ʼ���ڲ��ڴ��
	my_mem_init(SRAMEX);//��ʼ���ⲿ�ڴ��
	my_mem_init(SRAMCCM);//��ʼ��CCM�ڴ��
	LED_Init();		        	//��ʼ��LED�˿�
	LCD_Init();							//��ʼ��LCD
	KEY_Init();							//��ʼ������
	RNG_Init();							//��ʼ�������������
	BEEP_Init();						//��ʼ��������
	SNAKE_Init();  
	Game_Start();
	Game_End();
	while(KEY_Scan(0)!= WKUP_PRES);
	goto START;
}



