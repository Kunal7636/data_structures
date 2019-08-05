# include <iostream>
# include <string>
using namespace std;
void reverse(string &str,int i,int j){
	if(i<j)
		{
		char temp =str[j];
		str[j]=str[i];
		str[i]=temp;
		i++;
		j--;
		reverse(str,i,j);}
}
int main(void){
	string str;
	cin>>str;
	int i=0;
	int j=str.length()-1;
	reverse(str,i,j);
	cout<<str;
	return 0;
}
