
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define vi vector<int>
#define pii pair<int, int>
#define all(c) c.begin(), c.end()
#define pb push_back
#define f first
#define s second
#define int long long
#define fo(i, n) for (int i = 0; i < n; i++)
#define IOS ios::sync_with_stdio(0);
vector<int> arr(100100);
int n,c;

bool check(int x){
    int sum =0;int count = 1;
    int left =0;
    for(int i =1; i<n;i++){
        sum += arr[i]-arr[i-1];
        if(sum >= x)
        {
            count++;
            sum=0;
        }
    }
    return (count >=   c);
}
void solve();
signed main()
{

    IOS
    cin.tie(0);
    cout.tie(0);

    int _t;cin >> _t;while (_t--) solve();
    
    }


void solve(){
    cin>>n>>c;
    arr.resize(n);

    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    
    int hi=0; int lo =0 ;
    for(int i =1; i<n;i++){
        hi =max(arr[i]-arr[i-1],hi);
        lo = min(arr[i]-arr[i-1],lo);
    }
    int ans =lo;
    while(hi>= lo){
        int mid =lo + (hi-lo)/2;

        if(check(mid)){
            lo =mid+1;
            ans  = mid;
        }
        else{
           
           hi = mid-1;
        }
    }
    cout<<ans<<endl;
    
}