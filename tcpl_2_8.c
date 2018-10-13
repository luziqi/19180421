#include <stdio.h>
unsigned rightrot(unsigned short,int);
int main()
{
	unsigned  short x;
	int n;
	scanf("%o%d",&x,&n);
	rightrot(x,n);
	return 0;
}
unsigned rightrot(unsigned short x,int n)
{
	unsigned short a,b;
    a=x<<(16-n);
	b=x>>n;
	b=b|a;
	printf("%o\n",b);
	return;
}

