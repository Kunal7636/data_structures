#include<iostream>
#include<stdlib.h>
using namespace std;
int find( int lmin,int n,int arr[] )
{
	int min=9999;                                      // first we find the minimum number evry time we loop array
	for(int i=0;i<n;i++)                              // then compare the minimum number
	{
		if(arr[i]<min&&arr[i]>lmin)
		{
			min=arr[i];
		}
	}
//	cout<<min<<"  here"<<"\n";
	if(min!=9999)
	return min;
	else
		return 0;
}
int main(int argc,char* argv[])
{
    int arr[argc-1];
    int k=0;
    for(int i=1;i<argc;i++)
    {
	    arr[k]=atoi(argv[i]);
	    k++;
    }
    int n=argc-1;
    int min=0;
    int lmin=0;
    int j=0;
    int count=0;
    int max=0;
    int max2=0;
    for(int i=0;i<n;i++)
    {
	    int min = find(lmin,n,arr);
	    lmin=min;
	    j=0;                                        // so that loop starts again
//	     cout<<min<<" first min"<<endl;
	    while(j!=n)
	    {
                  if(arr[j]-min>=0)          // if number -min is greater than 0 that we can use it to find area
		  {
			  count++;
			  j++;
		  }
		  else
		  {
			  max2=min*count;                 // max 2 is empty variable to compare
//			  cout<<max2<<" max2"<<endl;
			  if(max2>max)
				  max=max2;
			  count=0;
			  j++;
		  }
	    }
	    max2=min*count;
//	    cout<<max2<<" out"<<endl;              // we wrote it again so that if the no is so smaal that every no is greater than it 
	    if(max2>max)                          // it will never go to else part
	    {                                    //  there we come out of loop and perform the action  
		    max=max2;
	    }
	    count=0;
	    
    }
cout<<"max area is "<<max<<endl; 
}
