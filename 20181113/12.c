#include<stdio.h>

int my_strcmp(const char *str1,const char*str2);

 int main()
 {
 	char str1[100],str2[100];
 	gets(str1);
 	gets(str2);
    printf("%d\n",my_strcmp(str1,str2));
	 return 0;
 }
int my_strcmp(const char *str1,const char*str2)
{
	for(int j=0;j<100;j++)
 	{
 		if(str1[j]>str2[j]) return 1;
 		if(str1[j]<str2[j]) return -1;
 		if(str1[j]=='\0'&&str2[j]=='\0') return 0;
	 
	 }
}
