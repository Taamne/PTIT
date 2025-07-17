#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		int a[100005];
		cin >> n;
		for(int i = 0; i<n; i++){
			cin >> a[i];
			
		}
		sort(a, a+n);
		int cnt = 2e9;
		for(int i =0; i<n-1; i++){
			cnt = min(cnt, a[i+1] - a[i]);
			
		}
		cout << cnt<<endl;
	}
}
