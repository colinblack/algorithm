#include <iostream>
#include <algorithm>
//二分查找循环实现
//https://www.cnblogs.com/ider/archive/2012/04/01/binary_search.html

bool BinarySearch(int array[], int len, int key)
{
	std::sort(array, array+len);
	//for (int i = 0; i < 10; ++i)
	//{
	//	std::cout << array[i] << std::endl;
	//}
	int begin = 0;
	int end = len;
	int mid = 0;
	while (begin <= end)
	{
		mid = (end + begin) / 2;
		if (array[mid] > key)
		{
			std::cout << array[mid] << " " << mid <<" " <<  __LINE__ << std::endl;
			end = mid-1;
		}
		else if (array[mid] < key)
		{
			std::cout << array[mid] << " " << mid << " " << __LINE__ << std::endl;
			begin = mid+1;
		}
		else
		{
			return true;
		}

	}


	return false;
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