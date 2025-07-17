#include<bits/stdc++.h>
using namespace std;
int v,e,u, n;
vector<vector<int>> g;
vector<int> vs;
void dfs(int u){
	stack<int> st;
	st.push(u);
	vs[u]=1;
	while(!st.empty()){
		int u = st.top(); st.pop();
		for(auto v : g[u]){
			if(!vs[v]){
				st.push(u);
				st.push(v);
				vs[v] = 1;
				break;
			}
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		
		cin >> n >>e;
		g.clear(); g.resize(n+1);
		vs.clear(); vs.resize(n+1, 0);
		while(e--){
			cin >> u >> v;
			g[u].push_back(v);
			g[v].push_back(u);
		}
		int cnt=0;
		for(int i = 1; i<=n ; i++){
			if(!vs[i]){
				dfs(i);
				cnt++;
			}
		}
		cout << cnt<< endl;
	}
}
