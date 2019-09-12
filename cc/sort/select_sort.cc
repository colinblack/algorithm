#include <iostream>

void swap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

int* select_sort(int* A, int n)
{
	for (int i = 0; i < n-1; ++i)
	{
		for (int j = i+1; j < n; ++j)
		{
			if (A[i] > A[j])
			{
				swap(A[i], A[j]);
			}
		}		
	}
	return A;
}


int main()
{
	int array[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	select_sort(array, 10);
	for (auto i : array)
	{
		printf("%d ", i);
	}
	return 0;
}