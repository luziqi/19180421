#include <stdio.h>
int A(int n);
int B(int m);

int main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n",A(n));
	
	return 0;
 } 
 
 int A(int n)
 {
 	if(n==1)
 	{
 		return 2;
	 }
	 else
	{
		return B(n-1)+2+B(n-1);
	 } 
  } 
  
  int B(int m)
  {
  	if(m==1)
  	{
  		return 1;
	  }
	  else
	  return A(m-1)+1+B(m-1);
  }
