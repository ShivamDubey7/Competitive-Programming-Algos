#include<bits/stdc++.h>
#define ll          long long int
#define loop(i,a,b) for(int (i)=(a);(i)<(b);(i)++)
#define rep(i,n)    for(int (i)=0;(i)<n;(i)++)
#define bp          1000000007
#define sz(a)       int((a).size())
#define pb          push_back
#define mp          make_pair
#define all(c)      (c).begin(),(c).end()
#define F           first
#define S           second
using namespace std;
typedef pair<ll,ll> ii;
bool p(int k, vector<int>&v1, vector<int>&v2){
	int x = (k-sz(v1));
	int canTake = k-k/4;
	int take = min(canTake, x);
	int s1 = take*100 + v1[canTake-take-1];
	int s2 = canTake < sz(v2) ? v2[canTake-1] : v2.back();
	return s1>=s2;
}
void solve(){
	int n;
	cin>>n;
	vector<int>v1(n);
	rep(i,n){
		cin>>v1[i];
	}

	vector<int>v2(n);
	rep(i,n){
		cin>>v2[i];
	}
	sort(all(v1));
	reverse(all(v1));
	sort(all(v2));
	reverse(all(v2));
	for(int i=1;i<n;i++){
		v1[i] += v1[i-1];
		v2[i] += v2[i-1];
	}
	// rep(i,n)cout<<v1[i]<<",";
	// cout<<endl;
	// rep(i,n)cout<<v2[i]<<",";
	// cout<<endl;
	int low=n;
	int high = 2*n;
	int mid;
	while(low<high){
		mid = (low+high)/2;
		// cout<<mid<<","<< p(mid,v1,v2)<<endl;
		if(p(mid, v1, v2)){
			high = mid;
		}
		else{
			low = mid+1;
		}
	}
	cout<<low-n<<endl;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t = 1;
	cin>>t;
	while(t--)
		solve();
	return 0;
}
// 1
// 4
// 20 30 40 50
// 100 100 100 100
