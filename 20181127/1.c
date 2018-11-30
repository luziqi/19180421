#include <stdio.h>
#include <stdlib.h>

struct Node* construct(int arr[], int size);
#define N 5 
struct Node {
	int val;
	struct Node* next;
};

int main()
{
	int arr[N]={1,2,3,4,5};
	int n=N;
    struct Node* head =construct(arr,n);
    while(head!=NULL)
    {
    	printf("%d\n",head->val);
    	head=head->next;
	}
	return 0;
}

struct Node* construct(int arr[], int size)
{
	Node *head,*p1,*p2;
	head = NULL;
	for(int i=0;i<size;i++)
	{
		p1=(Node *)malloc(sizeof(Node));
		p1->val = arr[i];
		if(head == NULL)
		{
			head = p1; 
			p2 = p1;
		}
		else
		{
			p2->next = p1; 
			p2 = p1;
		}
	}
	p2->next=NULL;
	return head;
}
