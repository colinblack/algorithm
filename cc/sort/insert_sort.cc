#include <iostream>


void swap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}


int* insertionSort(int* A, int n) {
	for (int i = 0; i < n-1; ++i)
	{
		for (int j = i+1; j > 0; --j)
		{
			if (A[j] < A[j-1])
			{
				swap(A[j], A[j-1]);
			}
			else
			{
				break;
			}
		}	
	}

	return A;
}


int main()
{

	int array[10] = { 5, 7, 1, 9, 10, 6, 2, 3, 11, 0 };
	insertionSort(array, 10);
	for (auto i : array)
	{
		printf("%d ", i);
	}

	return 0;
}