#include<bits/stdc++.h>
using namespace std;
int v,e,u, n;
vector<vector<int>> g;
vector<int> vs;
void bfs(int u){
	queue<int> q;
	q.push(u);
	vs[u]=1;
	while(!q.empty()){
		int u = q.front(); q.pop();
		for(auto v : g[u]){
			if(!vs[v]){
				
				q.push(v);
				vs[v] = 1;
				
			}
		}
	}
}
void Test(){
	cin >> n >>e;
		g.clear(); g.resize(n+10);
		while(e--){
			cin >> u >> v;
			g[u].push_back(v);
		}
		int cnt=0;
		for(int i = 1; i<=n ; i++){
					vs.clear(); vs.resize(n+10, 0);

			bfs(i);
			for(int j = 1; j<=n; j++){
				if(!vs[j]){
					cout << "NO";
					return;
				}
			}
		}
		cout <<"YES";
}
int main(){
	int t;
	cin >> t;
	while(t--){
		Test();
		
		cout << endl;
	}
}
