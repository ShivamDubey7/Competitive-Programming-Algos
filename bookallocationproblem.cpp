//allocating minimum number of pages to read among given number of readers based on binary search concept
#include<bits/stdc++.h>
using namespace std;
int maxinarray(int *arr,int n)
{
    int max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>=max)
        max=arr[i];
    }
    return max;
}
int sumofallarrayelements(int *arr,int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}
bool isvalid(int *arr,int n,int m,int mid)
{
    int student=1;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
        if(sum>mid)
        {
            student++;
            sum=arr[i];
        }
        if(student>m)
        return false;
    }
    return true;
}
int main()
{
    int n,m;
    cout<<"ENTER NUMBER OF BOOKS: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"ENTER NUMBER OF PAGES IN BOOK "<<i+1<<" : ";
        cin>>arr[i];
    }
    cout<<"ENTER NUMBER OF STUDENTS: ";
    cin>>m;
    int maxpos=(n-m)+1,ans=-1;
    if(maxpos<=0)
    cout<<"BOOKS CANNOT BE ALLOCATED";
    else
    {
        int start=maxinarray(arr,n);
        int end=sumofallarrayelements(arr,n);
        while(start<=end)
        {
            int mid=start+((end-start)/2);
            if(isvalid(arr,n,m,mid))
            {
                ans=mid;
                end=mid-1;
            }
            else
            start=mid+1;
        }
        cout<<"THE MINIMUM NUMBER OF PAGES WILL BE: "<<ans;     
    }
    //cout<<"THE MINIMUM NUMBER OF PAGES WILL BE: "<<ans;
}
