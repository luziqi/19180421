#include <stdio.h>
#include <stdlib.h>

struct Node* construct(int arr[], int size);
void clear(struct Node* head);

struct Node {
	int val;
	struct Node* next;
};

int main()
{
	int arr[]={1,2,3,4,5};
	struct Node* head;
    head = construct(arr,5);
    clear(head);
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
void clear(struct Node* head)
{
    Node *temp;
    if(head->next==NULL)
    delete head;
    while(head->next!=NULL)
   {
        temp=head;
        head=head->next;
        delete temp;
   }
    delete head;
 
}  
