#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void swap(int *n1,int *n2){
	int temp=*n1;
	*n1=*n2;
	*n2=temp;

}
int partition (int arr[],int low,int high){
        int pivot=arr[low];
	int i=low-1;
	int j=high+1;
	while(i<j){
		do{
			i++;
		}while(arr[i]<=pivot);
		do{
			j--;
		}while(arr[j]>pivot);
		if(i<j)
		 	swap(&arr[i],&arr[j]);
	}
			swap(&arr[low],&arr[j]);
			return j;

}
void quicksort(int arr[],int start,int end){
	if(start>=end){
		return;
	}
	int pi=partition(arr,start,end);
	
		quicksort(arr,start,pi);
		quicksort(arr,pi+1,end);
	
}
int main(void){
	int arr[]={6,4,2,3,7,5};
	//srand(time(0));
	quicksort(arr,0,5);
	for(int i=0;i<6;i++)
{
	 printf("%d ",arr[i]);
}
	return 0;

}
