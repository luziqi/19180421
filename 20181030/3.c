#include <stdio.h>
int is_pow2(int n);

int main()
{
	int n;
	printf("请输入一个十进制数：");
	scanf("%d",&n);
	printf("%d",is_pow2(n));
	
	return 0;
 } 
 
int is_pow2(int n)
 {
 	int a;
 	a=n&(n-1);
 	if(a==0)
 	return 0;
 	else
 	return -1;
 }
  
