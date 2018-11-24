#include <stdio.h>

int Sum(int n1,int n2);

int main()
{
    int n1,n2;
    scanf("%d%d",&n1,&n2);   
    printf("%d",Sum(n1,n2));
	return 0;
}

int Sum(int n1,int n2)
{
	int carry,sum;
	if(n2==0)
	return n1;
	sum = n1^n2;
	carry=(n1&n2)<<1;
	
	return Sum(sum,carry);
}
