#include <stdio.h>
#include<stdlib.h>

int main(int argc,char * argsv[])
{
	float a[10]={1,34,56,78,88,90,95,98,99,230};
        int length=10;
	int flag=0;
	float no=atoi(argsv[1]);
//	printf("%f",no);
	int start =0;
	int end=length-1;
	int pos=0;
	int count=0;
	int mid =(end+start)/2;
	if(no>a[0]&&no<a[length-1])
	{while(mid!=start)
	{ count++;
		if(no>a[mid])
		{
			start=mid;
			mid=(end+start)/2;
		}
		else if(no<a[mid])
		{
			end=mid;
			mid=(end+start)/2;
		}
		else
		{
			pos=mid;
			flag=1;
			break;
		}
	}
	}
	if(flag==1)
		printf("yes at position %d and loop rant %d times",pos,count);
	else
		printf("no");
}
