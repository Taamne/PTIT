#include<bits/stdc++.h>
using namespace std;
#define ll long long
	ll f[100];

void fibo(){
	long long k,n;
		cin >> n >> k;
		while(true){
			if(n==1 || n==2) {
				if(n==1) cout << "A\n";
				else cout << "B\n";
				return;
			}
			if(k > f[n-2]){
				k= k - f[n-2] ;
				n--; 
			}
			else {
				n-=2;	
			}
		}
}
int main(){
	int t;
	cin >> t;
	f[1] = 1;
	f[2]= 1;
	for(int i = 3; i<= 92 ; i++){
		f[i] = f[i-1] + f[i-2];
	}
	while(t--){
			
		fibo();	
			
		
		}
		
	
	}
	
	
	
	


	

