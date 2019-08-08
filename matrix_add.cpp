#include <iostream>
#include <string>
using namespace std;
void insert_ele(int n,int *arr){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>*((arr+i*n)+j);
		}
	}
}
 void add_arr(int n,int *arr1,int *arr2){
 		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				*((arr2+i*n)+j)=*((arr1+i*n)+j)+*((arr2+i*n)+j);
			}
		}
 }

void pri(int n,int *arr){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<*((arr+i*n)+j)<<" ";
		}
		cout<<endl;
	}
}
int main(void){
	int n;
	cin>>n;
	int arr1[n][n];
	int arr2[n][n];
	 insert_ele(n,(int *)arr1);
	 insert_ele(n,(int *)arr2);
	 add_arr(n,(int *)arr1,(int *)arr2);
	 pri(n,(int *)arr2);
	 return 0;

}
