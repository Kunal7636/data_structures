#include<iostream>
#include<stdlib.h>
using namespace std;

class node
{
	private:
		int data;
		node* next;
	public:
		void getnode(int a);
		void print();

};
node* head=NULL;
void node::getnode(int a)
{
	node* temp= new node();
	temp->data=a;
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

int main(int argc,char* argv[])
{
	node c;
	for(int i=argc-1;i>0;i--)
	{
                int n=atoi(argv[i]);
		c.getnode(n);
	}

	c.print();
	return 0;
}
