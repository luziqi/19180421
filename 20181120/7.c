#include <stdio.h>
void MergeSort(int arr[], int left, int right,int temp[]);
void mergearray(int arr[], int first, int mid, int last, int temp[]) ;
int arr[10];
int temp[10];
int main()
{
	int left,right;

	for(int j=0;j<10;j++)
	{
		scanf("%d",&arr[j]);
	}
	scanf("%d%d",&left,&right);
	MergeSort(arr,left,right,temp);
    for(int i=0;i<10;i++)
    {
    	printf("%d ",arr[i]);
	}
    return 0;
}

void MergeSort(int arr[], int left, int right,int temp[])
{
	
	if(left<right)
	{
		int mid=(left+right)/2;
		MergeSort(arr,left,mid,temp);
	    MergeSort(arr,mid+1,right,temp);
	    mergearray(arr,left,mid,right,temp);
	}
}

  void mergearray(int a[], int first, int mid, int last, int temp[])  
{  
    int i = first, j = mid + 1;  
    int m = mid,   n = last;  
    int k = 0;  
      
    while (i <= m && j <= n)  
    {  
        if (a[i] <= a[j])  
            temp[k++] = a[i++];  
        else  
            temp[k++] = a[j++];  
    }  
      
    while (i <= m)  
        temp[k++] = a[i++];  
      
    while (j <= n)  
        temp[k++] = a[j++];  
      
    for (i = 0; i < k; i++)  
        a[first + i] = temp[i];  
} 
