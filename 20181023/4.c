#include <stdio.h>
int main()
{
	int X,Y,N,a=0;
	scanf("%d",&N);
	for(X=1;X<=100;X++)
	{
		for(Y=X;Y<=100;Y++)
		{
		if(X*X+Y*Y==N)
		{printf("%d %d\n",X,Y);
		a++;
		}
		}
	}
	if(a==0)
	printf("No Solution");
	
	return 0;
}
