#include<bits/stdc++.h>
using namespace std;


int a[100][100] = {}, n, u, vs[100], e[100];

void DFS(int u) { 
	cout<< u <<" ";
	int v;
	vs[u]= 1; 
	for (v= 1; v<=n; v++)
		if (vs[v]==0 && a[u][v]==1){  
			DFS(v);
		}
}
void Graph(){
	int e, v , x;
	cin >> v >> e >> x;
	int fi,se;
	for(int i = 1; i<= e; i++){
		cin >> fi;
		cin >> se;
		a[fi][se] = 1;
		a[se][fi] = 1;
		
	}
	
	DFS(x);
	
}
int main(){
	int t;
	cin >> t;
	while(t--){
		Graph();
		cout << endl;
	}
	
}
