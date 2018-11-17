#include<stdio.h>
#include<stdlib.h>
	
int main(int argc,char** argv)
{
	char ch;
	FILE *fp1,*fp2;
	
	if((fp1=fopen(argv[1],"r"))==NULL)
	{
		exit(1);
	}
	
	if((fp2=fopen(argv[2],"w"))==NULL)
	{
		exit(1);
	}
	ch=fgetc(fp1);
	while(ch!=EOF)
	{
		fputc(ch,fp2);
		ch=fgetc(fp1);
	}
	printf("\n");
	
	if(fclose(fp1))
	printf("文件关闭失败");
	if(fclose(fp2))
	printf("文件关闭失败");

	return 0;
}
