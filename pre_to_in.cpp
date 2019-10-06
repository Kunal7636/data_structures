// input ++a*bcd
// output a+b*c+d
#include<iostream>
#include<stdlib.h>
#include<stack>
#include<string>
#include<cstring>
using namespace std;
class mystack
{
	public:
	stack<string> s;

};
int main(int argc,char* argv[])
{
	mystack a1;
	char* str=argv[1];
	int l=strlen(str);
	string str2;
	for(int i=l-1;i>=0;i--)
	{
		string ss;
		ss=str[i];
		if(ss>="A"&&ss<="Z"||ss>="a"&&ss<="z")
		{
			a1.s.push(ss);
		}
		else
		{
			string ch1;
			string ch2;
			ch1=a1.s.top();
			a1.s.pop();
			ch2=a1.s.top();
			a1.s.pop();
			str2=str2+ch1+ss+ch2;
			a1.s.push(str2);
			str2="";
		}
	}
	cout<<a1.s.top();
	return 0;
}
