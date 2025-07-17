#include<bits/stdc++.h>
using namespace std;
void transfer(){
	int v , e, fi, se;
	cin >> v >> e;
	vector<vector<int>>g(v+1);
	for(int i = 1; i<= e; i++){
		cin >> fi;
		cin >> se;
		g[fi].push_back(se);
		g[se].push_back(fi);
	}
	
	for(int i = 1; i<= v; i++){
		cout << i <<": ";
		for(int x : g[i]){
			cout << x <<" ";
		}
		cout << endl;
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		transfer();
		cout << endl;
	}
}
