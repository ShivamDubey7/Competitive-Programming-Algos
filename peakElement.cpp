/*
Find the peak element in the array using binary search
*/

#include <iostream>
using namespace std;

int myPeak(int arr[], int low, int high, int n){
        int mid=low+(high-low)/2;
        if((mid == 0 or arr[mid-1]<=arr[mid]) and (mid==n-1 or arr[mid+1]<=arr[mid])){
            return mid;
        }
        else if(mid>0 and arr[mid-1]>arr[mid]){
            return myPeak(arr, low, mid-1, n);
        }
        else{
            return myPeak(arr, mid+1, high, n);
        }
}

int main(){
    int arr[]={1,2,3,4,3};
    int n=5;
    cout<<"Index of Peak Element: "<<myPeak(arr, 0, n-1, n);
}