#include <stdio.h>
#include <stdlib.h>
int main(int argc,char * argv[]){
	int a[1001][2]={0};
	int j=0;
	int b=0;
//	printf("hello");
	
	for(int i=1;i<argc-1;i++){
		 b=atoi(argv[i]);
		if(b>=0){
			a[b][0]=a[b][0]+1;
			
		}
		else{
			b=b*(-1);
			a[b][1]=a[b][1]+1;
			
		}
	}
	
	int c = atoi(argv[argc-1]);
	
	if(c>=0){
		if(a[c][0]>=1)
			printf("The %d  number is present  %d number of times in the array ",c,a[c][0]);
		else
			printf("The number is not present");
	}
	else{
		c=c*(-1);
		if(a[c][1]>=1)
			printf("The -%d number is present %d number of times in the array ",c,a[c][1]);
		else
			printf("The number is not present");
	}
	return 0;
}
