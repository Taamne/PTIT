#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	int mod = 1e9 + 7;
	int a[1005];
	a[0]  = 0;
	a[1]= 1;
	for(int i = 2; i<=100; i++){
		a[i] = a[i-1] % mod + a[i-2] % mod;
	}
	while(t--){
		int n;
		cin >> n;
		cout << a[n] <<endl;
	}
}
