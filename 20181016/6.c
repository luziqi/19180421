#include <stdio.h>
int main()
{
	int i,n,k,j;
	printf("请输入n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{for(k=1;k<=13-i;k++)
		printf(" ");
	for(j=1;j<=2*i-1;j++)
	    printf("*");
	printf("\n");
	}
    for(i=n-1;i>=1;i--)
	{for(k=1;k<=13-i;k++)
		printf(" ");
	for(j=1;j<=2*i-1;j++)
	    printf("*");
	printf("\n");
	}
	return 0;
}