#include<bits/stdc++.h>
using namespace std;

void Try(int n, vector<int> a, vector<int> b){
	cout <<"[";
	for(int i = 0; i<n; i++){
		cout << a[i];
		if(i != n-1) cout << " ";
	}
	cout <<"]\n";
	if(n==1) return;
	for(int i = 0; i <n-1; i++){
		b.push_back(a[i]+a[i+1]);
	}
	a.resize(n-1);
	a=b;
	b.clear();
	Try(n-1, a, b);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		vector<int>b;
		cin >> n;
		vector<int>a;
		for(int i = 0; i <n; i++){
			int x;
			cin >> x;
			a.push_back(x);
		}
		Try(n,a,b);
	}
}
