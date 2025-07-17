#include<bits/stdc++.h>
using namespace std;

stt	value	0	1	2	3	4	5	6	7	8	9
0			1	0	0	0	0	0	0	0	0	0	
1	  2		1	0	1	
2	  5		1	0	1	0	0	1	0	1	0	
3	  3		1	0	1	1	0	1	0	1	1	0	
4	  1		1	1	1	1	1	1	1	1	1	1


int main(){
	int t;
	cin >> t;
	while(t--){
		
	
		int n, s;
		cin >> n >> s;
		vector<int>a(n);
		for(int i = 0 ; i< n ;i++){
			cin >> a[i];
		}
		vector<bool> dp(s+1, false);
		dp[0]= true;
		for(int i = 0 ; i<n; i++){
			for(int j = s; j>= a[i] ; j--){
				if(dp[j - a[i]] == true){
					dp[j] = true;
				}
			}
		}
		if(dp[s]) cout << "YES\n";
		else cout <<"NO\n";
	}
	
}


