#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]){

	int arr[3][3];
	int k=1;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			arr[i][j]=atoi(argv[k]);
			k++;
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d ",*(*(arr+i)+j));
		}
	}
return 0;
}
