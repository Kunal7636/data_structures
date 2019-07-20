#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[]){
	int n=atoi( argv[1]);
	
	int l=8;
	if(n>l)
		n=n%l;
	int arr[]={1,2,3,4,5,6,7,8};
	for(int i=0;i<n;i++){
		int temp;
		temp=arr[l-1];
		for(int i=l-2;i>0;i--){
			arr[i+1]=arr[i];
		}
		arr[0]=temp;
		for(int j=0;j<l;j++)
		{
			printf("%d ",arr[j]);
		}
		printf("\n");
		
}	
return 0;
}
