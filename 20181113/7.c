#include<stdio.h>
#include<string.h>

void plus(char A[],char B[]);
char A[1000],B[1000];
int a[1000],b[1000];
int len;
	
int main()
{
	scanf("%s%s",A,B);
	plus(A,B);

	return 0;
 }
 
 void plus(char A[],char B[])
 {
	int l1=strlen(A);
	int l2=strlen(B);
	if (l1>=l2)
	   len=l1;
	else
	   len=l2;
	for (int k = 0 ; k <= len ; k++)  
	a[k] = b[k]= 0; 
	for (int i = l1 - 1 ; i >= 0 ; i--)    
		a[l1 - i - 1] = A[i] - '0';       
	for (int j = l2 - 1 ; j >= 0 ; j--)    
		b[l2 - j - 1] = B[j] - '0';
	for (int m = 0 ; m < len ; m++)
	{
		a[m] = a[m] + b[m];    
		a[m+1]+= a[m] / 10;    
		a[m] = a[m] % 10;     
	}
	if (a[len] != 0) 
	len++;    
	for (int n = len - 1 ;n >= 0 ;n--) 
		printf("%d",a[n]);

  } 
