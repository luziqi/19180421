#include <stdio.h>
int GCD_recursive(int m, int n);
int GCD_iterative(int m, int n);

int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	printf("%d\n",GCD_iterative(m,n));
  	printf("%d\n",GCD_recursive(m,n));
	
}

int GCD_iterative(int m, int n)
{
	int r;
	if(m>=n)
	{
		if(m%n==0)
		return n;
		else
		{
			while(n!=0)
		{
			r=m%n;
			m=r;
			n=n%r;
		}
		return m;
		}
    }
	if(n>m)
	{
		if(n%m==0)
		return m;
		else
		{
			while(m!=0)
		{
			r=n%m;
			n=r;
			m=m%r;
		}
		return n;
		}
		
	
	}
}

int GCD_recursive(int m, int n)
{
	if(m>=n)
	{
	if(m%n==0)
	return n;
	else
    return GCD_recursive(n,m%n);
	}
	if(n<m)
	{
		if(n%m==0)
		return m;
		else
		return GCD_recursive(m,n%m);
	}
    
}
