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
void solve(){
	int n,a,b;
	cin>>n>>a>>b;
	string s;
	cin>>s;
	vector<int>c(2,0);
	c[s[0]-'0']++;
	for(int i=1;i<sz(s);i++){
		if(s[i]!=s[i-1]){
			c[s[i]-'0']++;
		}
	}
	int ans = a*n;
	if(b>0)
		ans += b*n;
	else
		ans += b*(min(c[0],c[1])+1);
	cout<<ans<<endl;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	solve();
	return 0;
}
