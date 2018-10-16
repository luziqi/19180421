#include <stdio.h>
int main()
{
	int a,n,sum=0,b,c,d=0;
	printf("请输入n和a\n");
	scanf("%d%d",&n,&a);
    for(b=1;b<=n;b++)
	{  
		d=d*10+a;
		sum=sum+d;
	}
	printf("a+aa+aaa+...+n个a=%d",sum);
	return 0;
}
