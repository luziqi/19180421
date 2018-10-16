#include <stdio.h>
int main()
{
int n,a,b,c,result;
scanf("%d",&n);
a=n%10;
b=(n-a)/10%10;
c=n/100;
result=a*100+b*10+c;
printf("%d",result);
return 0；
}
