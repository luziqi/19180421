	#include <stdio.h>
	#include <string.h>
	int main()
	{
		int zong;
		int n = 0;
		char wen[60]; 
		gets(wen);
		zong = strlen(wen);
		for(int i=0;i <=zong-1;i ++)
		{
			if(wen[i]!=' ')
			n++;
			if(wen[i]==' '&&n!=0)
			{
			printf("%d ",n);
			n=0;
			}
			if(wen[i]=='.'&&(n-1)!=0)
			printf("%d",n-1);
		}
	
		return 0;
	 } 
