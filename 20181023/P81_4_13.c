#include <stdio.h>
#include <math.h>
int main()
{
	int n,i;
	double mid;
	printf("请输入n（n>3）：");
	scanf("%d",&n);
	mid = sqrt(n);
	for (i=2;i<=mid;i++)
	{
	if (n%i==0)
	break;
	}
	if (i<=mid)
	printf("%d不是素数\n",n);
	else
	printf("%d是素数\n",n);
	
	return 0;
 } 
