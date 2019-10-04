//input 1 2 3 4 5 6 7
//list entered 7 6 5 4 3 2 1
//output of pop 7
//out put of peeek 6 
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
		void pop();
		void peek();
		void list();

};
node* head=NULL;
void node::list()
{
	node* temp=new node();
	temp=head;
		while(temp->next!=NULL)
		{
			cout<<temp->data<<" ";
			temp=temp->next;
		}
}
void node::getnode(int a)
{
	node* temp=new node();
	temp->data=a;
	temp->next=head;
	head=temp;
	
}
void node::pop()
{
	node* temp=new node();
	temp=head;
	cout<<temp->data;
	head=temp->next;


}
void node::peek()
{
	node* temp=new node();
	temp=head;
	cout<<temp->data;
}
int main(int argc,char* argv[])
{
	node n1;
	int n;
	for(int i=1;i<argc;i++)
	{
		n=atoi(argv[i]);
		n1.getnode(n);
	}
	n1.list();
	cout<<endl;
	cout<<"This will give out the top element of stack\n";
	n1.pop();
	cout<<endl;
	cout<<"this will give out top element without deleting it\n";
	n1.peek();
return 0;

}
