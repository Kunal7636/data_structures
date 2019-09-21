#include<iostream>
#include<stdlib.h>
//input 1 1 1 2 3 3 4 4 4 5
//output 1 2 3 4 5
using namespace std;
 class node
{ 
	private:
	int data;
	node* next;
	public:
	int p;
	 void getnode(int n);
	 void print();
	 void remove_dup();

};
node* head =NULL;
void node::getnode(int n)
{
	node* temp=new node();
	temp->data=n;
	temp->next=head;
	head=temp;
}
void node::print()
{
	node * temp=head;
	
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
void node::remove_dup()
	// we took 2 temp both initially pointing to same node the moved temp ahead of temp2 and if value of temp was equal to p we moved it to next node by skipping hte node. 
{
	node* temp=head; // we took a variable p and added the no
	node* temp2=head;
	p=temp->data;
	temp=temp->next;
	while(temp!=NULL)
	{
           if(temp->data==p)
	   {
                temp2->next=temp->next;
		temp=temp->next;
		
	   }
	   else
	   {
		   p=temp->data;
		   temp=temp->next;
		   temp2=temp2->next;
		   
	   }
	}
	 
}


int main(int argc,char* argv[])
{
	node c;
	for(int i=argc-1;i>0;i--)
	{
		int n=atoi(argv[i]);
		c.getnode(n);
	}
	c.remove_dup();
	c.print();
	return 0;
}

