#include <stdio.h>
void print_hex(int a);

int main()
{
	int a;
	printf("请输入一个十进制数：");
	scanf("%d",&a);
	print_hex(a);
	
	return 0;
 } 
 
void print_hex(int a)
 {
 	if (a == 0)
     return;
	  print_hex (a / 16);
	if (a % 16 > 9)
     printf ("%c",(a % 16) - 10 + 'A');
     else if(a % 16>0&&a %16 <=9) 
     printf ("%d",a % 16);

 }
