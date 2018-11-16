#include<stdio.h>
#include<string.h> 
 int P[20][20];
 
void f(int P[][20],int x,int y,int start,int N);
 
int main() 
{ 
    int N;  
    scanf("%d",&N); 
    memset(P, 0, sizeof P); 
    f(P,0,0,1,N);
    for(int n=0;n<N;n++)
    {
        for(int m=0;m<N;m++)
        {
            printf("%2d",P[n][m]);
        }
        printf("\n");
    }
    return 0;
    }

void f(int P[][20],int x,int y,int start,int N)
{
	int i,j;
	if(N<=0) return;
	if(N==1)
	{
		P[x][y]=start;
		return;
	}
	for(i=x;i<x+N-1;i++)
	P[y][i]=start++;
	for(j=y;j<y+N-1;j++)
	P[j][x+N-1]=start++;
	for(i=x+N-1;i>x;i--)
	P[y+N-1][i]=start++;
	for(j=y+N-1;j>y;j--)
	P[j][x]=start++;
	f(P,x+1,y+1,start,N-2);
	
}
