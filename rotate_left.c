# include <stdio.h>
# include <stdlib.h>
int main(int args, char * argv[]){
	int arr[]={1,2,3,4,5,6,7,8};
	int l=8;
	int k=l-1;
	int n=atoi(argv[1]);
	int ab[n];
	for(int i=0;i<n;i++){
		ab[i]=arr[k];
		k--;
	}
	int j=0;
	for(int i=l-(n+1);i>=0;i--)
	{
		if(i>n-1)
		arr[i+n]=arr[i];
		else{
			arr[i+n]=arr[i];
			arr[i]=ab[j];
			j++;
		}
	}
	for(int i=0;i<l;i++)
		printf("%d ",arr[i]);
return 0;
}


