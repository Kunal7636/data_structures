#include <iostream>
using namespace std;
int count_length(char str[]){
	int count=0,i=0;
	while(str[i]!='\0'){
	count++;
	i++;
	}
	return count;
}
int main(void){
	char str[100];
	cin.get(str,100);
	int count =count_length(str);
	cout<<count;
	return 0;
}
