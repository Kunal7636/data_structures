# include <stdio.h>
# include <stdlib.h>
int main(int argc,char *argv[]){
	int a[argc-1];
	int k=0;
	for(int i=1;i<argc;i++){
		a[k]=atoi(argv[i]);
		k++;
	}
	int start =0;
	int end = argc-2;

	while(end>start)
	{	int temp=a[start];
		a[start]=a[end];
		a[end]=temp;
		start++;
		end--;
	}
	for(int i=0;i<argc-1;i++){
		printf("%d ",a[i]);
	}

return 0;
}

