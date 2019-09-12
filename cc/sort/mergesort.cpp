#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<utility>


using namespace std;


class MergeSort{
public:
	static  pair<int*, int> generateArray(int, int);
	static  bool isSorted(int*, int );
	static  void mergeSort(int*,int);
	static  void process(int*, int*, int, int, int);
	static  void merge(int*, int*, int, int, int);

};

pair<int*, int> MergeSort::generateArray(int len, int range)
{
	pair<int*, int> data;
	data.second = len;
	if (len < 1)
	{
		data.first = nullptr;
		return data;
	}

	srand(time(NULL));
	int* arr = new int[len];
	
	for (int i = 0; i < len; ++i)
	{
		arr[i] = rand() % range;	
	}
	data.first = arr;

	return data;
}

bool MergeSort::isSorted(int* arr, int len )
{
	if (arr == nullptr || len < 2)
	{
		return true;
	}

	for (int i = 0; i < len - 1; ++i)
	{
		if (arr[i] > arr[i + 1])
			return false;	
	}

	return true;

}


void MergeSort::mergeSort(int* arr, int len)
{
	if (arr == nullptr || len < 2)
	{
		return;
	}

	process(arr, arr, 0, len-1, len);
}

void MergeSort::process(int* src, int* dst, int low, int high, int max)
{
	if (low == high)
	{
		dst[low] = src[low];
	}
	else
	{
		int mid = (high + low)/ 2;
		int* tmp = new int[max];

		if (tmp != nullptr)
		{
			process(src, tmp, low, mid, max);
			process(src, tmp, mid +1, high, max);		
			merge(tmp, dst, low, mid, high);		
		}
		delete[] tmp;	
	}
}


void MergeSort::merge(int* src, int* dst, int low, int mid, int high)
{
	int i = low;
	int j = mid + 1;
	int k = low;

	while ((i <= mid) && (j <= high))
	{
		if (src[i] < src[j])
		{
			dst[k++] = src[i++];
		}
		else
		{
			dst[k++] = src[j++];
		}
	}

	while (i <= mid)
	{
		dst[k++] = src[i++];
	}

	while (j <= high)
	{
		dst[k++] = src[j++];
	}

}






int main(void)
{
	pair<int*, int> msg;
	msg = MergeSort::generateArray(13, 15);
	
	bool ret;
	ret = MergeSort::isSorted(msg.first, msg.second);



	system("pause");
	return 0;
}