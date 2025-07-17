#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int sum = 0;
		int ans = 0;
		vector<int> a(n);
		for(int i = 0; i<n ; i++){
			cin >> a[i];
			sum = max(a[i], a[i] + sum);
			ans = max(sum, ans);
		}
		cout << ans << endl;
		
	}
}
