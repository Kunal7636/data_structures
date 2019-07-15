# include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int a [10]={1,2,3,4,5,6,7,8,9,10};
	int flag=0,pos =0;
	int c=atoi(argv[1]);

	for(int i=1;i<10;i++)
	
           if(c==a[i])
	   {
		   flag=1;
		   pos=i+1;
		   break;
	   }


	
	if(flag==1)
		printf("The number is present at position %d ",pos);
	else
		printf("The number  is not present ");
	return 0;

}
