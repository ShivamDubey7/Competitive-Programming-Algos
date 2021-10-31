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
typedef pair<int,int> ii;
void solve(){
	int n;
	cin>>n;
	map<int,int>m;
	vector<int>a(n);
	vector<int>ans(n);
	rep(i,n)cin>>a[i],m[a[i]]++;
	vector<int>v;
	int cnt=0;
	rep(i,n){
        if(m.find(i+1) == m.end()){
            v.push_back(i+1);
        }
	}
	rep(i,n){
        if(m[a[i]] > 1){
            m[a[i]]--;
            ans[i] = v.back();
            v.pop_back();
        }
        else{
            ans[i] = a[i];
            cnt++;
        }
	}
	//either there is 1 self mapping or none
	rep(i,n){
        if(ans[i] == i+1){

            rep(j,n){
                if(ans[j] == a[i]){
                    ans[j] = i+1;
                    break;
                }
            }
            ans[i] = a[i];
            break;
        }
    }
    cout<<cnt<<endl;
    rep(i,n)cout<<ans[i]<<" ";
    cout<<endl;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int test=1;
	cin>>test;
	while(test--){
		solve();
	}
	return 0;
}
