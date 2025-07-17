#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>g;
vector<int>vs;
vector<int>tr;
int n,e,u,v,s,t;

void BFS(int s){
	queue<int> q;
	q.push(s);
	while(!q.empty()){
		u = q.front(); q.pop();
		vs[u] =1;
		if(u == t) return;
		for(auto v : g[u]){
			if(!vs[v]){
				q.push(v);
				tr[v] = u;
			}
		}
	}
}
void trace(){
	stack<int> way;
	if(!vs[t]) {
		cout << -1;
		return;
	}
	int last = t;
	while(last != -1){
		way.push(last);
		last = tr[way.top()];
	}
	while(!way.empty()){
		cout << way.top() <<" ";
		way.pop();
	}
}
int main(){
	int T;
	cin >> T;
	while(T--){
		cin >> n >> e >> s >> t;
		vs.clear(); vs.resize(n+1,0);
		tr.clear() ; tr.resize(n+1,-1);
		g.clear(); g.resize(n+1);
		while(e--){
			cin >> u >> v;
			g[u].push_back(v);
		}
		BFS(s);
		trace();
		cout << endl;
	}
}


