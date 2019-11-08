//binary tree with grater no than root always to right of previous root and smaller no always left of previous root
//input 1 2 3 4 5 6
//output 1 middle 2 right 3 right 4 right 5 right 6 right
#include<iostream>
#include<stdlib.h>
using namespace std;
class mynode
{
	public:
   int data;
   mynode* ptr[2];
   mynode* insert(mynode* root,int data);
   void preorder(mynode* root,string a);

};
mynode* getNewNode(int data)
{
	mynode* newNode=new mynode();
	newNode->data=data;
	newNode->ptr[0]=newNode->ptr[1]=NULL;
	return newNode;
}
mynode* mynode::insert(mynode* root,int data)
{
	if(root==NULL)
		root=getNewNode(data);
	else if(data<=root->data)
		root->ptr[0]=insert(root->ptr[0],data);
	else
		root->ptr[1]=insert(root->ptr[1],data);
	return root;
}
void mynode::preorder(mynode* root,string a)
{
	if(root==NULL)return ;
	cout<<root->data<<" ";
	cout<<a<<" ";
	preorder(root->ptr[0],"left");
	preorder(root->ptr[1],"right");

}
int main(int argc,char* argv[])
{
   int k=0;    
   int arr[argc-1];
   for(int i=1;i<argc;i++)
   {
	   arr[k]=atoi(argv[i]);
	   k++;
   }
   mynode* root =NULL;
   mynode b;
   for(int i=0;i<k;i++)
   root=b.insert(root,arr[i]);
   b.preorder(root,"middle");
   return 0;
   //balanced binary tree
}
