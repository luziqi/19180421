#include <stdio.h>
int main()
{
	int i,n=10,sum=0,ji=1;
	for(i=1;i<=n;i++) 
	{ji*=i;
	sum=sum+ji;}
	printf("1!+2!+...+10!=%d\n",sum);

	return 0;
}
