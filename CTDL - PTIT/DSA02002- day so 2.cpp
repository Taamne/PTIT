#include<bits/stdc++.h>
using namespace std;



int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int m = n;
		int a[1005], b[105][105];
		for(int i = 1 ; i <= n ; i++){
			cin >> a[i];
		}	
		for(int i = 1; i<= n ; i++){
			b[n][i] = a[i];
		}
		n--;
		while(n>=1){
			for(int i = 1 ; i <= n; i++){
				a[i] += a[i+1];
			}
			for(int i = 1 ; i <= n; i++){
				b[n][i]= a[i];
			}
			n--;
		}
		n++;
		while(n<=m){
			cout << "[";
			for(int i = 1 ; i<=n; i++){
				cout << b[n][i];
				if(i != n) cout <<" ";
			}
			cout <<"] ";
			n++;
		}
		cout << endl;
	}
}
