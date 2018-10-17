#include<stdio.h>
#include<stdlib.h>
int main ()
{
int x;
scanf("%d",&x);
char string[25];
itoa(x, string,2);
printf("%s,%o,%x\n",string,x,x);
return 0;
} 
