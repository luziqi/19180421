#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#define random(x) (rand()%x)

int N;


int max(int[]);
int min(int[]);
int plus(int[]);
double fang(int[],int);
int main()
{
	int suiji,Max,Min,Sum,Mean;
	double Fangcha,Biaozhuncha;
    int arr[100000];
    scanf("%d",&N);
    srand((unsigned)(time(NULL)));

    for(int i=0;i<=N-1;i++) 
    {
        
        suiji = random(N);
        arr[i]=suiji;
    
	}
	Max=max(arr);
	printf("最大值下标：%d\n",Max);
	Min=min(arr);
	printf("最小值下标：%d\n",Min);
	Sum=plus(arr);
	printf("和：%d\n",Sum);
	Mean=Sum/N;
	printf("平均值：%d\n",Mean);
	Fangcha=fang(arr,Mean);
	printf("方差：%.2f\n",Fangcha);
	Biaozhuncha=sqrt(Fangcha);
	printf("标准差：%.2f\n",Biaozhuncha);
	return 0;

}



int max(int arr[])
{
	int max=0;
	int xiabiao;
	for(int i=0;i<=N-1;i++)
	{
		if(max<arr[i])
		{
		max=arr[i];
		xiabiao=i;
		}
	}
	return xiabiao;
	
}

int min(int arr[])
{
	int min=arr[0];
	int xiabiao=0;
	for(int i=0;i<=N-1;i++)
	{
		if(min>arr[i])
		{
		min=arr[i];
		xiabiao=i;
		}
	}
	return xiabiao;
	
}

int plus(int arr[])
{
	int sum=0;
	for(int i=0;i<=N-1;i++)
	{
		sum+=arr[i];
	}
	return sum;
}

double fang(int arr[],int Mean)
{
	double result;
	double sum=0,ji=0;
	for(int i=0;i<=N-1;i++)
	{
		ji=(arr[i]-Mean)*(arr[i]-Mean);
		sum=sum+ji;
	}
	result=sum/N;
	return result; 
}

