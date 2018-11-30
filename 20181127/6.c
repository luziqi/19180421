#include <stdio.h>
#include <stdlib.h>

struct Node* construct(int arr[], int size);
struct Node* Delete(struct Node* head, int val);

struct Node {
	int val;
	struct Node* next;
};

int main()
{
	int arr[]={1,2,2,4,5};
	int n;
	Node *target;
    struct Node* head =construct(arr,5);
    scanf("%d",&n);
    head=Delete(head,n);
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
struct Node* Delete(struct Node* head, int val)
{
    Node *p1,*p2;
	if(head == NULL)
	{	
		return NULL;
	}
	if(head->val == val)  
	{	   
		p1 = head;    
		head = head->next;    
		free( (void *)p1 );
		return Delete(head,val);
	}
	else
	{       	    
		p1 = head;    
		p2 = head->next;  
		while(p2->val != val && p2->next != NULL)
	{ 	
			p1 = p2;    
			p2 = p2->next;
		}
		if(p2->val == val)  
		{	
			p1->next = p2->next;	
			free( (void *)p2 );
			return Delete(head,val); 
		}
	}
	return head;
}
