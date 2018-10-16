#include <stdio.h>
int main()
{
	int a,b=1,sum=0,ji=1;
	for(a=1;a<=99;a=a+3)
        {ji=a*(a+1)*(a+2);
	sum=sum+ji;}
	printf("1x2x3+4x5x6+...+97x98x99=%d\n",sum);
		     
	return 0;
}
