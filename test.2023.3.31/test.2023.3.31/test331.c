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
		printf("请选择游戏模式：\n");
		scanf("%d", &input);		
		switch (input)
		{
		case 1:
			//实现玩游戏算法
			sanzi_game();
			break;
		case 0:
			printf("即将退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入>:\n");
			break;
		}
	} while (input);
	
	return 0;
}