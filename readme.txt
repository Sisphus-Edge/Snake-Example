实验器材:
	探索者STM32F407开发板
	
实验目的:
	学习使用FreeRTOS的动态任务创建 xTaskCreate()和任务删除函数vTaskDelete()。
	
硬件资源:
	1,DS0(连接在PF9)，DS1(连接在PF10上)
	2,串口1(波特率:115200,PA9/PA10连接在板载USB转串口芯片CH340上面) 
	3,ALIENTEK 2.8/3.5/4.3/7寸LCD模块(仅支持MCU屏) 
	
实验现象:
	实验中会创建两个应用任务task1_task和task2_task，当task1_task运行
	5次以后就会删除掉任务task2_task。

注意事项:
	无. 

参考资料：STM32F407 FreeRTOS开发手册.pdf 第六章


			
