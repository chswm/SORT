#include "IsertSort.h"



int main()
{

	ElemType a[5] = {24,4,35,6,9};

	ElemType *p =a;
    int len  = sizeof(a)/sizeof(a[0]);
	/*IsertSort(p,len);*/

	IsertSortExcellent(p, len);
	return 0;
}