
#include "HeapSort.h"

bool HeapAdjust(int a[],int s,int len)  //分大堆
{
	int tmp = a[s];
	for (int i = 2 * s + 1; i <= len;i*=2+1)
	{
		if (a[i] < a[i++])
			i++;`
		if (a[i] <= tmp)
			break;
		else
		{
			a[s] = a[i];
			s = i;
		}
		
	}
  
a[s] = tmp;
}

bool HeapSort(int a[],int len)
{
	int start  = (len-2)/2;
	for (;start>=0;start--)
	{
		HeapAdjust(a, start, len - 1);

	}

	for (int i = len - 1; i >= 0; --i) 
	{
		swap(a[i], a[0]);
		HeapAdjust(a, 0, i - 1);
	}

}