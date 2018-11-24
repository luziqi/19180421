#include <stdio.h>

unsigned long f(unsigned long N);

int main()
{
    unsigned long N,sum=0;
    scanf("%lu",&N);
    for(unsigned long i=1;i<=N;i++)
    {
    	sum=sum+f(i);
	}
    printf("%lu\n",sum);
    
	return 0;
}

unsigned long f(unsigned long N)
{
    while(N%2==0)
	{
		N=N/2;
	 } 
	 return N;
}

