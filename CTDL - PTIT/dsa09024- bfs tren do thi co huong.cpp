#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>g;
queue<int>q;
int n,e,u;
vector<int>vs;
void BFS(int u){
	q.push(u);

	while(!q.empty()){
		int u = q.front(); q.pop();
		if(!vs[u]) {
			cout << u <<" ";
			vs[u]=1;
		}
		for(auto j : g[u]){
			
			if(!vs[j]){
				
				q.push(j);
				
			}
		}
		
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
				cin >> n >> e >>u;

		g.clear(); g.resize( n+1);
		vs.clear(); vs.resize( n+1,0);
		int x, y;
		for(int i = 1 ; i<= e ;i++){
			cin >> x >> y;
			g[x].push_back(y);
		
		}
		BFS(u);
		cout<<endl;
	}
}
