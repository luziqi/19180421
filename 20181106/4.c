#include <stdio.h>
unsigned step(unsigned N,unsigned K);

int main()
{
	unsigned N,K;
	scanf("%u%u",&N,&K);
	printf("%u",step(N,K)%100007);
	
	return 0;
}

unsigned step(unsigned N,unsigned K)
{
	unsigned sum1=0,sum2=0;
	if(N==1||N==2)
	{
		return 1;
	}
	else if(N<=K)
	{
		for(unsigned i=1;i<=N-1;i++)
		{
			sum1=sum1+step(i,K);
		}
		return sum1;
	}
	else
	{
		for(unsigned j=N-K;j<=N-1;j++)
		{
			sum2=sum2+step(j,K);
		}
		return sum2;
	}
}
