#include "IsertSort.h"

bool IsertSort(ElemType *p,int len)//     �����ң��õ�ǰֵͬ����Ѿ��ź������ֵ���д����ұȽϡ�
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


bool  IsertSortExcellent(ElemType *p,int len)//�Ż�������������ʱ�临�Ӷ�

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