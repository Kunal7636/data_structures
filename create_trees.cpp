//input 1 2 3 4 5
//output 1 2 4 5 3 
#include<iostream>

#include<stdlib.h>
using namespace std;

class node
{
	public:
		int data;
        		node* next[2];
	node*	create_node(int arr[],node* root,int j,int n);
	void print_node(node* root);
		
};

node* node::create_node(int arr[],node* root,int j,int n)
{
   if(j<n){
	node* temp=new node();
	temp->data=arr[j];
	temp->next[0]=NULL;
	temp->next[1]=NULL;
         root=temp;
	if(arr[2*j+1]!=-1)
	{
	        
		root->next[0]=create_node(arr,root->next[0],2*j+1,n);
	}
	if(arr[2*j+2]!=-1)
	{
		root->next[1]=create_node(arr,root->next[1],2*j+2,n);

		
	}
   }
	return root;
	
}
void node::print_node(node* root)
{
	if(root==NULL)
		return ;
	cout<<root->data<<" ";
	print_node(root->next[0]);
	print_node(root->next[1]);


}

int main(int argc,char* argv[])
{
	node a;
	int arr[argc-1];
	int j=0;
	int n=argc-1;
	int k=0;
	for(int i=1;i<argc;i++)
	{
               int m=atoi(argv[i]);
	      arr[k]=m;
	      k++;
	}
 node* root= a.create_node(arr,root,j,n);
 a.print_node(root);
	return 0;
}
