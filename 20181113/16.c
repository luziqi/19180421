#include<stdio.h>
#include<stdlib.h>
	
int main()
{
	char ch;
	char fname1[100],fname2[100];
	FILE *fp1,*fp2;
	scanf("%s",fname1);
	scanf("%s",fname2);
	
	if((fp1=fopen(fname1,"r"))==NULL)
	{
		exit(1);
	}
	
	if((fp2=fopen(fname2,"w"))==NULL)
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
