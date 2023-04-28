#include <stddef.h>

void sanzi_game()
{
	srand((unsigned)time(NULL));
	int num = rand() % 500;
	int input = 0;
	printf("请输入要猜的数字>:\n");
	while (1)
	{
		scanf("%d", &input);		
		if (input > num)
		{
			printf("你猜的数字大了\n");
		}
		else if (input < num)
		{
			printf("你猜的数字小了\n");
		}
		else
		{
			printf("你猜对了\n");
			break;
		}
	}
	printf("num=%d\n", num);
}