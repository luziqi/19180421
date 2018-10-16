#include <stdio.h>
int main()
{
	int i,n,ji;
	for(i=1;i<=9;i++)
	{for(n=1;n<=i;n++)
		{
			ji=i*n;
			printf("%dx%d=%d  ",i,n,ji);
		}
	printf("\n");}
	return 0;
}
