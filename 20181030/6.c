#include <stdio.h>
#include <math.h>
int is_prime(int i);

int main()
{
	int n=2,i,a;
	int su[10000];
	su[0]=2;
	su[1]=3;
	for(i=4;i<=10000;i++)
	{
		a=is_prime(i);
		if(a==0)
		{
			su[n]=i;
			n++;
		}
	}
	
	for(int j=99;j<1000;j++)
	{
		printf("%d ",su[j]);
	}
	return 0;
 } 
 
int is_prime(int n)
{
	int i;
	double mid;
	mid = sqrt(n);
	for (i=2;i<=mid;i++)
	{
	if (n%i==0)
	break;
	}
	if (i<=mid)
	return -1;
	else	
	return 0;
 }
