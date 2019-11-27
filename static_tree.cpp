#include<iostream>
#include<queue>
#include<stdlib.h>
using namespace std;
class mynode
{
	public:
  int data;
  mynode *next[2];
  mynode(int n)
  {
	  this->data=n;
	  this->next[0]=NULL;
	  this->next[1]=NULL;
  }
  void preorder(mynode* root)
  {
	  if(root==NULL)
		  return ;
	  cout<<root->data<<" ";
	  preorder(root->next[0]);
	  preorder(root->next[1]);
  }
};
void inorder(mynode* root)
{//left root right
	if(root==NULL)
		return ;
	inorder(root->next[0]);
	cout<<root->data<<" ";
	inorder(root->next[1]);

}
void postorder(mynode* root)
{//left right root

	if(root==NULL)
		return;
	postorder(root->next[0]);
	postorder(root->next[1]);
	cout<<root->data<<" ";
}

int  height(mynode* root)
{
	if(root==NULL)
		return -1;
	return max(height(root->next[0]),height(root->next[1]))+1;

}
void levelorder(mynode* root)
{
	if(root==NULL)
		return;
	queue<mynode* > q;
       q.push(root);
       while(!q.empty())
       {
            mynode* current =q.front();
	     cout<<current->data<<" ";
	     if(current->next[0]!=NULL)
		     q.push(current->next[0]);
	     if(current->next[1]!=NULL)
		     q.push(current->next[1]);
	     q.pop();

       }       
	
}
int main()
{
mynode* root=new mynode(1);
root->next[0]=new mynode(2);
root->next[1]=new mynode(3);
root->next[0]->next[0]=new mynode(4);
root->next[0]->next[1]=new mynode(5);
root->preorder(root);
cout<<endl<<" in printing"<<endl;
inorder(root);
cout<<endl<<"post order printing "<<endl;
postorder(root);
cout<<endl<<"height of a tree "<<endl;
int count=height(root);
cout<<count;
cout<<endl<<"level order traversal"<<endl;
levelorder(root);
cout<<endl<<"no of nodes in max height = height+1"<<endl;
cout<<"ans  "<<count+1;
return 0;
}
