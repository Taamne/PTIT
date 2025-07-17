#include<bits/stdc++.h>
using namespace std;
int n,e;
vector<pair<int,int>> p;
vector<vector<int>>g;
int fi,se,x,y;
vector<int> vs;
int l,k;
void BFS(int u){
		queue<int>q;
		q.push(u);
		vs[u] = 1;	
		while(!q.empty()){
			int u = q.front(); q.pop();	
				
			for(auto v : g[u]){
				if((u == x && v == y ) || (v == x && u==y)  )
				continue;
					if(!vs[v]){
						q.push(v);
						vs[v]=1;
					}
				
			}
		
		}
		
}
void canhcau(){
	vs.clear(); vs.resize(n+1,0);
	l=0;
	
	for(int i = 1; i<=n;  i++){
		if(!vs[i]){
			BFS(i);
			l++;
		}
	}
	if(l > k){
		cout << x <<" " <<y<<" ";
	}
	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> e;
		vs.clear(); vs.resize(n+1, 0);
		g.clear(); g.resize(n+1);
		p.clear(); p.resize(e+1);
		x=y=-1;
		
		for(int i = 1; i<= e; i++){
			cin >> p[i].first >> p[i].second;
			g[p[i].second].push_back(p[i].first);
			g[p[i].first].push_back(p[i].second);	 
		}
		k=0;
		for(int i = 1; i<=n; i++){
			if(!vs[i]){
				BFS(i);
				k++;
			}
		}
		
		for(int i = 1; i<= n ; i++){
			x= p[i].first;
			y= p[i].second;
			canhcau();
		}
		cout << endl;
			
	}	
}
