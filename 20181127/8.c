#include <stdio.h>
#include <stdlib.h>

struct Node* construct(int arr[], int size);
struct Node* merge(struct Node* head1, struct Node* head2);

struct Node {
	int val;
	struct Node* next;
};

int main()
{
	int arr1[]={1,1,3,7,9};
	int arr2[]={3,6,6,7,8};
	int n;
	Node *target;
	struct Node* head;
    struct Node* head1 =construct(arr1,5);
    struct Node* head2 =construct(arr2,5);
    head=merge(head1,head2);
    if(head==NULL)
    printf("NULL\n");
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
struct Node* merge(struct Node* head1, struct Node* head2)
{
	Node *p1,*p2,*head,*p3;
	int arr[10]; 
	p1=head1;
	p2=head2;
	head=construct(arr,10);
	p3=head;
	while(p3->next!=NULL)
	{
		if(p1->val<=p2->val)
		{
			p3->val=p1->val;
			p1=p1->next;
			p3=p3->next;
		}
		else
		{
			p3->val=p2->val;
			p2=p2->next;
			p3=p3->next;
		}
	}
	if(p1==NULL)
	p3->val=p2->val;
	else
	p3->val=p1->val;
	

	return head;
 } 
