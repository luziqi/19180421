#include <stdio.h>
int main()
{
int n,x,a,b;
scanf("%d",&n);
a=n/16;
b=n-(16*a);
x=10*a+b;
printf("%d",x);
return 0;
}
