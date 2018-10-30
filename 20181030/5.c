#include <stdio.h>
int fac_bit_count(int n);

int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",fac_bit_count(n));
	
	return 0;
 } 
 
 int fac_bit_count(int n)
 {
 	int jiecheng=1,result=0;
 	for(int i=1;i<=n;i++)
 	{
 		jiecheng=jiecheng*i;
 		
	 }
	 while(jiecheng>0)
	 {
	 	jiecheng=jiecheng/10;
	 	if(jiecheng!=0)
	 	result++;
	 }
	 result=result+1;
	 return result;
	 
 }
