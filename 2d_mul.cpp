#include<iostream>
using namespace std;

int main(void){
	int nr,nc;
	cout<<"the row and column of first"<<endl;
       cin>>nr;// row of first
      cin>>nc;// column of second
	cout<<"the row and colmn of second"<<endl;
	int mc,mr;
 	cin>>mr;// row of second
	cin>>mc;// column of second
	int arr1[nr][nc];
	int arr2[mr][mc];
	int arr3[nc][mc];
        
	for(int i=0;i<nr;i++)
		for(int j=0;j<nc;j++)
		cin>>arr1[i][j];
	for(int i=0;i<mr;i++)
                for(int j=0;j<mc;j++)
                cin>>arr2[i][j];

        for(int i=0;i<nr;i++)
	{
		for(int j=0;j<mc;j++)
		{    
			arr3[i][j]=0;
			for(int k=0;k<mr;k++)
			{
				arr3[i][j]=arr3[i][j]+arr1[i][k]*arr2[k][j];
			}
			
		}
	}
         cout<<"arr1"<<endl;
	for(int i=0;i<nr;i++)
	{
		for(int j=0;j<nc;j++)
			cout<<arr1[i][j]<<" ";
		cout<<endl;
	}
	cout<<"arr2"<<endl;
	 for(int i=0;i<mr;i++)
        {
                for(int j=0;j<mc;j++)
                        cout<<arr2[i][j]<<" ";
                cout<<endl;
        }
 	cout<<"output"<<endl;
 for(int i=0;i<nr;i++)
        {
                for(int j=0;j<mc;j++)
                        cout<<arr3[i][j]<<" ";
                cout<<endl;
        }

	return 0;
}
