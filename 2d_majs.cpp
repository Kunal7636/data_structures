#include<iostream>
using namespace std;
int main(void){
	int n;
	cin>>n;
	int arr[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cin>>arr[i][j];
	}
	int k=n;
	cout<<"intial"<<endl;
	for(int i=0;i<k;i++)
        {
                for(int j=0;j<k;j++)
                {
                        cout<<arr[i][j]<<" ";
                }
                cout<<endl;

        }
	k=k-1;


	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==j)
			{
			  int temp=arr[i][j];
			  arr[i][j]=arr[i][k];
			  arr[i][k]=temp;
			  k--;
			}
			
			
		}
	}
	cout<<"final"<<endl;

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;

	}
}
