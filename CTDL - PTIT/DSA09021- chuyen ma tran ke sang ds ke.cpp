#include<bits/stdc++.h>
using namespace std;
	int a[105][105], n;
	vector<vector<int>>g;
void Test(){
	
	cin >> n;
	g.resize(n+1);
	for(int i = 1; i<=n ; i++){
		for(int j=  1; j<= n; j++){
			cin >> a[i][j];
			if(a[i][j]){
				g[i].push_back(j);
//				g[j].push_back(i);
			}
		}
	}
	for(int i =1; i<= n ; i++){
		for(auto j : g[i]){
			cout << j <<" ";
		}
		cout << endl;
	}
	
}
int main(){
	Test();
}
