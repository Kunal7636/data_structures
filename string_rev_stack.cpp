// input hello stacks
// output olleh skcats
#include<iostream>
#include<cstring>
#include<string>
#include<stdlib.h>
#include<stack>
using namespace std;
class mystacks
{
	public:
		stack<char> s;
};
int main(int argc,char* argv[])
{
	mystacks a1;

	for(int i=1;i<argc;i++)
	{
		char* str=argv[i];
		int l=strlen(str);
		for(int j=0;j<l;j++)
		{
			a1.s.push(str[j]);
		}
		while(!a1.s.empty())
		{
			cout<<a1.s.top();
			a1.s.pop();
		}
		cout<<" ";

	}
	return 0;
}

