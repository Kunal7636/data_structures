#include <iostream>
#include <cstring>
using namespace std;
void string_ins(char str1[],char str2[],int l1,int l2,int n){
	int k=n-1;
	for(int i=l1-1;i>=k;i--){
		str1[i+l2]=str1[i];
	}
	for(int i=0;i<l2;i++){
		str1[k]=str2[i];
		k++;
	}
}
int main(void){
	char str1[100];
	char str2[100];
	cin.get(str1,100);
	cin>>str2;

	int l1=strlen(str1);
	int l2=strlen(str2);
       
	int n;
	cin>>n;
        
	string_ins(str1,str2,l1,l2,n);
	
	for(int i=0;i<l1+l2;i++)
		cout<<str1[i];
return 0;	
}
