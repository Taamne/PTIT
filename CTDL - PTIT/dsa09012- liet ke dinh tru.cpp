#include<bits/stdc++.h>
using namespace std;
int v,e,u, n,x,cnt=0;
vector<vector<int>> g;
vector<int> vs;
void bfs(int u){
	queue<int> q;
	q.push(u);
	vs[u]=1;
	while(!q.empty()){
		int u = q.front(); q.pop();
		
		for(auto v : g[u]){
			if(!vs[v] ) {
				
				q.push(v);
				vs[v] = 1;
				
			}
		}
	}
}
void dinhtru(int u){
	int lt = 0;
	vs[u]=1;
	for(int i = 1; i<=n; i++){
		if(!vs[i]){
			bfs(i);
			lt++;
		}
	}
	if(lt > cnt ) cout << u <<" ";
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cnt=0;
		cin >> n >>e;
		g.clear(); g.resize(n+1);
					vs.clear(); vs.resize(n+1, 0);

		while(e--){
			cin >> u >> v;
			g[u].push_back(v);
			g[v].push_back(u);
		}
		for(int i = 1; i<=n ; i++){
			if(!vs[i]){
				bfs(i);
				cnt++;
			}
		}
		for(int i = 1; i<= n ; i++){
			vs.clear(); vs.resize(n+1, 0);

			dinhtru(i);
			
				
		}
		
		cout <<  endl;
	}
}
