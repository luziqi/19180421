#include <stdio.h>
unsigned short invert(unsigned short x,int p,int n);
int main()
{   
	unsigned short x;
	int p,n;
	scanf("%o%d%d",&x,&p,&n);
	invert(x,p,n);
	return 0;
}
unsigned short invert(unsigned short x,int p,int n)
{
	int a,b,c;
    a=~0<<n;
	b=~a<<(p+1-n);
	c=x^b;
	printf("%o\n",c);
	return  c;
}
