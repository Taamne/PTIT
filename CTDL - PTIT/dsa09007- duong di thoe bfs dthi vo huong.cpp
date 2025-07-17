#include<bits/stdc++.h>
using namespace std;
int n,e,s,t,u,v;
vector<vector<int>>g;
vector<int>vs;
vector<int> tr;
void BFS(int s){
	queue<int> q;
	q.push(s);
	vs[s] = 1;
	while(!q.empty()){
		u = q.front(); q.pop();
		if(u == t) return;
		for(auto v : g[u]){
			if(!vs[v] ){
				q.push(v);
				vs[v] = 1;
				tr[v] = u;
			}
		}
	}
}
void trace(){
	if(!vs[t] ){
		cout <<-1;
		return;
	}
	stack<int>way;
	int last = t;
	while(last != -1){
		way.push(last);
		last = tr[last];
	}
	while(!way.empty()){
		cout<<way.top() << " ";
		way.pop();
	}
}
int main(){
	int T;
	cin >> T;
	while(T--){
		cin >> n >> e >> s >>t ;
		g.clear() ; g.resize(n+1);
		vs.clear(); vs.resize(n+1, 0);
		tr.clear(); tr.resize(n+1, -1);
		while(e--){
			cin >> u >> v;
			g[u].push_back(v);
			g[v].push_back(u);
		}
		BFS(s);
		trace();
		cout << endl;
	}
}
