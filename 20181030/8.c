#include <stdio.h>
int LCM(int m, int n);
int GCD_recursive(int m, int n);
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	printf("%d",LCM(m,n));
	
}
int LCM(int m, int n)
{
	int result;
	result=m*n/GCD_recursive(m,n);
	return result;
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
