#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int people[11] = {0}, num;
	int i = 0, num_s = 0;
	printf("报数数字 \n");
	scanf("%d", &num);
	int out = 0;  //用于保存剩下的人数；
	while (1)
	{
		if (people[num_s] == 0)
		{
			if (i == 3)
			{
				printf("%d \n", num_s);
				people[num_s] = 1;
				out++;
				i = 0;
			}
			if (num_s >= 10)
				num_s = 1;
			else
				num_s++;
			i++;
		}
		if (people[num_s] == 1)
		{
			if (num_s >= 10)
				num_s = 1;
			else
				num_s++;
		}

		if (out == 10)
			break;
	}

	system("pause");
	return 0;
}