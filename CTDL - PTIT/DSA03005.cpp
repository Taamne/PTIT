#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		int a[10005];
		cin >> n >> k;
		for(int i = 0; i< n ; i++){
			cin >> a[i];
		}
		sort(a, a+n);
		long long sum = 0;
		if(k > n/2) k = n-k;
		for(int i = 0 ; i<n; i++){
			if(i < k ){
				sum -= a[i];
			}
			else {
				sum += a[i];
			}
		}
		cout << sum << endl;
	}
}
