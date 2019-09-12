#include <iostream>
#include <algorithm>

//二分查找递归实现



bool BinarySearch(int array[], int begin, int end, int key)
{
	int mid = (begin + end) / 2;
	if (end < begin)
	{
		return false;
	}

	if (array[mid] > key)
	{
		return BinarySearch(array, begin, mid-1, key);
	}
	else if (array[mid] < key)
	{
		return BinarySearch(array, mid + 1, end, key);
	}

	return true;
}



int main()
{
	int array[10] = { 20, 7, 3, 10, 1, 6, 19, 32, 24, 6 };

	int key = 0;
	while (1)
	{
		std::cin >> key;
		std::cout << BinarySearch(array, 10, key) << std::endl;
	}

	return 0;
}
