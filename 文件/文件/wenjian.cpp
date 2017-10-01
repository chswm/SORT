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
	//fprintf(p,"%d",i);  //两者不能连接使用，因为文件中的指针错位。
	//fscanf(p,"%d",&j);
	
	
	FILE* p1 = fopen("G://2.txt","rb+");
	if (p==NULL)
	{

		printf("error");
	}
	char b[200];
	//fread(b,4,5,p1);
	//fwrite(b,4,5,p1);

	rewind(p);     //是文件位置标记指向开头。

	int k=ftell(p)   ;  //成功则返回文件当前标记。否则返回-1L.

	printf("%c",fgetc(p));

	fseek(p,3,0);把文件当前标记移到文件起始处三个字节处。0代表开头，1代表当前，2代表末尾。

	fclose(p);


	return 0;
}