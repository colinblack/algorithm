//4���� Sn��a + aa + aaa + ... + aa...aֵ֮������ a��һ�����֡� ����  2 + 22 + 222 + 2222�� ��ʱn��4����n�ɼ�������
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int per_Sum(int num, int count)
{
	int tmp = 0;
	if (count <= 1)
	{
		return num;
	
	}
	else
	{

	  return 	per_Sum(num, count - 1)* 10 + num;
	}
}


int main(void)
{
	int num = 0, sum = 0,i, timeNum = 0, maxSize = 0;
	printf("please input a number \n");
	scanf("%d", &num);
	scanf("%d", &maxSize);
	printf("%d \n",per_Sum(num, maxSize));
	/*
	for (i = 0; i < maxSize; i++)
	{
		timeNum *= 10;
		timeNum += num;
		printf("%d \n", timeNum);
		sum += timeNum;
	}
	*/
	//printf("%d \n", sum);

	system("pause");
	return 0;
}

