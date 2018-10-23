#include <stdio.h>
#include <string.h> 
int main()
{
	int len;
	char shu[20]; 
	gets(shu);
	len = strlen(shu);
	for(int i=0;i<=len-1;i++)
	{
		if(shu[i]=='-')
		printf("fu");
		if(shu[i]=='1')
		printf("yi");
		if(shu[i]=='2')
		printf("er");
		if(shu[i]=='3')
		printf("san");
		if(shu[i]=='4')
		printf("si");
		if(shu[i]=='5')
		printf("wu");
		if(shu[i]=='6')
		printf("liu");
		if(shu[i]=='7')
		printf("qi");
		if(shu[i]=='8')
		printf("ba");
		if(shu[i]=='9')
		printf("jiu");
		if(shu[i]=='0')
		printf("ling");
		
		if(i<len-1)
		printf(" ");
		else
		continue;
		
	}
	return 0;
 } 
