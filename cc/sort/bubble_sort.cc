#include <iostream>


void swap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void bubble_sort(int array[], int len)
{
	for (int i = 0; i < len - 1; ++i)  //´ÎÊı
	{
		for (int j = 0; j < len-i-1; ++j)
		{
			if (array[j] > array[j+1])
			{
				swap(array[j], array[j+1]);
			}
		}
	
	}

}

int main()
{
	int array[10] = {5, 7, 1, 9, 10, 6, 2, 3, 11, 0};
	bubble_sort(array, 10);
	for (auto i:array)
	{
		printf("%d ", i);
	}


	return 0;
}