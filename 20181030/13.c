#include<stdio.h>
#define M 4
#define N 5
void matrix_transpose (int mat[M][N], int transposed[N][M]);

int main()
{
	int mat[M][N];
	int transposed[N][M]; 
	for(int i=0;i<=M-1;i++)
	{
		for(int j=0;j<=N-1;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	matrix_transpose(mat,transposed);
	
	return 0;

 } 
 
void matrix_transpose (int mat[M][N], int transposed[N][M])
{
	for(int i=0;i<=N-1;i++)
	{
		for(int j=0;j<=M-1;j++)
		{
			transposed[i][j]=mat[j][i];
		}
	}
	for(int i=0;i<=N-1;i++)
	{
		for(int j=0;j<=M-1;j++)
		{
			printf("%d ",transposed[i][j]);
		}
		printf("\n");
	}
	
}
