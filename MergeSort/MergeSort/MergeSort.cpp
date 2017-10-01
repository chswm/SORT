 #include<iostream>
#define MAX 100

using namespace std;













//
//
//
//int get_max(int a[], int n)
//
//{
//	int i = 0;
//	int b[n*n];
//	int sum = 0;
//	int k = 0;
//	for (; i<n; ++i)
//	{
//		sum = a[i];
//		b[k++] = sum;
//		for (int j = i + 1; j<n; j++)
//		{
//			sum += a[j];
//			b[k++] = sum;
//		}
//	}
//	int temp;
//	for (i = 0; i<1; ++i)
//	{
//		for (int j = j + 1; j<k; j++)
//		{
//			if (b[i]<b[j]])
//			{
//				temp = b[i];
//				b[i] = b[j];
//				b[j] = temp;
//			}
//		}
//	}
//
//
//	return b[0];
//}
//
//int main()
//{
//
//	int a[] = { -23,17,-7,11,-2,1,-34 };
//	cout << get_max(a, 7) << endl;
//	return 0;
//}





//void Merge(int a[], int b[], int low, int m, int high);
//void my_copy(int *dest, int* source, int l, int h)
//{
//	if (dest == NULL || source == NULL || l < 0 || h < 0)
//		return;
//	
//	while (l <= h)
//	{
//		dest[l++] = source[l++];
//		
//	}
//
//}
//void MergeSort(int a[], int low, int high)
//{
//	if (a != NULL&& low<high )
//	{ 
//	int m;
//	int tmp[MAX];
//	
//	
//    m = (high-low) / 2+low;
//	MergeSort(a,  low, m);
//	MergeSort(a, m + 1, high);
//	Merge(a,tmp, low, m, high);
//	my_copy(a, tmp, low, high);
//	}
//
//
//}
//
//void Merge(int a[], int b[], int low, int m, int high)
//{
//	int i = low;
//	int j = m + 1;
//	int n = 0;
//	while (i <= m &&j <= high)
//	{
//		if (a[i] <= a[j])
//		{
//			b[n] = a[i];    //b[n++]=a[i]>a[j]? a[i++]:a[j++];
//			++i;
//			++n;
//		}
//		else
//		{
//			b[n] = a[j];
//			++j;
//			++n;
//		}
//	}
//
//	while (i <= m)
//	{
//		b[n++] = a[i++];
//		
//	}	
//
//	while (j <= high)
//	{
//		b[n] = a[j++];
//		++n;
//	}
//
//}
//
//void main()
//{
//	int ar[] = { 48,15,84,65,16,49 };
//	int br[100] = { 0 };
//	int low = 0;
//	int high = sizeof(ar) / sizeof(ar[0]) - 1;
//	MergeSort(ar, low, high);
//
//	for (int i = 0; i < 6; ++i)
//	{
//		cout << ar[i] << " ";
//	}
//
//
//}