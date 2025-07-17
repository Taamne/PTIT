#include<bits/stdc++.h>
using namespace std;
int n, e, u, v;
vector<pair<int,int>> g;
void Test(){
	while(e--){
		cin >> u >> v;
		g[u].first++;
		g[v].second++;
		
	}
	for(int i = 1 ; i<= n ; i++){
		if(g[i].first != g[i].second) {
			cout << 0;
			return;
		}
	}
	cout << 1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> e;

		g.clear(); g.resize(n+1);
		Test();
		cout<< endl;
	}
}
