//input 1 2 3 4 5
// output 5 4 3 2 1
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
struct node* head;
void insert(int x,int n)
{
	struct node* temp=(struct node* )malloc(sizeof(struct node));
	temp->data=x;
	temp->next=NULL;
	if(n==0)
	head=temp;
	else
	{
		temp->next=head;
		head=temp;
	}


}
void print()
{
	struct node* temp;
	temp=head;
	printf("THE PRESENT LIST IS :\n");
	while(temp!=NULL)
	{
	 printf("%d  ",temp->data);
	 temp=temp->next;
	}
	printf("\n");
}
int main(void)
{
	head=NULL;
	printf("Enter the number of elements in the list");
	int n;
	scanf("%d",&n);
	int x;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&x);
                insert(x,i);
	        print();
	}
	return 0;

}
