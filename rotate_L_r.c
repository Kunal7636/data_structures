#include <stdio.h>
#include <stdlib.h>
int main(int argc,char * argv[]){
	int b=atoi(argv[argc-1]);
	int a=atoi(argv[argc-2]);
        int arr[argc-3],j=0,mid=0;

		for(int i=1;i<argc-2;i++){
		arr[j]=atoi(argv[i]);
		j++;
	}

        int arrs=argc-3;

		mid=arrs/2;
		int temp1[a];
		int temp2[b];
		int k=0;
		printf("\n ");
		if(a>=mid)
			a=a%mid;
		
		for(int i=mid-1;i>=mid-a;i--){
			temp1[k]=arr[i];
			k++;
		}
		int l=0;
		for(int i=mid-(a+1);i>=0;i--){
			if(i>(a-1))
				arr[i+a]=arr[i];
			else{
				arr[i+a]=arr[i];
				arr[i]=temp1[l];
				l++;
			}
		}
		if(b>=mid)
			b=b%mid;
		if(arrs%2!=0)
			mid=mid+1;
	
	       
         	k=0;
		for(int i=mid;i<mid+b;i++){
			temp2[k]=arr[i];
	                
			k++;
		}
		
		for(int i=mid+b;i<arrs;i++){
			arr[i-b]=arr[i];
		}
		for(int i=arrs-b;i<arrs;i++){
			arr[i]=temp2[l];
			l++;
		}
		for(int i=0;i<arrs;i++)
		{
			printf("%d ",arr[i]);
		}
		return 0;
}
