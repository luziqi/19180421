#include<stdio.h>
void SelectionSort(int arr[],int left,int right);
 
 int main()
 {
 	int arr[10];
 	int left,right,i,j;
 	scanf("%d%d",&left,&right);
 	for(i=0;i<10;i++)
 	{
 		scanf("%d",&arr[i]);
	 }
	SelectionSort(arr,left,right);
	for(j=0;j<10;j++)
	printf("%d ",arr[j]);
	 return 0;
 }
 
 void SelectionSort(int arr[],int left,int right)
 {
 	int *a=arr;
 	int temp=a[0],i,j,k;
	 for(i=left;i<=right;i++)
	 {
	 	for(j=i;j<=right;j++)
	 	{
	 		if(temp>a[j])
	 		{
	 			k=temp;
	 			temp=a[j];
	 			a[j]=k;
			 }
		 }
		 a[i]=temp;
		 temp=a[i+1];
	 }
 }
