#include <stddef.h>

void sanzi_game()
{
	srand((unsigned)time(NULL));
	int num = rand() % 500;
	int input = 0;
	printf("������Ҫ�µ�����>:\n");
	while (1)
	{
		scanf("%d", &input);		
		if (input > num)
		{
			printf("��µ����ִ���\n");
		}
		else if (input < num)
		{
			printf("��µ�����С��\n");
		}
		else
		{
			printf("��¶���\n");
			break;
		}
	}
	printf("num=%d\n", num);
}