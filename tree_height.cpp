#include<iostream>
using namespace std;
class mynode
{
	public:
		int data;
		mynode* next[2];
		mynode* create_node(int data);
		int binary(mynode* root);
		int heightnode(mynode* root);
};
mynode* head=NULL;
mynode* head1=NULL;

mynode* mynode::create_node(int da)
{
       mynode* temp=new mynode();
       temp->data=da;
       temp->next[0]=NULL;
       temp->next[1]=NULL;
       return temp;
}

int mynode::heightnode(mynode* root)
{
       if(root==NULL)
       {
	       return 0;
       }
       return max(heightnode(root->next[0]),heightnode(root->next[1]))+1;

}
int main()
{
	mynode b;
      head=b.create_node(1);
    	head->next[0]=b.create_node(2);
	head->next[1]=b.create_node(3);
	head->next[0]->next[0]=b.create_node(4);
	head->next[0]->next[1]=b.create_node(5);
       int f=b.heightnode(head);
       cout<<f;
        return 0;
}
