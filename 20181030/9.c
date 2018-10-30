#include<stdio.h>
#include<string.h>
# include <stdlib.h>
int is_int_pal(int n);

int main()
{
	int n;
	scanf("%d",&n);	
	printf("%d",is_int_pal(n));
        return 0；
 } 
 
 int is_int_pal(int n)
 {
 	int a,b=0;
	 char hui[20];
 	itoa(n,hui,10);
 	a = strlen(hui);
 	if(a%2==0)
 	return -1;
 	else
 	{
 		for(int i=0;i<=(a-1)/2;i++)
 	{
 		if(hui[i]!=hui[a-i-1])
 		b++;
	 }
	 if(b==0)
	 return 0;
	 else
	 return -1;
	 }
	 
 }
