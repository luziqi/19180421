#include <stdio.h>
#include <stdlib.h>

struct Node* construct(int arr[], int size);
struct Node* reverse(struct Node* head);

struct Node {
	int val;
	struct Node* next;
};

int main()
{
	int arr[]={1,2,3,4,5};
	struct Node* head;
    head = construct(arr,5);
    head=reverse(head);
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
struct Node* reverse(struct Node* head)
{
	if(head->next == NULL)    
    {  
       return head;  
    }  
  
    Node *a=head,*p = head->next,  *q = head->next->next;  
    while(q->next != NULL)  
    {          
      p->next=a;
      a=p;
	  p=q;
      q=q->next;
    } 
    p->next=a;
    q->next=p;
    head->next=NULL;  
    head = q;         
    return head;  
}  
