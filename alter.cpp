#include<iostream>
using namespace std;
int main(void){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int arr1[100];  // array for positive number
	int arr2[100];  // array for negative number
	int arr3[100];  // array for 0
	int l=0;  // index for arr1
	int k=0; // index for arr2
	int f=0; //index for arr3
	for(int i=0;i<n;i++){
		if(arr[i]>0){
			arr1[l]=arr[i];
			l++;
		}
		if(arr[i]<0){
			arr2[k]=arr[i];
			k++;
		}
		if(arr[i]==0){ 
			arr3[f]=arr[i];
			f++;
		}
}

	int d=0; //index for writting array
	int b=0;
	int p=0;
	int flag=0;
	int o;
int arr5[n];

	for(o=0;o<n;o++){

		if(flag==0 && b<l)
		{    
			

			arr5[o]=arr1[b];
			b++;
			flag=1;
			d++;
			continue;
		}


		if(flag==1 && p<k)
		{     
			arr5[o]=arr2[p];
			p++;
			flag=0;
			d++;
			continue;
		}
               

	}

	if(b<l){
		for(int j=b;j<l;j++)
		{
	
			arr5[d]=arr1[j];
			d++;
		}
	}
	if(p<k){
		for(int j=p;j<k;j++)
                {
	
                        arr5[d]=arr2[j];
                        d++;
                }
	}
	for(int j=0;j<f;j++){
		arr5[d]=arr3[j];
		d++;
	}
	for(int i=0;i<n;i++)
		cout<<arr5[i]<<" ";
return 0;

}
