#include <stdio.h>

int main()
{

	FILE* p = fopen("G://1.txt","r+");
	if (p==NULL)
	{

		printf("error");
	}

  
	printf("%c",fgetc(p));



	char a[500];
	/*fgets(a,10,p);
	fputs(a,p);*/
	int i = 4;
	int j = 3;
	//fprintf(p,"%d",i);  //���߲�������ʹ�ã���Ϊ�ļ��е�ָ���λ��
	//fscanf(p,"%d",&j);
	
	
	FILE* p1 = fopen("G://2.txt","rb+");
	if (p==NULL)
	{

		printf("error");
	}
	char b[200];
	//fread(b,4,5,p1);
	//fwrite(b,4,5,p1);

	rewind(p);     //���ļ�λ�ñ��ָ��ͷ��

	int k=ftell(p)   ;  //�ɹ��򷵻��ļ���ǰ��ǡ����򷵻�-1L.

	printf("%c",fgetc(p));

	fseek(p,3,0);���ļ���ǰ����Ƶ��ļ���ʼ�������ֽڴ���0����ͷ��1����ǰ��2����ĩβ��

	fclose(p);


	return 0;
}