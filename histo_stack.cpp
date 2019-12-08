// input 6 2 5 4 5 1 6
// output 12
#include<iostream>
#include<stdlib.h>
#include<stack>
using namespace std;
int getMaxArea(int arr[],int n)
{
	stack<int> s;
	int max_area=0;
	int tp;
	int area_with_tp=0;
	int i=0;
	while(i<n)
	{
		if(s.empty()||arr[s.top()]<=arr[i])
		{
			s.push(i++);

		}
		else
		{
			tp=s.top();
			s.pop();
			area_with_tp=arr[tp]*(s.empty()? i:i-s.top()-1);
			if(max_area<area_with_tp)
				max_area=area_with_tp;
		}
	}
	while (s.empty() == false) 
    { 
        tp = s.top(); 
        s.pop(); 
        area_with_top = arr[tp] * (s.empty() ? i :  
                                i - s.top() - 1); 
  
        if (max_area < area_with_top) 
            max_area = area_with_top; 
    } 
  

	return max_area;
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
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<"MAXIMUM AREA IS "<<getMaxArea(arr,n);
	return 0;
}
