#include <stdio.h>
unsigned invert(unsigned,int,int);
int main()
{   
	unsigned x;
	int p,n;
	scanf("%o%d%d",&x,&p,&n);
	invert(x,p,n);
	return 0;
}
unsigned invert(unsigned x,int p,int n)
{
	int a,b,c;
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
