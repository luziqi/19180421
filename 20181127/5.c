#include <stdio.h>
#include <stdlib.h>

struct Node* construct(int arr[], int size);
struct Node* Delete(struct Node* head, struct Node* target);

struct Node {
	int val;
	struct Node* next;
};

int main()
{
	int arr[]={1,2,3,4,5};
	int n;
	Node *target;
    struct Node* head =construct(arr,5);
    scanf("%d",&n);
    target=head;
    if(n==1)
    {
    	target=head;
	}
	else
	{
		for(int i=1;i<n;i++)
    {
        target=target->next;	
	}
    }
	head=Delete(head,target);
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
struct Node* Delete(struct Node* head, struct Node* target)
{
	Node *p;
	p=head;
	while(p->next!=target)
	{
		p=p->next;
	}
	if(head==target)
	{
		head=head->next;
		delete target;
		return head;
	}
	else
	{
		p->next=target->next;
		
		delete target;
		return head;
	}
	
}
