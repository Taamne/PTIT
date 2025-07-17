#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int cnt[100005]={0}, max = 0;
		int a[n+5];
		for( int i = 0; i < n ; i++){
			cin >> a[i];
			cnt[a[i]]++;
			if( cnt[a[i]] > max ) max = cnt[a[i]];
		}
		
		sort(a, a + n);
		for(int j = max; j >= 1; j--){
			for( int i = 0; i < n ; i++){
				if(cnt[a[i]] == j) cout << a[i] <<" ";
			}
		}
			 
		
		cout << endl;
}

}
