# include <iostream>
# include <cstring>
using namespace std;
void chk_equal(char str1[],char str2[],int l1,int l2){
	int flag=0;
	if(l1==l2){
		for(int i=0;i<l2;i++){
			if(str1[i]==str2[i]||(str1[i]+32==str2[i])||(str1[i]-32==str2[i]))
			{
				continue;
			}
			else
			{
				flag=1;
				break;

			}
		}
	}
	else
		flag=1;
	if(flag==1)
		cout<<"The Strings are not equal";
	else
		cout<<"CONGO!! The Strings are equal";
}
int main(){
 char str1[100];
 char str2[100];
 cin.get(str1,100);
 cin>>str2;
 int l1=strlen(str1);
 int l2=strlen(str2);
 chk_equal(str1,str2,l1,l2);
 return 0;
}
