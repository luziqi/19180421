#include<stdio.h>
 int is_sorted(int arr[], int left, int right);
 
 int main()
 {
 	int arr[30];
 	int i,left,right;
 	scanf("%d%d",&left,&right);
 	for(i = 0;i<30;i++)
 	{
 		scanf("%d",&arr[i]);
	 }
	 printf("%d\n",is_sorted(arr,left,right));
	 
	 return 0;
 }
 
 int is_sorted(int arr[], int left, int right)
 {
 	int i;
 	for(i = left;i < right;i++)
 	{
 		if(arr[i]>=arr[i+1])
 		return 0;
	 }
	 return 1;
 }
