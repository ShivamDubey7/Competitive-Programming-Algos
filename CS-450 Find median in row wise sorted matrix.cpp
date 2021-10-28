#include<bits/stdc++.h>
using namespace std;

// 1 3 5
// 2 6 9
// 3 6 9

1 2 3 3 5 6 6 9 9
        |
//O(32*r*logc) O(1)

//as median is in middle, there will always be (r*c)/2 number of elements less than the median in value... see above 

int main()
{
    int r,c;
    cin>>r>>c;

    int a[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }

    int min = INT_MAX, max = INT_MIN;
    //as rows are sorted... all the minimums will be at start of row and maximums at end of row... so compare them to get min and 
    //max of matrix in O(n)
    for(int i=0;i<r;i++)
    {
        if(min>a[i][0])
        {
            min=a[i][0];
        }

        if(max<a[i][c-1])
        {
            max=a[i][c-1];
        }
    }

    int desired=(r*c+1)/2; //desired position of median has to be (r*c+1)/2 as it is in middle of odd number of elements 
    while(min<max) //as rows are sorted... we can do binary search
    {
        int mid = min + (max-min)/2; //we take expected mid... no need for it to be in the matrix
        int count=0; //stores number of elememts less than expected mid.... so if it is less than desired we can search bigger
                    //elements than expected mid ...or if greater than desired... we can check smaller elements than mid

        for(int i=0;i<r;i++) //this loop counts the number of elements less than mid in each row of matric
        {
            count+=upper_bound(a[i],a[i]+c,mid)-a[i]; //a[i] is address of ith rows beginning... a[i]+c is address of last element of 
                                                      //ith row... we check between them for mid...and subtract a[i] to get its count.. 
        }

        if(count<desired) //doing what is explained in 48th line comment
        {
            min = mid+1;
        }
        else
        {
            max=mid;
        }
    }

    cout<<min; //at the end min stores the answer

    //DO A DRY RUN TO GET BETTER UNDERSTANDING
}