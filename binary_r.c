#include <stdio.h>
#include <stdlib.h>
int find(int a[],int start,int end,int no)
{
	
	int mid;
        if(no==a[end])
	{
		return end;
	}	
	if(no==a[start])
	{
		return start;
	}
	while(start<=end)
	{
		mid=start + (end-start)/2;
		
		if(no>a[mid])
		{
			start=mid+1;
		}
		if(no<a[mid])
		{
			end=mid-1;
		}
		else if(no==a[mid])
		{
		 return mid;
		}
	}
	return -1;

}

int main(int argc,char *argv[]){
	int a[argc-1];
	int max=atoi(argv[1]);
	int j=0,pos=0;
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
	int size=j-1;
	int start,end;
	int pos2,no;
	scanf("%d",&no);
	if(no>=a[0]&&no<=a[pos])
	{  start=0;end=pos;
	    pos2=find(a,start,end,no);
	}
	else {if(no>=a[pos+1]&&no<=a[size])
	{

		start=pos+1;
		end=size;
	        pos2=find(a,start,end,no);
	}}


	if(pos2==-1)
	{
		printf("The number is not present");

	}
	else
	{
		printf("The no is present as position %d ",pos2);
	}

	return 0;

}
