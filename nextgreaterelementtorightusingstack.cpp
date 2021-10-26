//this is a program to find the next greater element for every array element(present in same array) via stack in O(n) time complexity.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"ENTER SIZE OF ARRAY: ";
    cin>>n;
    int arr[n];
    cout<<"ENTER ELEMENTS OF THE ARRAY: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector <int> v;
    stack <int> s;
    for(int i=n-1;i>=0;i--)
    {
        if(s.size()==0)
        {
            v.push_back(-1);
        }
        else if(s.size()>0&&s.top()>arr[i])
        {
            v.push_back(s.top());
        }
        else if(s.size()>0&&s.top()<=arr[i])
        {
            while(s.size()>0&&s.top()<=arr[i])
            {
                s.pop();
            }
            if(s.size()==0)
            {
                v.push_back(-1);
            }
            else
            {
                v.push_back(s.top());
            }
        }
        s.push(arr[i]);
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        cout<<"THE NEXT GREATER ELEMENT FOR "<<arr[i]<<" IS: "<<v[i]<<endl;
    }
}
