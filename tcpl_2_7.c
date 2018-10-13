#include <stdio.h>
unsigned invert(unsigned short,int,int);
int main()
{   
	unsigned short  x;
	int p,n;
	scanf("%o%d%d",&x,&p,&n);
	invert(x,p,n);
	return 0;
}
unsigned invert(unsigned short x,int p,int n)
{
    unsigned short a,b,c;
        a=~0<<(p-1);
	a=a>>(8-n);
	a=a<<(9-n-p);
	b=~a;
	a=x&a;
	a=~a;
	b=x%b;
	c=a|b;
    printf("%o",c);
	return;
}
