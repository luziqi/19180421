#include<stdio.h>
#include<stdlib.h>
	
int main(int argc,char **argv)
{
	char ch;
	FILE *fp;
	if((fp=fopen(argv[1],"r"))==NULL)
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
