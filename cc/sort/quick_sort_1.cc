#include <iostream>

//array
int adjustArray(int* array, int pre, int end)
{
	int i = pre, j = end;
	int  base = array[pre];   //»ù×¼Êı

	while (i < j)
	{
		for (; i < j && base <= array[j]; --j)
			;
		if (i <j)
		{
			array[i] = array[j];
			++i;
		}

		for (; i < j && base > array[i]; ++i)
			;
		if (i < j)
		{
			array[j] = array[i];
			--j;
		}
	}
	array[i] = base;

	return i;
}



void QuickSort(int* array,  int pre, int end)
{
	if (pre < end)
	{
		int base = adjustArray(array, pre, end);
		QuickSort(array, pre, base - 1);
		QuickSort(array, base + 1, end);
	}
}





int main()
{
	int array[10] = {3,4,1,8,9,12,3,15,16,10};
	QuickSort(array, 0, 9);

	for (auto i : array)
	{
		std::cout << i << std::endl;
	}

	return 0;
}