#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// input is 1 2 3 4 1 5 2 6 3 7 
// output loop no 1 : 1 2 3 4 
// output loop no 2 : 2 3 4 5
// output loop no 3 : 3 4 5 6
// for craeating loop we took two variables that means two pointers one for normal list and one for looping
struct node
{
	int data;
	struct node* next1;
	struct node* next2;
};
struct node* head=NULL;
struct node* head2=NULL;
int k=0;
void editnode(int n)
{
	struct node* temp;
          temp=head;
	  while(temp->data!=n)
	  {
		  temp=temp->next1;
	  }
	  head2->next2=temp;
	  
}
void createnode(int f,int n,int arr[]) // we entered value at end becuse we need to check if element is present in array or not the accordingly loop it.
{
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->data=f;
	arr[k]=f;
	k++;
	temp->next1=NULL;
	temp->next2=NULL;
	if(n==0)
	{
		head=temp;
		head2=temp;
	}
	else
	{
		head2->next1=temp;
		head2=temp;
	}
}
void check(int n,int arr[],int count)
{
	int flag=0;
   for(int i=0;i<count;i++)
   {
	   if(arr[i]==n)
	   {
		   flag=1;
		   break;
	   }
   }
   if(flag==1)
   {
	   flag=0;
	  // printf("going to edit node");
	   editnode(n);

   }
   else
   {
	  // printf("going to create node");
	    createnode( n,1,arr);
   }
}
void checkloop() // this function is checking loop pointer if any is present it is looping from there to check the elements present in loop
{
	struct node* temp;
	struct node* temp2;
	temp=head;
	int count=0;
	while(temp!=NULL)
	{
		
		if(temp->next2!=NULL)
		{
			printf("Loop NO %d :",count+1);
			count++;
			temp2=temp->next2;
			while(temp2!=NULL&&temp2->data!=temp->data)
			{
                                printf("%d ",temp2->data);
				temp2=temp2->next1;
			}
			
			printf("%d ",temp2->data);
			printf("\n");
		}
	
		temp=temp->next1;
	}
}
void printnode()
{
	struct node* temp;
	temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next1;
	}
}
int main(int argc,char* argv[])
{
	int count=1;
	int arr[100];
	int f=atoi(argv[1]);
	
	createnode(f,0,arr);
	for(int i=2;i<argc;i++)
	{
			
			int n=atoi(argv[i]);
			count++;
                         check( n,arr,count);
		
	}
	checkloop();
	printf("THE ORINGINAL LINK LIST\n");
	printnode();
	return 0;
}
