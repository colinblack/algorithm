//不知是何种排序
#include<iostream>

int len = 0;

void Sort(int* A, int* B, int k)
{
	int* C = new int[k + 1];
	B = new int[len];

	for (int j = 0; j < len; j++)
	{
		C[A[j]]++;
	}

	for (int i = 1; i <= k; i++)
	{
		C[i] += C[i - 1];
	}

	for (int j = len - 1; j >= 0; j--)
	{
		B[C[A[j]] - 1] = A[j];
		C[A[j]]--;
	}

}

int main()
{
	int array[8] = { 21, 51, 31, 01, 22, 32, 02, 33 };
	int* data = nullptr;
	len = sizeof(array) / sizeof(array[0]);
	Sort(array,data, 51);

	for (int i = 0; i < len; ++i)
	{
		std::cout << data[len - 1] << std::endl;
	}

	return 0;
}