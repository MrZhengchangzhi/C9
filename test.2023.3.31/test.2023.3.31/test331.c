#define _CRT_SECURE_NO_WARNINGS 1.

#include "sanzi_game.h"

menu()
{
	printf("*******************************\n");
	printf("*******************************\n");
	printf("****  1.play       0.exit  ****\n");
	printf("*******************************\n");
	printf("*******************************\n");
}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ����Ϸģʽ��\n");
		scanf("%d", &input);		
		switch (input)
		{
		case 1:
			//ʵ������Ϸ�㷨
			sanzi_game();
			break;
		case 0:
			printf("�����˳���Ϸ\n");
			break;
		default:
			printf("�����������������>:\n");
			break;
		}
	} while (input);
	
	return 0;
}