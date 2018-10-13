#include <stdio.h>
#include <math.h>
int main()
{
    int m,x;
	printf("输入x\n");
	scanf("%d",&x);
    m=pow(x,3)+2*pow(x,2)+3*x+1;
	printf("x^3+2x^2+3x+1=%d\n",m);
	return 0;
}
