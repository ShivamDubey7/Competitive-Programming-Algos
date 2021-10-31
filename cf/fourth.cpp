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
	int n;
	cin>>n;
	vector<vector<int>>v(n,vector<int>(5,0));
	rep(i,n){
		rep(j,5){
			cin>>v[i][j];
		}
	}
	vector<int>w = v[0];
	int ans=0;
	bool exists=  false;

	for(int i=1;i<n;i++){
		int c=0,c2=0;
		rep(j,5){
			if(v[i][j] < w[j])c++;
			else if(v[i][j] > w[j])c2++;
		}
		if(c>=3 || c2>=3)exists = true;
		if(c>=3){
			w = v[i];
			ans = i;
		}
	}
	if(n > 1 && !exists){
		cout<<-1<<endl;
		return;
	}

	rep(i,n){
		if(i!=ans){
			int c=0;
			rep(j,5){
				if(v[i][j] > w[j])c++;
			}
			if(c < 3){
				cout<<-1<<endl;
				return;
			}
		}
	}
	cout<<ans+1<<endl;

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
