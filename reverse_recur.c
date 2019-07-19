# include <stdio.h>
# include <stdlib.h>
void reversear(int a ,int b,int m[] );
int main(int args, char * argv[]){
	int arr[args-1];
	int k=0;
        int start = 0;
	int end = args-2;
	for(int i=1;i<args;i++){
		arr[k]=atoi(argv[i]);
		k++;
	}
	reversear(start,end,arr);
	for(int i=0;i<args-1;i++)
		printf("%d ",arr[i]);
	return 0;
}
void reversear(int start,int end,int arr[]){
	if(start >= end)
		return ;
	int temp =arr[start];
	arr[start]=arr[end];
	arr[end] = temp;
	start++;
	end--;
	reversear(start,end,arr);


}
