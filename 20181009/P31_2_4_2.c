#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c,x,m,n,p;
	printf("请输入x,a,b,c数值");
	scanf("%d,%d,%d,%d",&x,&a,&b,&c);
    n=sqrt(abs(x));
	m=(4*a)/(b*c);
	if (m==n)
		printf("0\n");
	else
		printf("1\n");

	return 0;
}
