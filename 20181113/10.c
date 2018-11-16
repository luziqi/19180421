#include<stdio.h>

int my_strlen(const char*str);

 int main()
 {
 	char str[100];
 	gets(str);
    printf("%d\n",my_strlen(str));
	 return 0;
 }
int my_strlen(const char*str)
{
	int i;
	for(int j=0;j<100;j++)
 	{
 		if(str[j]!='\0')
 		i++;
 		else
 		break;
	 }
	 return i;
}
