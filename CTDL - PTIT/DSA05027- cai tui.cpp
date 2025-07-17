#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n , s;
		cin >> n >> s;
		int w[n+5], v[n+5];
		for(int i = 1; i<=n; i++){
			cin >> w[i];
		}
		for(int i = 1 ; i<=n; i++){
			cin >> v[i];
		}
		int dp[n+5][s+5];
		memset(dp, 0, sizeof(dp));
		for(int i = 1; i<= n ;i++){
			for(int j  = 1; j<= s; j++){
				dp[i][j]  = dp[i-1][j];
				if(j >= w[i]){
					dp[i][j] = max(dp[i][j], dp[i-1][j - w[i]] + v[i]);
				}
			}
		}
//		for(int i = 1; i<= n ; i++){
//			for(int j = 1; j<= s; j++){
//				cout << dp[i][j] <<' ';
//			}
//			cout << endl;
//		}
		cout << dp[n][s] << endl;
			
	}

}
