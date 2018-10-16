#include <stdio.h>
int main()
{
	int a,sum=0;
	for(a=2;a<=100;a=a+2)
		sum = sum+a;
	printf("2+4+...+100=%d\n",sum);
	return 0;
}
