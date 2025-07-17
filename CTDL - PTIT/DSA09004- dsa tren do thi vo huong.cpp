#include<bits/stdc++.h>
using namespace std;
int n, e , u,v;
vector<bool> visited;
vector<vector<int>> g;

void DFS(int u){
	stack<int> st;
	st.push(u);
	while(!st.empty()){
		int u = st.top();
		st.pop();
		if(visited[u] == false){
			cout << u <<" ";
			visited[u]  = true;
		}
		for(int v : g[u]){
			if(visited[v] == false){
				st.push(u);
				st.push(v);
				break;
			}
		}
	}
		
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> e >> u;
		g.clear(); g.resize(n);
		visited.clear(); visited.resize(n, 0);
		for(int i = 1; i<=e; i++){
			int fi, se;
			cin >> fi >> se;
			g[fi].push_back(se);
			g[se].push_back(fi);
		}
		DFS(u);
	}	
}
