#include<iostream>
using namespace std;
int main(void){
	int n;
	cin>>n;
	int arr[n];
	int pos;
	int min;
	int temp;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int i=0;i<n;i++){
	        min=arr[i];
		for(int j=i;j<n;j++){
			if(arr[j]<=min){
				min=arr[j];
				pos =j;
			}

		}
		
		temp =arr[i];
		arr[i]=min;
		arr[pos]=temp;
		
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;

}
