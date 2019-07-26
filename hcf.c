#include <stdio.h>
#include <stdlib.h>
int calhcf(int a[],int min,int size){
	int mm=1,flag=0;
	for(int i=1;i<=min;i++){
		for(int j=0;j<size;j++){
			if(a[j]%i!=0){
				flag=1;
				break;
			}
		}
		if(flag==0){
			mm=i;
		}
		flag=0;
	}
	return mm;
}

int main(int argc,char *argv[]){

	int a[argc-1];
	int b=argc-1;
	int j=0;
	int min =999;
	for(int i=1;i<argc;i++){
		a[j]=atoi(argv[i]);

		if(a[j]<min){

		min =a[j];}
		j++;
}	
	int hcf=calhcf(a,min,b);
	printf("%d",hcf);
	return 0;
}

