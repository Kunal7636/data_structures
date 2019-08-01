#include <iostream>
#include <cstring>
using namespace std;
void swap(char str1[],char str2[],int l1,int l2,int min,int max){
int i;
	for( i=0;i<min;i++){
		char temp;
		temp =str1[i];
		str1[i]=str2[i];
		str2[i]=temp;
	}
	for(int j=i;j<max;j++){
		str1[j]=str2[j];
		str2[j]=' ';
	}

}
int main(void){
	char str1[100];
	char str2[100];
	cin>>str1;
	cin>>str2;
	int min=0,max=0;
	int l1=strlen(str1);
	int l2=strlen(str2);
		min=l1;
		max=l2;
	swap(str1,str2,l1,l2,min,max);
	for(int i=0;i<l2;i++)
		cout<<str1[i];
	cout<<endl;
	for(int i=0;i<l1;i++){
		cout<<str2[i];
	}
return 0;	

}
