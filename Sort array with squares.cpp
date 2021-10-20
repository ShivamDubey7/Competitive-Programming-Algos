vector<int> Solution::solve(vector<int> &arr) {
     int mid=0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]>=0)
        {
            mid=i;
            break;
        }
    }
    int i=mid-1,j=mid;
    vector<int>res(arr.size());
    int k=0;
    while(i>=0 && j<arr.size())
    {
        if((arr[i]*arr[i])<(arr[j]*arr[j]))
        {
            res[k++]=arr[i]*arr[i];
            i--;
        }
        else
        {
            res[k++]=arr[j]*arr[j];
            j++;
        }
    }
    while(i>=0)
    {
        res[k++]=arr[i]*arr[i];
        i--;
    }
    while(j<arr.size())
    {
        res[k++]=arr[j]*arr[j];
        j++;
    }

    return res;
}
