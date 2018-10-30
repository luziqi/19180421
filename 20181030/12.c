#include<stdio.h>
#define M 4
#define K 5
#define N 6
void matrix_product(int mat1[][K], int mat2[][N], int produtct[][N]);

int main()
{
	int mat1[M][K];
	int mat2[K][N];
	int produtct[M][N];
	for(int i=0;i<=M-1;i++)
	{
		for(int j=0;j<=K-1;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
	for(int m=0;m<=K-1;m++)
	{
		for(int n=0;n<=N-1;n++)
		{
			scanf("%d",&mat2[m][n]);
		}
	}
	matrix_product(mat1,mat2,produtct);
	
	return 0;

 } 
 
void matrix_product(int mat1[][K], int mat2[][N], int produtct[][N])
{
	int Sum;
	for(int i=0;i<M;i++)
  for(int j=0;j<K;j++)
  {
   Sum=0;
   for(int k=0;k<N;k++)
    Sum+=mat1[i][k]*mat2[k][j];
   produtct[i][j]=Sum;
  }
  for(int m=0;m<M;m++)
{
  for(int n=0;n<N;n++)
   printf("%d ",produtct[m][n]);
  printf("\n");
}
}
	
