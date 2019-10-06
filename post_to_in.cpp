#include<iostream>
#include<stdlib.h>
#include<cstring>
#include<string>
#include<stack>
using namespace std;
class mystacks
{
	public://
		stack <string> s;

};
int main(int argc,char* argv[])
{
	mystacks a1;

	char* str=argv[1];
	string str1;
	string s2;
        int l=strlen(str);
	for(int i=0;i<l;i++)
	{
		s2=str[i];
		if(s2>="A"&&s2<="Z"||s2>="a"&&s2<="z")
		{
                               a1.s.push(s2);

		}
		else
		{
                    string ch1;
		    string ch2;
		    ch1=a1.s.top();
		    a1.s.pop();
		    ch2=a1.s.top();
		    a1.s.pop();
		    str1=str1+ch2;
		    str1=str1+s2+ch1; 
		    a1.s.push(str1);
		    str1="";
		}
	}
  cout<<a1.s.top();
}

