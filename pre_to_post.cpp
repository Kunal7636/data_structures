#include<iostream>
#include<stdlib.h>
#include<cstring>
#include<string>
#include<stack>
using namespace std;
class mystacks
{
	public:
		stack<string> s;
};
int main(int argc,char* argv[])
{
	mystacks a1;
        char* str=argv[1];
	int l=strlen(str);
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
			string s1;
			string s2;
			s1=a1.s.top();
			a1.s.pop();
			s2=a1.s.top();
			a1.s.pop();
			string gg;
			gg=gg+s1+s2+ss;
			a1.s.push(gg);
		}
	}
	cout<<a1.s.top();
	return 0;
}
