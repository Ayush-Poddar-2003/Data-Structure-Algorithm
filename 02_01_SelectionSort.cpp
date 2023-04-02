/*

SELECTION SORT -
In each iteration, we will select the minimum element of the unsorted array,
AND will swap it with the first element of the range

---------------------------------------*/

#include<bits/stdc++.h>
using namespace std;


void selection_sort(int arr[], int n) 
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[i])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
}
  


int main() 
{
    int arr[] = {13,46,24,52,20,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Before selection sort: " << "\n";
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }

    selection_sort(arr, n);

    // output
    cout << "\nAfter selection sort: " << "\n";
    for (int i=0; i<n; i++)
    {
      cout << arr[i] << " ";
    }

  return 0;
}