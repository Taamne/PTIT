#include<bits/stdc++.h>
using namespace std;
#define ll long long
long long mod = 1e9 + 7;
ll luythua(ll n, ll k){
	if(k==0) return 1;

	ll x = luythua(n, k/2);
	long long y = (x * x) % mod;
	if(k % 2 == 0){
		return y ; 
	}
	else return (n * y) % mod;
}
ll dao(ll n){
	ll res = 0;
	while(n > 0){
		long long d= n%10;
		res = res * 10  + d;
	}
	return res;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		ll n,k;
		cin >> n;
		ll m = n, res=0;
		while(m > 0){
			res = res * 10 + m % 10;
		}
		k  = res;
		
		cout<<luythua(n,k)<<endl;
		
	}
}
