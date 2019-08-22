#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
struct node* head;
struct node* head2;
void insert(int x,int n)
	{
	   
	struct node* temp=(struct node* )malloc(sizeof(struct node));
		
	        temp->data=x;
		temp->next=NULL;
                   if(n==0)
		   {
			   head=temp;
			   head2=temp;
		   }   
		   else
		   {
			   head2->next=temp;
			   head2=temp;
		   }
		
	}
void print()
{
	struct node* temp =head;
	while(temp!=0)
	{
		printf("%d  ",temp->data);
		temp=temp->next;
	}
}
int main(void){
       head=NULL;
       printf("How many number in list\n");
       int n;
       scanf("%d",&n);
       int x;
       for(int i=0;i<n;i++)
       {
	       printf("enter the number\n");
	       scanf("%d",&x);
	       insert(x,i);
	       print();
       }
       return 0;
    
}

