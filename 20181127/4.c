#include <stdio.h>
#include <stdlib.h>

struct Node* construct(int arr[], int size);
struct Node* insert(struct Node* head, int val);

struct Node {
	int val;
	struct Node* next;
};

int main()
{
	int arr[]={1,2,2,5,6};
	int n;
    struct Node* head =construct(arr,5);
    scanf("%d",&n);
    head=insert(head,n);
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
struct Node* insert(struct Node* head, int val)
{
	Node *a,*b,*newp;
	a=head,b=head;
	a=a->next;
	if(val<=b->val)
	{
		newp=(Node *)malloc(sizeof(Node));
		newp->next=head;
		newp->val=val;
		return newp;
	}
	while(a->next!=NULL)
	{
		if(b->val<=val&&val<a->val)
		{
		newp=(Node *)malloc(sizeof(Node));
		newp->next=a;
		b->next=newp;
		newp->val=val;
		return head;
		}
		a=a->next;
		b=b->next;
	}
	newp=(Node *)malloc(sizeof(Node));
	a->next=newp;
	newp->next=NULL;
	newp->val=val;	
	return head;
}
