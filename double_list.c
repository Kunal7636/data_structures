#include<stdio.h>
#include<stdlib.h>
// input 1 2 3 4 5
// out put  1 2 3 4 5
// reverse  5 4 3 2 1
struct node
{
	int data;
	struct node* ptr[2];
};
struct node* head=NULL;
struct node* head2=NULL;
void createnode(int n,int count)
{
	struct node* temp =(struct node*)malloc(sizeof(struct node));
      if(count==0)
      {	
	        temp->data=n;
		temp->ptr[0]=head2;
		temp->ptr[1]=head;
		head=temp;
      }
      if(count>0)
      {
	      temp->data=n;
	      temp->ptr[0]=head2;
	      temp->ptr[1]=head;
	      head->ptr[0]=temp;
	      head=temp;

      }
	

}
void printnode()
{
	struct node* temp;
	struct node* temp2;
	temp=head;
	printf("THE ORIGINAL LIST: ");
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		if(temp->ptr[1]==NULL)
		{
                        temp2=temp;// to make a ptr pointing to end so that it can be traversed backward
		}
   
		temp=temp->ptr[1];
	}	
	printf("\n");
	printf("THE REVERSE LIST: ");
	while(temp2!=NULL)
	{
		printf("%d ",temp2->data);
                temp2=temp2->ptr[0];

	}
	
}
int main(int argc,char* argv[])
{
 int count=0;
	for(int i=argc-1;i>0;i--)
 		{
			int n=atoi(argv[i]);
			createnode(n,count);
			count++;
		}
	printnode();
	return 0;
}
