#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> g;
int n , e, u, v;
void Test(){
	
	
	while(e--){
		
		cin >> u >> v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	int deg = 0;
	for(int i = 1; i<=n ; i++){
		if(g[i].size() % 2 != 0) deg ++;
	}
	if(deg == 2) cout << 1;
	else if(deg == 0) cout << 2;
	else cout << 0;  
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> e;
		g.clear(); g.resize(n+1);
		Test();
		cout << endl;
	}
}
