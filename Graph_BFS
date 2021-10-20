#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define pr pair<int,int>
#define vt vector<int>
#define mii map<int,int>
#define pqb priority_queue<int>
#define pqs priority_queue<int,vi,greater<int> >
#define mod 1000000007
#define inf 1e18
#define w(x) int x; cin>>x; while(x--)

void print(int** edges, int n, int sv, bool* visited) {
	cout << sv << "\n";
	visited[sv] = true;
	for (int i = 0; i < n; ++i)
	{
		if (i == sv) {
			continue;
		}
		if (edges[sv][i] == 1) 
{			if (visited[i]) {
				continue;
			}
			print(edges, n, i, visited);
		}
	}
}


void printBFS(int** edges, int n, int sv) {
	queue<int> pendingVertices;
	bool * visited = new bool[n];
	for (int i = 0; i < n; ++i)
	{
		visited[i] = false;
	}
	pendingVertices.push(sv);
	visited[sv] = true;
	while (!pendingVertices.empty()) {
		int currvertex = pendingVertices.front();
		pendingVertices.pop();
		cout << currvertex << "\n";
		for (int i = 0; i < n; ++i)
		{
			if (i == currvertex) {
				continue;
			}
			if (edges[currvertex][i] == 1 && !visited[i]) {
				pendingVertices.push(i);
				visited[i] = true;
			}
		}
	}
}

void solve()
{
	ios_base::sync_with_stdio(0); cin.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, e; cin >> n >> e;
	int** edges = new int*[n];
	for (int i = 0; i < n; ++i)
	{
		edges[i] = new int[n];
		for (int j = 0; j < n; ++j)
		{
			edges[i][j] = 0;
		}
	}
	for (int i = 0; i < e; ++i)
	{
		int f, s; cin >> f >> s;
		edges[f][s] = 1;
		edges[s][f] = 1;
	}
	bool* visited = new bool[n];
	for (int i = 0; i < n; ++i)
	{
		visited[i] = false;
	}
	//print(edges, n, 0, visited);
	printBFS(edges, n, 0);
	delete [] visited;
	for (int i = 0; i < n; ++i)
	{
		delete [] edges[i];
	}
	delete [] edges;



}

int main()
{
	solve();
	return 0;
}
