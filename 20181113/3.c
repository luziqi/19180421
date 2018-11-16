#include<stdio.h>
 int binary_search_recursive(int arr[],int left,int right, int query);
 int binary_search_iterative(int arr[],int left,int right, int query);

 int main()
 {
 	int left,right,query,i,j;
 	scanf("%d%d%d",&left,&right,&query);
 	int arr[right];
 	for(i=left;i<=right;i++)
 	{
 		scanf("%d",&arr[i]);
	 }
	printf("%d\n",binary_search_recursive(arr,left,right,query));
	printf("%d\n",binary_search_iterative(arr,left,right,query));
	 return 0;
 }

 int binary_search_recursive(int arr[],int left,int right, int query)
  {
  	if(left>right) return -1;
  	int mark=(right+left)/2;
 	if(arr[mark]==query)
	 return mark;
	 else if(arr[mark]<query)
	 return binary_search_recursive(arr,mark+1,right,query);
	 else
	 return binary_search_recursive(arr,left,mark-1,query);
 }

 int binary_search_iterative(int arr[],int left,int right, int query)
 {
 	int mark=(right+left)/2;
 	while(arr[mark]!=query)
 	{
 		if(arr[mark]<query)
 		{
 			if(mark==right) return -1;
 			mark = (mark+right+1)/2;
		 }
		 else
		 {
		 	if(mark==left) return -1;
		 	mark = (mark+left-1)/2;
		 }
	 }
	 return mark;
 }
