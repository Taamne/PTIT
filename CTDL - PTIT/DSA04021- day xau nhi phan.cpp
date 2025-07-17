#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	int X[100005]={};
	X[1]= 1;
	X[2] = 1;
	for(int i = 3; i<= 93; i++){
		X[i] = X[i-1] + X[i-2];
	}
	while(t--){
		int n,k;
		cin >> n >>k;
		while(true){
			if(n == 1 || n==2) {
				if(n==1) cout <<"0\n";
				else cout <<"1\n";
				break;
			}
			if( k > X[n-2]){
				k -= X[n-2];
			}
			else{
				n -= 2;
			}
			
		}
	}
}
