#include<bits/stdc++.h>
using namespace std;

void Try(vector<int>a, int n, int cnt[105][105]){
	if(n==1) return ;
	
	for(int i = 0; i< n; i++){
		cnt[n-1][i] = a[i];
	}
	for(int i = 0; i <n-1; i++){
		a.push_back(a[i] + a[i+1]);
	}
	a.resize(n-1);
	Try(a,n-1,cnt);
	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int m = n;
		int cnt[105][105];
		vector<int> a;
		for(int i = 0 ; i < n ; i++){
			int x;
			cin >> x;
			a.push_back(x);
		}
		Try(a,n,cnt);
		for(int i = m-1; i>=0; i--){
			for(int j = 0; j<m; j++){
				cout << cnt[i][j];
				
			}
			m--;
			
		}
	}
}
