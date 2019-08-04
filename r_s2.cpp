#include<iostream>
#include<string>
using namespace std;
int fun1(string str1,string str2,int arr[],int l1,int l2){   //recording index of element to be reversed of string
	int k=0;
	for(int i=0;i<l2;i++){
		for(int j=0;j<l1;j++){
			if(str2[i]==str1[j]){
				arr[k]=j;
				k++;
			}
		}
	}
		return k;
	
}
void fun2(int arr[],int k){                           // sorting the array 
	for(int i=0;i<k;i++){
		for(int j=i+1;j<k-1;j++){
		   if(arr[i]>arr[j]){
			int temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;}
		}
	}
}

void fun3(string str1,int arr[],int k){                 // swaping the characters of string
        cout<<"Before   "<<str1<<endl;
	int i=0;                              // start index of array
        int l=k-1;                                   //end index of array
	while(i<l){
	char temp=str1[arr[i]];
	str1[arr[i]]=str1[arr[l]];
	str1[arr[l]]=temp;
	i++;
	l--;
	}
        cout<<"After    "<<str1<<endl;
}
int main(void){
	string str1,str2;
	cin>>str1;
	cin>>str2;
        int l1=str1.length();     // length of first string
	int l2=str2.length();     // length of second string

	int arr[100]={0};
	int k=fun1(str1,str2,arr,l1,l2);      // to record position of common elements in str1
	fun2(arr,k);                       // sorting the array;
	fun3(str1,arr,k);              // reversing characters of str1 that are in str2         
        
	return 0;

}
