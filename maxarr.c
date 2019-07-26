#include<stdio.h>
#include<stdlib.h>
void maxar(int ar[],int argc)
{
//	printf("here");
	int sum=0,count=0;
	int max=ar[0];
	int k,f,m;
	int a[1000];
	for(int i=0;i<argc-1;i++){
		count=0;
		sum=0;
		for(int j=i;j<argc-1;j++){
                           count++;
			   sum=sum+ar[j];
		//	   printf("%d sum ",sum);
			   if(sum>max)
			   {
		//		   printf("IN IF\n");
				    k=0,f=0,m=0;;
				   max=sum;
		//		   printf("%d count\n",count);
				   if(m!=1)
				   {
					   while(k!=count)
					   {
						   a[k]=ar[f];
						   f++;
						   k++;
						  // printf("IN WHILE\n");

					   }
					 m++;

				   }
				  else{
					   printf("IN ELSE\n");
					   a[k]=ar[f];
						   k++;
					   f++;
				   }

			   }
	             
		}
	}
	printf(" max value is %d and array is  ",max);
	for(int i=0;i<k;i++)
		printf("%d ",a[i]);
	
}
 
int main(int argc,char *argv[]){
	int d=0;
	int arr[argc-1];
	for(int i=1;i<argc;i++){
		arr[d]=atoi(argv[i]);
		d++;
	}
//	printf("Here1");
	maxar(arr,argc);
	return 0;
}
