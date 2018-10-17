# include <stdio.h>
int main(void)
{
    int a, b, x,y,yinzi=1,i=2;
    scanf("%d / %d", &a, &b);
    x=a,y=b;
    if(a>b)
    {
    	while(i<=b)
    	{if(a%i==0&&b%i==0)
    	{yinzi=yinzi*i;
    	a=a/i,b=b/i;
    	i=i-1;
		}
		i++;}
		
	}
    else
    {
    	while(i<=a)
        {if(a%i==0&&b%i==0)
    	{yinzi=yinzi*i;
    	a=a/i,b=b/i;
    	i=i-1;
		}
		i++;}
			
	}
    printf("%d/%d\n",x/yinzi,y/yinzi);
		 return 0;
    }
   
