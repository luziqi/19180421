#include<stdio.h>
#include<string.h>
int is_str_pal(const char* str);

int main()
{
	char hui[20];
	gets(hui);
	printf("%d",is_str_pal(hui));
        return 0;
 } 
 
int is_str_pal(const char* str)
 {
 	int a,b=0;
 	a = strlen(str);
 	if(a%2==0)
 	return -1;
 	else
 	{
 		for(int i=0;i<=(a-1)/2;i++)
 	{
 		if(str[i]!=str[a-i-1])
 		b++;
	 }
	 if(b==0)
	 return 0;
	 else
	 return -1;
	 }
	 
 }
