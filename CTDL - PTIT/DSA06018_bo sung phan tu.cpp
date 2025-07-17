#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while ( t--){
		int n;
		cin >> n;
		int cnt[10000000]= {0};
		int a[n+5];
		for( int i = 0 ; i < n ; i++){
			cin >> a[i];
			cnt[a[i]]++;
		}
		sort(a, a + n);
		int count = 0;
		for(int i = a[0]; i <= a[n-1] ; i++){
			if( cnt[i] == 0) {
				count ++;
			} 
		}
		cout << count <<endl;
	}
}
