<<<<<<< HEAD
#include <stdafx.h>
=======
#include <stdio.h>
>>>>>>> 0a9c49ab10a4aeb8acdc3c518dd9f6a0b9830928

unsigned  setbits(unsigned x , unsigned y,  int p, int n);

int main()
{      int p,n;
   unsigned x,y;
   scanf("%o%o%d%d",&x,&y,&p,&n);
	
	
	
	setbits(x,y,p,n);


	return   0;
}
unsigned  setbits(unsigned x,   unsigned y,   int p,  int n)
{

	int  a,b,c,d,e,f,g;

	a=~0<<(p+1);
	b=~(~0<<(p+1-n));
	c=a|b;
	d=x&c;
	e=~(~0<<n)<<(p+1-n);
	f=y&e;
	g=d|f;
	printf("%o",g);

    return g;
}

