#include<stdio.h>
int f(int);
int main()
{    int i,j;    
for(i=0;i<=4;i++)    
{        
for(j=0;j<9-2*i;j++)            
printf(" ");        
for(j=0;j<(i+1);j++)            
printf("%3d",f(i)/f(j)/f(i-j));        
printf("\n");    
}
return 0;
}
int f(int l)
{
if(l==1||l==0)
return 1;
else
return l*f(l-1);
}
