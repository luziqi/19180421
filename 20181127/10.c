#include <stdio.h>

int main()
{
	int arr[40000];
	int n,sum=0;
	scanf("%d",&n);
	for(int k=0;k<n;k++)
	{
		scanf("%d",&arr[k]);
	}
	
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			sum++;
		}
	}
	printf("%d\n",sum);
	
	return 0;
}
