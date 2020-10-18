#include<bits/stdc++.h>
#define pb push_back
using namespace std;
const int LIM = 50;
int vis[LIM];
vector<vector<int> >AdjList(LIM);
void dfs(int u){
	cout<<u<<" , ";
	vis[u]=1;
	for(auto v:AdjList[u]){
		if(vis[v]==0){
			dfs(v);
		}
	}
}
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int u,v;
		cin>>u>>v;
		AdjList[u].pb(v);
		AdjList[v].pb(u);
	}
	dfs(1);

}