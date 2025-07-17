#include<bits/stdc++.h>
using namespace std;

int n,m, u,v,q,x,y;
vector<vector<int>> g;
vector<int> vs;

void dfs(int x){
	stack<int > st;
	st.push(x);
	vs[x] =1;
	while( !st.empty()){
		u = st.top(); st.pop();
		vs[u] = 1;
		if(u == y) return;
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
	int T;
	cin >>T;
	while(T--){
		cin >> n >> m ;
		g.clear(); g.resize(n+1);
		while(m--){
			cin >> u >> v;
			g[u].push_back(v);
			g[v].push_back(u);
		}
		cin >> q;
		while(q--){
			
		    vs.clear(); vs.resize(n+1, 0);
			cin >> x >> y;
			dfs(x);
			if(!vs[y]) cout <<"No\n";
	else cout <<"Yes\n";
		}
	}
}
