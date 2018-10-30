#include <stdio.h>
int count1_in_bin(int n);

int main()
{
	int n;
	printf("请输入一个十进制数：");
	scanf("%d",&n);
	printf("%d",count1_in_bin(n));
	
	return 0;
 } 
 
int count1_in_bin(int n)
 {
 	int m;
	 int a=1,zong=0;
 	for(int i=1;i<=16;i++)
 	{
 		m=a&n;
 		if(m!=0)
 		{
		 zong++; 
		 }
		 a=a<<1;		
	 }
	 
	 return zong;
 }
  
