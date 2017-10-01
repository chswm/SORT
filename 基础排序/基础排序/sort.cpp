#include <stdio.h>


void sort1(int a[],int size)//√∞≈›≈≈–Ú
  {
        int i  = 0;
        for (; i < size-1; ++i)
        {
        	for (int j = 0; j< size-i-1; ++j)
        	{
        		if (a[j]>a[j+1])
        		{
        			int tmp = a[j];
        			a[j] = a[j+1];
        			a[j+1] = a[j];
        		}
        	}
        }
      

  }         

 void sort2 (int a[],int size) //Ωªªª≈≈–Ú
 {
 	for (int i = 0; i < size-1; ++i)
 	{
 		for (int j = i+1; j < size; ++j)
 		{
 			if (a[j]>a[i])
 			{
 				int tmp = a[j];
 				a[j] = a[i];
 				a[i] = tmp;
 			}
 			
 		}
 	}

 }
void sort3(int a[],int size) // —°‘Ò≈≈–Ú
{
  for (int i = 0; i < size-1; ++i)
  {
  	int k = i;
  	for (int j = i+1; j < size; ++j)
  	{
  		if (a[k]>a[j])
  		{
  			k=j;
  		}
  		
  	}
    if(k!=i)
     {
     	int tmp = a[k];
        a[k] = a[i];
     
        a[i] = tmp;
  	}
  }


}






int main()
{
	
	return 0;
}