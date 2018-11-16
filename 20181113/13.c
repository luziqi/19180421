#include<stdio.h>

struct Student
	{
		char id[10];
		char name[10];
		int score;
	};
	
int main()
{
	struct Student student[10];
	int n,max=0,min=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%s%s%d",student[i].name,student[i].id,&student[i].score);
	}
	for(int j=0;j<n;j++)
	{
		if(student[max].score<student[j].score)
		{
			max=j;
		}
		if(student[min].score>student[j].score)
		{
			min=j;
		}
	}
	printf("%s %s\n",student[max].name,student[max].id);
	printf("%s %s\n",student[min].name,student[min].id);
	return 0;
}
