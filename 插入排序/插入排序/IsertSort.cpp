#include "IsertSort.h"

bool IsertSort(ElemType *p,int len)//     从左到右，拿当前值同左边已经排好序的数值进行从左到右比较。
{
  int j = 0;
  int i = 0;
 for ( i =1;i < len;i++)
 {
	 int tmp = *(p+i);
	int k = i-1;
	 for (j=0;j <=k;j++)
	 {
		 if (tmp < p[j])
		 {
			 break;
		 }
	 }

	 for (;k >=j;k--)
	 {
		 p[k+1] = p[k]; 
	 }

	 p[j] = tmp;
 }

 return true;
}


bool  IsertSortExcellent(ElemType *p,int len)//优化后的排序减少了时间复杂度

{
	int i = 0;
	int j = 0;
	int k = 0;
	for(i=1;i<len;i++)
	{
		int tmp = p[i];
		for (k = i-1;k>=0;k--)
		{
			if (tmp > p[k])
			{
				break;
			}
			p[k+1] = p[k];
		}
     
		p[k+1] = tmp;
	}
	
	return true;
}