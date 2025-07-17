#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>g;
stack<int>st;
int n,e,u;
vector<int>vs;
void DFS(int u){
	st.push(u);

	while(!st.empty()){
		int u = st.top(); st.pop();
		if(!vs[u]) {
			cout << u <<" ";
			vs[u]=1;
		}
		for(auto j : g[u]){
			
			if(!vs[j]){
				st.push(u);
				st.push(j);
				break;
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
		DFS(u);
		cout<<endl;
	}
}
