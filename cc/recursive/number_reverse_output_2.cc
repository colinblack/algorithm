

#include<stdio.h>
#include<stdlib.h>


int reverse(int num)
{
	int target = 0, tmp = 0, i,num_tmp;
	if (num < 10)
	{
		return num;
	}
	else
	{	
		target = num % 10 ;
		num_tmp = num;
		while (num_tmp /= 10)
		{
			target *= 10;
		}
		
		return  target + reverse(num / 10);
	}

}

int main(void)
{
	int num, bit = 0, target = 0;
	puts("please input number");
	scanf_s("%d", &num);
	/*
	while (num)
	{
		target *= 10;
		  
		target += num % 10;
		num /= 10;
	}*/
	printf("%d \n", reverse(num));
	system("pause");
	return 0;
}