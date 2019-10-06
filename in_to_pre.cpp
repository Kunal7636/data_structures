// input a+b*c+d
// output ++a*bcd
#include<iostream>
#include<stdlib.h>
#include<stack>
#include<cstring>
#include<string>
using namespace std;
class mystack
{
	public:
		stack<char> s;
		stack<string> s2;
		int check_presi(char ac);
};
int mystack::check_presi(char ac)
{
	if(ac=='+'||ac=='-')
	{
		return 2;
	}
	if(ac=='*'||ac=='/')
	{
		return 1;
	}
	else
		return 0;
}
int main(int argc,char* argv[])
{
	mystack a1;
	char* str=argv[1];
	int l=strlen(str);
	for(int i=0;i<l;i++)
	{
             char ch;
	     
	     string ss;
		    ss=str[i];
		    ch=str[i];
	     if(ss>="A"&&ss<="Z"||ss>="a"&&ss<="z")
	     {
             	a1.s2.push(ss);
	     }
	     else
	     {
		     if(a1.s.empty())
			     a1.s.push(ch);
		     else
		     {
			     
			    char b=a1.s.top();
			     int ad;
			     int ax=a1.check_presi(ch);
			     int bx=a1.check_presi(b);
		//	     cout<<ax<<" "<<bx<<" "<<ch<<" b "<<b<<endl;
			     if(ax>bx||ax==bx)
			     {
				     ///insert
				     while(!a1.s.empty())
				     {
					     string ss1=a1.s2.top();
					     a1.s2.pop();
					     string ss2=a1.s2.top();
					     a1.s2.pop();
					     char aad=a1.s.top();
					     a1.s.pop();
					     ss2=aad+ss2+ss1;
					     a1.s2.push(ss2);
					    // cout<<a1.s2.top()<<" here "<<endl;

				     }
				     a1.s.push(ch);
			     }
			     else
			     {
				     a1.s.push(ch);
			     }
		     }
	     }
	}
	while(!a1.s.empty())
                                     {
                                             string ss1=a1.s2.top();
                                             a1.s2.pop();
                                             string ss2=a1.s2.top();
                                             a1.s2.pop();
                                             char aad=a1.s.top();
                                             a1.s.pop();
                                             ss2=aad+ss2+ss1;
                                             a1.s2.push(ss2);
                                            // this is for so that if any thing is left it can be covered

                                     }

	cout<<a1.s2.top();

	return 0;

}
