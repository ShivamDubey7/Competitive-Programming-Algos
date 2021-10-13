//The O(N) sort.
//Note: Only limited to small positive integers only.
//Input: Given an array.
//Output: Print the sorted array.
//Time Complexity: O(N)

#include<iostream>
using namespace std;

void countSort(int arr[], int n)
{
    int k = arr[0];
    for(int i=0;i<n;i++)
    {
        k=max(arr[i],k);
    }

    int countArray[k]={0};

    for(int i=0; i<n; i++)
    {
        countArray[arr[i]]++; 
    }

    for(int i=1;i<=n;i++)
    {
        countArray[i]=countArray[i]+countArray[i-1];
    }
    
    int output[n]={0};

    for(int i=n-1;i>=0;i--)                      
    {                                           
        output[--countArray[arr[i]]] = arr[i];
    }

    for(int i=0;i<n;i++)        
    {
        arr[i]=output[i];
    }
}

int main()
{
    int arr[]={4,1,2,1,3,5,7,5,2};
    countSort(arr,9);
    for(int i=0;i<9;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}