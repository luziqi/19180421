#include<stdio.h>
#include<string.h>
void reverse(char* str);

int main()
{
	char yuan[100];
	gets(yuan);
	reverse(yuan);
	return 0;

 } 
 
void reverse(char* str)
{
	char xin[100];
	int a;
	a=strlen(str);
	for(int i=0;i<=a-1;i++)
	{
		xin[i]=str[a-1-i];
	}
	printf("%s",xin);
}
