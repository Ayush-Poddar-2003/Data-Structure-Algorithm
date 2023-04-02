/*

BUBBLE SORT -
Here, after each iteration, the array becomes sorted up to the last index of the range.

---------------------------------------*/

#include<bits/stdc++.h>
using namespace std;


void bubbleSort(int arr[], int n)
{
    for (int i=n;i>1;i--)   //reverse because last element gets sorted in each iteration
    {
        int didswap = 0;    //variable to check wheter already sorted or not
        for (int j=0; j<i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                didswap = 1;
            }
        }
        if (didswap == 0) 
            break;        
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

    bubbleSort(arr, n);

    // output
    cout << "\nAfter selection sort: " << "\n";
    for (int i=0; i<n; i++)
    {
      cout << arr[i] << " ";
    }

  return 0;
}