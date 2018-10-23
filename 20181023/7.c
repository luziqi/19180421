#include <stdio.h> 
#include <math.h>
int main()
{
	unsigned long a,b,c,d,e;
	scanf("%lu%lu%lu",&a,&b,&c);
        d=pow(a,b);
        e=d%c;
	printf ("%lu",e);

	return 0;
 } 
