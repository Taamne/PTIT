#include<bits/stdc++.h>

using namespace std;
vector<vector<int>>g;
vector<int> vs;
int n,m,u,v;
void DFS(int u){
	stack<int >st;
	st.push(u);
	vs[u]=1;
	while(!st.empty()){
		u = st.top(); st.pop();
		for(auto v : g[u]){
			if(!vs[v]){
				st.push(u);
				st.push(v);
				vs[v] =1;
				break;
			}
		}
	}
}
int main(){
	cin >> n >> m;
	vs.resize(n+10, 0);
	g.resize(n+10);
	while(m--){
		cin >> u>>v;
		g[u].push_back(v);
	}	
	int cnt=0;
	for(int i = 1; i<=n; i++){
		if(!vs[i]){
			DFS(i);
			cnt++;
		}
	}
	cout << cnt;
}
