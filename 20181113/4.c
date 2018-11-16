#include<stdio.h>
void InsertionSort(int arr[],int left,int right);
 
 int main()
 {
 	int arr[10];
 	int left,right,i,j;
 	scanf("%d%d",&left,&right);
 	for(i=0;i<10;i++)
 	{
 		scanf("%d",&arr[i]);
	 }
	InsertionSort(arr,left,right);
	for(j=0;j<10;j++)
	printf("%d ",arr[j]);
	 return 0;
 }
 
void InsertionSort(int arr[],int left,int right) 
  {
  	int j=0,i = 0;
  	int tmp;
  	int *a=arr;
  	for(i = left;i<=right;i++)
  	{
      tmp = a[i]; 
	  j = i-1;  
	  while(j>=left&&tmp<a[j])  
	  {
	    a[j+1] = a[j]; 
		j--; 
	  }
	  a[j+1] = tmp; 
	}
  }

