#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> g;
vector<int> vs;
vector<int> tr;
int s, t,n,e,u,v;
void DFS(int s){
	stack<int> st;
	st.push(s);
	while(!st.empty()){
		u = st.top(); st.pop();
		vs[u] =1;
		if(u == t) return;
		for(auto v : g[u]){
			if(!vs[v]) {
				st.push(u);
				st.push(v);
				tr[v] = u;
				break;
			}
		}	
	}
}

void trace(){
	if(!vs[t] ){
		cout <<"-1" ;
		return;
	}
	stack<int> way;
	int last = t;
	while(last != -1){
		way.push(last);
		last = tr[way.top()];
	}
	while(!way.empty()){
		cout << way.top() <<" ";
		way.pop();
	}
}
int main() {
   
    int T = 1; cin >> T;
    while (T--) {
        cin >> n >> e >> s >> t;
    g.clear(); g.resize(n + 1);
    vs.clear(); vs.resize(n + 1, 0);
    tr.clear(); tr.resize(n + 1, -1);
    while (e--) {
        cin >> u >> v;
        g[u].push_back(v);
    }
    DFS(s);
    trace();
        cout << "\n";
    }
    return 0;
}
