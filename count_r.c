#include <stdio.h>
#include <stdlib.h>
 
int main(int argc,char * argv[])
{
	int a[argc-1];
	int j=0; int max=atoi(argv[1]);
	int pos=0;
	for(int i=1;i<argc;i++)
	{
		a[j]=atoi(argv[i]);
		if(a[j]>max)
		{
			max=a[j];
			pos=j;
		}
		j++;
	}
	int size=j;
	int nl,nr;
	nr=pos+1;
	if(nr==size)
		nr=0;
	nl=size-(pos+1);
	printf("The original array is rotated %d times to left or \n",nl);
	printf("The original array is rotates %d times to right\n",nr);
	if(nl>nr)
		printf("Do left %d  rotation of array to sort in least time ",nr);
	else
		printf("Do right %d rotation of the array to sort in least time",nl );
	return 0;

}
