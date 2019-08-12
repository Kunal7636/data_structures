#include<iostream>
using namespace std;
void recur(int arr[],int j,int l){
	if(j<l){
	int pos ,temp;
	     int    min=arr[j];
		for(int k=j;k<l;k++){
			if(arr[k]<=min){
				min=arr[k];
				pos =k;
			}

		}

		temp =arr[j];
		arr[j]=min;
		arr[pos]=temp;

	      j++;
		recur(arr,j,l );
	}
}
int main(void){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int j=0;
	recur(arr,j,n);
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	return 0;
}
