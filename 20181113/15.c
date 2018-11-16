#include<stdio.h>
#include<stdlib.h>
	
int main()
{
	char ch;
	char fname[100];
	FILE *fp;
	scanf("%s",fname);
	
	if((fp=fopen(fname,"r"))==NULL)
	{
		exit(1);
	}
	ch=fgetc(fp);
	while(ch!=EOF)
	{
		putchar(ch);
		ch=fgetc(fp);
	}
	printf("\n");
	
	if(fclose(fp))
	printf("文件关闭失败");

	return 0;
}
