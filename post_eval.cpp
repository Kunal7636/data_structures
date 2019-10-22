//input 231*+9-
//output -4
#include<iostream>
#include<stack>
#include<cstring>
#include<string>
#include<stdlib.h>
using namespace std;
class mystack
{
    public:
	    stack<int> s;

};
int main(int argc,char* argv[])
{

	mystack o1;
	char* str=argv[1];
	int l=strlen(str);
	for(int i=0;i<l;i++)
	{
		char ch=str[i];
		if(ch>='0'&&ch<='9')
		{
			
			o1.s.push(ch-'0');
		}
		else
		{
			int a=o1.s.top();
			o1.s.pop();
			int b=o1.s.top();
			o1.s.pop();
		
			switch(ch)
			{
                               case '+':
				       o1.s.push(a+b);
				
				       break;
		               case '-':
				       o1.s.push(b-a);

				       break;
			       case '*':
				       o1.s.push(a*b);
				        
                                       break;
			       case '/':
				       o1.s.push(a/b);
				        
                                       break;
			}
			
		}
	}
	cout<<o1.s.top();
	return 0;

}
