#include <stdio.h>
unsigned step(unsigned n);

int main()
{
	unsigned N;
	scanf("%u",&N);
	printf("%u\n",step(N)%100007);
	
	return 0;
}

unsigned step(unsigned n)
{
	if(n==1||n==2)
	{
		return 1;
	}
	else
	{
		return step(n-1)+step(n-2);
	}
}
