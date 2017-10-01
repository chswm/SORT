#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<string>
using namespace std;

void GetNext(char* p, int len, int next[])
{

	int j = 0;
	int k = -1;
	next[0] = -1;
	while (j < len - 1)
	{
		if (k == -1 || p[k] == p[j])
		{
			j++;
			k++;
			next[j] = k;
		}
		else
			k = next[k];

	}

}

bool KMP(char s[], int slen, char p[], int plen)
{
	int next[59];
	int i = 0;
	int j = 0;
	GetNext(p, plen, next);
	while (i < slen && j < plen)
	{
		if (j == -1 || s[i] == p[j])
		{
			i++;
			j++;

		}
		else
			j = next[j];++
	}
	if (j == plen)
		return true;
	return false;
}

//next数组优化
void GetNextVal(char p[], int len, int nextval[])
{
	int i = 0;
	int k = -1;
	nextval[0] = -1;
	while (i < len-1 )
	{
		if (k == -1 || p[k] == p[i])
		{
			k++;
			i++;
			if (p[k] != p[i])
				nextval[i] = k;
			else
				nextval[i] = nextval[k];
		}
		else
			k = nextval[k];

	}
}

void Fun(vector<string> v, vector<string> &s)
{
	int count = 0;
	
		vector<string>::iterator is = s.begin();
		vector<string>::iterator iv = v.begin();
		for (; is != s.end(); ++is)
		{
			for (; iv != v.end(); ++iv)
			{      string str1 =*iv;
			       string str2 = *is;  

				   、char str[100] ;
			       strcpy(str, str1.c_str());
			       char ktr[100] ;
				   strcpy(ktr, str2.c_str());
				int slen = strlen(str);
				int klen = strlen(ktr);
				if (KMP(str, slen, ktr, klen))
				{
					++count;
				}
			}
			cout << count<<endl;
		}
	}



int main()
{
	vector<string> v;
	vector<string> s;
	int N = 0;
	int M = 0;
	cin >> N;
	int i = 0;
	for ( i = 0; i < N; ++i)
	{
		string temp;
		cin >> temp;
		v.push_back(temp);
	}
	while (1)
	{
		cin >> M;
		for (int i = 0; i < M; ++i)
		{
			string temp;
			cin >> temp;
			s.push_back(temp);
			
		}
		Fun(v, s);
		s.clear();
	}
	return 0;
}
/*
3
aaa
aaa
baa
2
aa
ba
1
a
1
b


3
1
1
*/

#if 0
void GetNext(char* p, int len,int next[])
{
	
	int j = 0;
	int k = -1;
	next[0] = -1;
	while (j < len - 1)
	{
		if (k == -1 || p[k] == p[j])
		{
			j++;
			k++;
			next[j] = k;
		}
		else
			k = next[k];

	}

}


bool KMP(char s[],int slen, char p[],int plen)
{
	int next[59];
	int i = 0;
	int j=0;
	GetNext(p, plen, next);
	while (i < slen && j < plen)
	{
		if (j==-1||s[i] == p[j])
		{
			i++;
			j++;

		}
		else
			j = next[j];
	}

	
	
	if (j == plen)
		return true;
	return false;
}

//next数组优化
void GetNextVal(char p[], int len, int nextval[])
{
	int i = 0;
	int k = -1;
	nextval[0] = -1;
	while (i < len)
	{
		if (k == -1 || p[k] == p[i])
		{
			k++;
			i++;
			if (p[k] != p[i])
				nextval[i] = k;
			else
				nextval[i] = nextval[k];
		}
		else
			k = nextval[k];

	}
}



int main()
{

	char str[] = "abcdabfgabhj";
	char ktr[] = "abhj";
	KMP(str,12,ktr,4);

	return 0;
}


#endif