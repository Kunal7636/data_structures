#include<iostream>
using namespace std;
void input(int *arr,int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
		{
			cin>>*((arr+i*n)+j);
		}
	}
}
void rotate(int *arr,int n){
	for(int i=0;i<n;i++){
		int start=0;
		int end=n-1;
		while(start<end){
			int temp= *((arr+i*n)+start);
			*((arr+i*n)+start)= *((arr+i*n)+end);
			*((arr+i*n)+end)=temp;
			start++;
			end--;
		}
	}
}
void printing(int *arr,int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
		{
			cout<<*((arr+i*n)+j)<<" ";
		}
		cout<<endl;
	}
}
int main(void){
	int n;
	cin>>n;
	int arr[n][n];
	input((int *)arr,n);
	cout<<endl;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++)
		{
		
			if(i!=j)
			{
				int temp=arr[i][j];
				arr[i][j]=arr[j][i];
				arr[j][i]=temp;
				
			}
	
		}
	}
        rotate((int *)arr, n);
	
	printing((int *)arr,n);
	return 0;

}
