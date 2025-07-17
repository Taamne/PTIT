#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 100000;
int root[N];
int findRoot(int n){
	if(root[n] != n) root[n]  = findRoot(root[n]);
	return root[n];
}
int main(){
	int n;
	cin >> n;
	for(int i = 1 ; i<= N; i++){
		root[i] = i;
	}
	for(int i =  1; i<= N ; i++){
		int a, b, t;
		cin >> a >> b >> t;
		int rootA = findRoot(a);
		int rootB = findRoot(b);
		if(t== 1){
			if(rootA != rootB) root[rootA] = rootB;
			
		}
		else {
			if(rootA == rootB){
				cout << "1" << endl;
			}
			else cout << "0" << endl;
		}
	}
}
