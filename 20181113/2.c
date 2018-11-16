#include<stdio.h>
 void BubbleSort(int arr[], int left, int right);
 
 int main()
 {
 	int arr[5];
 	int left,right,i,j;
 	scanf("%d%d",&left,&right);
 	for(i=0;i<5;i++)
 	{
 		scanf("%d",&arr[i]);
	 }
	 BubbleSort(arr, left, right);
	 
	 return 0;
 }
 
 void BubbleSort(int arr[], int left, int right)
 {
 	int i,j,temp;
 	int *a=NULL;
 	a = &arr[0];
 	for(i=0;i<4;i++)
 	{
 		for(j=i+1;j<5;j++)
 		{
 			if(arr[i]>arr[j])
 			{
 				temp = a[i];
 				a[i]=a[j];
 				a[j]=temp;
			 }
		 }
	 }
 	
 }
