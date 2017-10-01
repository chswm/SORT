#include<iostream>
using namespace std;


int partion(int *a, int low, int high)
{
	int tmp = a[low];
	while (low < high)
	{
		while (a[high] >= tmp && low < high)
			--high;
		a[low] = a[high];
		while (a[low] <= tmp && low < high)
			++low;
		a[high] = a[low];
	}
	a[low] = tmp;

	return low;

}
void QuickSort(int *a,int low,int high)
{
	if (a != NULL && high> 0 && low<high && low>=0)
	{

		int m = partion(a, low, high);
		QuickSort(a, low, m - 1);
		QuickSort(a, m + 1, high);
	}
}



int main()
{

	int a[] = { 4,56,46,41,23 };
	QuickSort(a, 0, 4);
	for (int i = 0; i < 5; ++i)
	{
		cout << a[i]<<endl;
	}

	return 0;
}