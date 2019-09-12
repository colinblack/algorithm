#include <iostream>

void merge(int *A, int l, int m, int r, int* tmp)
{
	int cnt_l = l, cnt_r = m + 1, cnt = 0;
	while (cnt_l <= m && cnt_r <= r)  //зЂвт&&
	{
		if (A[cnt_l] < A[cnt_r])
		{
			tmp[cnt++] = A[cnt_l++];
		}
		else
		{
			tmp[cnt++] = A[cnt_r++];
		}
	}

	while (cnt_l <= m)  //зЂвт=
	{
		tmp[cnt++] = A[cnt_l++];
	}

	while (cnt_r <= r)
	{
		tmp[cnt++] = A[cnt_r++];
	}

	for (int i = 0; i < cnt; ++i)
	{
		A[l+i] = tmp[i];
	}

}

void sort(int *A, int l, int r, int* tmp)
{
	if (l >= r)
	{
		return;
	}
	int m = (l + r) / 2;
	sort(A, l, m, tmp);
	sort(A, m + 1, r, tmp);
	merge(A, l, m, r, tmp);
}


int* mergeSort(int* A, int n) {
	int *tmp = new int[n];
	if (tmp == NULL)
	{
		return NULL;
	}
	sort(A, 0, n-1, tmp);
	
	delete tmp;

	return A;
}






int main()
{
	int array[10] = { 5, 7, 1, 9, 10, 6, 2, 3, 11, 0 };
	mergeSort(array, 10);
	for (auto i : array)
	{
		printf("%d ", i);
	}

	return 0;
}