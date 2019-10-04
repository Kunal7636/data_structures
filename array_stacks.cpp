// array implementation of stacks
// input 1 2 3 4 5
// output 5
//        4
#include<iostream>

using namespace std;

class mystack
{
	int arr[100];
	int top_index=-1;
	public:
		void push(int a);
		int pop();
		int peek();
};
void mystack::push(int a)
{
	arr[top_index+1]=a;
	top_index++;

}
int mystack::pop()
{
	int n = arr[top_index];
	top_index--;
	return n;
}
int mystack::peek()
{
	return arr[top_index];
}



int main(int argc,char* argv[])
{
	mystack o1;
	for(int i=1;i<argc;i++)
	{
                 int n=atoi(argv[i]);
		 o1.push(n);
	}
	cout<<"This will display top most element and pop it\n";
   	int m= o1.pop();
	cout<<m;
	cout<<endl;
	cout<<"This displays the top element of stack without deleteing it\n";
 	int k= o1.peek();
	cout<<k;
//	cout<<"hello";
	return 0;
}
