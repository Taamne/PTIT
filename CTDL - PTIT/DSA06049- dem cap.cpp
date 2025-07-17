#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		int a[1000005];
		cin >> n >> k;
		for(int i = 0; i<n; i++){
			cin >> a[i];
			
		}
		sort(a, a+n);
		int cnt = 0;
		for(int i = 0 ; i<n; i++){
			cnt+= lower_bound(a+i+1, a+n, a[i] + k ) - (a+i + 1);
			
		}
		cout << cnt<<endl;
	}
}
