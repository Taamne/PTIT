#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int t;
	cin >> t;
	ll f[50];
	f[0] = 0;
	f[1]=1;
	for(int i = 2; i<= 45 ; i++){
		f[i] = f[i-1] + f[i-2];
	}
	ll s[50];
	s[0] = 0;
	s[1]= 0;
	for(int i = 2; i<= 45; i++){
		s[i]= s[i-1] + s[i-2];
	}
	while(t--){
		int k,n;
		cin >> n >> k;
		ll res=  0;
		while(k > 0 && n > 0){
			if(k == s[n]){
				res += f[n];
				break;
			}
			if( k >= s[n-1]){
				res += f[n-1];
				k -= s[n-1];
				n= n- 2;
			}
			else{
				n--;
			}
		}
		cout << res << endl;
	}
	
}
