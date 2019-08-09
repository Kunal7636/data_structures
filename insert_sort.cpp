#include<iostream>
using namespace std;
int main(void){
	int n;
	int flag=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int i=0;i<n;i++){
		flag=0;
		for(int j=0;j<n;j++){
			if(arr[j]>arr[j+1])
			{
				int temp =arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				flag=1;
			}
		}
		if(flag==0)
			break;
	}
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	return 0;
}
