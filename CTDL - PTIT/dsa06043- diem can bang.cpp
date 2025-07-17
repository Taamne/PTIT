#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n+10]= {0};
		for(int i = 1; i<=n; i++){
			cin >> a[i];
			a[i] += a[i-1];
		}
		int ok = 0;
		for(int i = 1; i<=n; i++){
			int left = a[i-1];
			int righ = a[n] - a[i];
			if(left == righ) {
				cout << i << endl;
				ok = 1;
				break;
			}
			
		}
		if(ok == 0) cout <<"-1\n";
	}
}
