#include<iostream>
#include<stdio.h>
#include<queue>
using namespace std;
class mynode
{
	public:
		int data;
		mynode* next[2];

};
mynode* getnewnode(int i)
{
	mynode* temp=new mynode();
	temp->data=i;
	temp->next[0]=temp->next[1]=NULL;
	return temp;
}

mynode* insert(mynode* root,int i)
{
	if(root==NULL)
		root=getnewnode(i);
	else if(i<=root->data)
	{
		root->next[0]=insert(root->next[0],i);
	}
	else
		root->next[1]=insert(root->next[1],i);
	return root;
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
bool check_ele(mynode* root,int ele)
{
	if(root==NULL)
		return false;
	if(root->data==ele)
		return true;
	else if(ele<=root->data) 
		return check_ele(root->next[0],ele);
	else
		return check_ele(root->next[1],ele);



}
int main(int argc,char* argv[])
{
	int arr[argc-2];
	int k=0;
	int find=atoi(argv[1]);
	for(int i=2;i<argc;i++)
	{
            arr[k]=atoi(argv[i]);
	    k++;
	}
	mynode* root=NULL;
	for(int i=0;i<k;i++)
	{
	  root=insert(root,arr[i]);

	}
	cout<<"level order printing"<<endl;
	levelorder(root);
    bool af= check_ele(root,find);
    cout<<endl<<find<<" ";
    if(af==true)
	    cout<<"the element is present";
    else
	    cout<<"the element is not present";
   // 

};

