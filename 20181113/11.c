#include<stdio.h>

void my_strcpy(char *dest,const char*src);

 int main()
 {
 	char src[100],dest[100];
 	gets(src);
    my_strcpy(dest,src);
    puts(dest);
	 return 0;
 }
void my_strcpy(char *dest,const char*src)
{
	for(int j=0;j<100;j++)
 	{
 		if(src[j]!='\0')
 		dest[j]=src[j];
 		else
 		{
 			dest[j]='\0';break;
		 }
	 }
}
