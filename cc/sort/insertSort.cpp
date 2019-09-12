#include<iostream>
#include<stdlib.h>

using namespace std;


void swap(int &p, int &q)
{
	int tmp;
	tmp = p;
	p = q;
	q = tmp;
}


void insertSort(int *array, int len)
{

	for (int i = 1; i < len; ++i)
	{
		for (int k = i; k >= 0 && (array[k] < array[k-1]); --k)
		{
		
			swap(array[k],array[k-1]);
		
		}	
	}
}



int main(void)
{
	int data[] = {8,1,5,3,9,11,5};

	int len = sizeof(data) / sizeof(data[0]);

    insertSort(data, len);


	for (int i = 0; i < len; ++i)
	{
		cout << data[i] << endl;
	}



	system("pause");
	return 0;
}