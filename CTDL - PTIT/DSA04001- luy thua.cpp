#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9 + 7;
int luythua(ll a, ll n){
	if(n==0) return 1;
	if(n==1) return a;
	ll x = luythua(a, n/2);
	long long y = (x * x) % mod;
	if(n % 2 == 0){
		return y ; 
	}
	else return (a * y) % mod;
}

int main(){
	int t;
	cin >>t;
	while(t--){
		ll n,k;
		cin >> n>>k;
		cout<<luythua(n,k)<<endl;
	}
}
