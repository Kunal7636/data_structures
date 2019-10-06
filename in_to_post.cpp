#include<iostream>
#include<stack>
#include<cstring>
#include<stdio.h>

using namespace std;
class stacks
{
	public:
	stack <char> s;
	int check_presi(char ac);
	


};
int stacks::check_presi(char ac)
{
  if(ac=='+'||ac=='-')
  {
	  return 2;
  }
  if(ac=='/'||ac=='*')
  {
	  return 1;
  }
  if(ac=='(')
	  return 3;
  if(ac==')')
	  return 4;

  else
	  return 0;

 

}
int main(int argc,char* argv[])
{
	stacks a1;
	char str2[100];
	char* str=argv[1];
	int l=strlen(str);
	char ch;
	int k=0;
	for(int i=0;i<l;i++)
	{
              ch=str[i];
	      if(ch>='A'&&ch<='Z'||ch>='a'&&ch<='z')
	      {
		str2[k]=ch;
		k++;	
	      }
	    
	      else
	      {
		      if(a1.s.empty())
		      {
			     a1.s.push(ch);
		      }
		      else
		      {
			      char b=a1.s.top();
			      int ad;
			      int ax=a1.check_presi(ch);
			      int bx=a1.check_presi(b);
			      if(ax>bx||ax==bx)
				      ad=1;
			      else
				      ad=0;
			      if(ad==1)
			      {
			       while(!a1.s.empty())
			       {
				      
				       char dd;
				      dd= a1.s.top();
				      a1.s.pop();
				      str2[k]=dd;
				      k++;
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
		char gg =a1.s.top();
		a1.s.pop();
		str2[k]=gg;
		k++;
	}
	for(int i=0;i<k;i++)
	cout<<str2[i];
	
	
	return 0;
}
