#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>g;
vector<int>vs;
int n,e,u;
int fi, se;
void BFS(int u){
	queue<int>q;
	q.push(u);
	while(!q.empty()){
		int u = q.front(); q.pop();
		if(vs[u]== false) {
			cout << u <<" ";
			vs[u] = true;
		}
		for(int v : g[u]){
			if(vs[v] == false){
				
				q.push(v);
			}
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> e >> u;
		g.clear(); g.resize(n+1);
		vs.clear(); vs.resize(n+1, 0);
		for(int i = 1; i<= e; i++){
			cin >> fi >> se;
			g[fi].push_back(se);
			g[se].push_back(fi);
		}
		BFS(u);
		cout<<endl;
	}
}
