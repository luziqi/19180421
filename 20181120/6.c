#include <stdio.h>
#include <string.h>

int count_substr(const char* str, const char* substr);

int main()
{
	char str[300];
	char substr[300];
	gets(str);
	gets(substr);
	printf("%d",count_substr( str,substr));
	return 0;
 } 
 int count_substr(const char* str, const char* substr)
 {
 	int k=0;
 	char check[300];
	 int len1=strlen(str);
	 int len2=strlen(substr);
 	for(int i=0;i<len1;i++)
 	{
 		if(str[i]==substr[0])
 		{
 			for(int j=0;j<len2;j++)
 			{
 				check[j]=str[i+j];
			 }
			 if(strcmp(check,substr)==0)
			 {
			 	k++;
			 	i+=len2;
			 }
			
		 }
	 }
	 return k;
 }
