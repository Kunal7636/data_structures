#include<iostream>
using namespace std;
int main(void){
	int n;
	cin>>n;
	int arr[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	int mid;
	int k=n-1;
		mid=n/2;
	
	for(int i=0;i<n;i++){
		if(i<mid){
		for(int j=0;j<n;j++)
		{
			int temp =arr[i][j];
			arr[i][j]=arr[i+k][j];
			arr[i+k][j]=temp;
			
		}
		k--;
		}
		else
			break;
	}

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}
