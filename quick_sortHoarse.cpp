#include<iostream>

#include<stdlib.h>

using namespace std;

void quicksort(int arr[], int low, int high)

{

    int i,j,temp;

    i=low;

    j=high;

    int pivot;

    pivot=arr[(low+high)/2];

      while (i <= j) {

            while (arr[i] < pivot)

                  i++;

            while (arr[j] > pivot)

                  j--;

            if (i <= j) {

                  temp = arr[i];

                  arr[i] = arr[j];

                  arr[j] = temp;

                  i++;

                  j--;

            }

      }

      if (low < j)

            quicksort(arr,low, j);

      if (i < high)

            quicksort(arr, i,high);

}

int main()

{

    int n;

    cin>>n;

    int arr[n];

    int i;

    for(i=0;i<n;i++)

    {

        cin>>arr[i];

    }

    quicksort(arr,0,n);

     for(i=0;i<n;i++)

    {

        cout<<arr[i]<<" ";

    }

    return 0;

}

 
