/*将1234567颠倒成7654321并输出*/
#include<stdio.h>

int getBit(int num)
{
	int bit = 0;
	for (; num; )
	{
		num /= 10;
		bit++;
	}
	return bit;
}

int getBitRecursive(int num)
{
	if (num < 10)
	{
		return  1;
	}
	else
	{
		return  1 + getBitRecursive(num / 10);
	}
}

int getDecNum(int bit) 
{
	int i, decNum = 1;
	for (i = 0; i < bit; i++)
	{
		decNum *= 10;
	}
	return decNum;
}

int main2(void)
{
	int orignalNum = 1234567, targetNum = 0;
	int bit =  getBitRecursive(orignalNum), i;
	for (i = 0; i < bit; i++)
	{
		targetNum += (orignalNum % 10) * getDecNum(bit - 1 - i);
		orignalNum /= 10;
	
	}

	printf("%d", targetNum);

	getchar();
	return 0;
}