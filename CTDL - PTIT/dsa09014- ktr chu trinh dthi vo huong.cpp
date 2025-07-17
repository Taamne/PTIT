#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n , m, u , v;
		
		cin >> n >> m;
		vector<vector<int>> g;
		
		while(m--){
			cin >> u >> v;
			g[u].push_back(v);
			g[v].push_back(u);	
		}
		int cnt=0;
		for(int i =1; i<= n ; i++){
			if(g[i].size() %2 !=0) cnt++;
		}
		if(cnt==0 ) cout <<"YES\n";
		else cout <<"NO\n";
	}
}
