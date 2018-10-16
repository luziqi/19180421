# include <stdio.h>
int main(void)
{
    int a, b, r, x, y;

    scanf("%d / %d", &a, &b);
    x = a;
    y = b;
    if(a > b)
    {
        while(a != 0)
      {
        r = b % a;
        b = a;
        a = r; 
		
      }
        printf("%d / %d", x / b, y / b);
    }
    else
    {
        while(b != 0)
        {
        r = a % b;
        a = b;
        b = r;
        }
        printf("%d / %d", x / a, y / a);
    }
		 return 0;
    }
   
