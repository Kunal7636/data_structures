// check the given string is palindrome or not

#include <iostream>
#include <string>
using namespace std;
void check_str(string str){
	int i=0,flag=0;
	int j=str.length()-1;
	int go=str.length()/2; // defining end of i
	int end;
        if(str.length()%2==0)
		end=str.length()/2;   // defining the end of j;
	else
		end=(str.length()/2)+1;
	while(i<go&&j>=end){
                if(str[i]!=str[j]){
			flag=1;
			break;
		}
		i++;
		j--;
	}
	if(flag==0)
		cout<<"The string is palindrome";
	
	else
		cout<<"The string is not a palindrome";

}
int main(void){
	string str;
	cin>>str;
	check_str(str);  // to check string is palindrome or not
	return 0;
}
