// to print middle element of linked list
// command line input 6 1 2 3 4 5 6
#include<stdio.h>
#include<stdlib.h>


struct node
{
	int data;
	struct node* next;
};

// entering the element 
void push(struct node** head ,int numb){
	struct node* head2;
	struct node* temp=(struct node* )malloc(sizeof(struct node));
	
	temp->data=numb;
	temp->next=*head;
	*head=temp;
}

// printing middle element
void find_mid( struct node* head,int numb)
{
	struct node* temp= head;
	int count =numb/2;
        for(int i=0;i<count;i++)
	{
	   temp=temp->next;
	}
	printf("%d mid \n",temp->data);
}
// printing middle element method 2

void find_middle(struct node* head)
{
	struct node* a = head;
	struct node* b = head;
        if(head!=NULL)
	{
		while(b!=NULL && b->next!=NULL )
		{
			b=b->next->next;
			a=a->next;
		}
	}
	printf( "%d middle",a->data);
}


int main(int argc,char *argv[])
{       struct node* head;
	head=NULL;
	int n=atoi(argv[1]);
	int numb;

	for(int i=argc-1;i>1;i--)
	{
		numb=atoi(argv[i]);
		push(&head,numb);
	}
        

	find_mid(head,n);
	find_middle(head);

	return 0;
}
