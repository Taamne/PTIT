#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[100005];
		for(int i = 0; i<n; i++){
			cin >> a[i];
		}
		sort(a,a+n);
		long long mod= 1e9 + 7, s= 0;
		for(int i = 0; i<n; i++){
			long long x= a[i] * i;
			s+= x % mod;
		}
		cout << s % mod  <<endl;
	}
}
