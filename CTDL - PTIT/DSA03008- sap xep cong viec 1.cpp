#include<bits/stdc++.h>
using namespace std;
struct cv{
	int fi, se;
	
}a[1005];
bool cmp(cv x, cv y){
	return x.se <= y .se;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int s[1005], f[1005];
		
		for(int i =0; i<n; i++ ){
			cin >> a[i].fi;
		}
		for(int j = 0; j<n; j++){
			cin >> a[j].se;
		}
		sort(a, a+n, cmp);
		int cnt = 0;
		int res= 0;
		for(int i = 0; i<n; i++){
			if(a[i].fi >= res){
				res= a[i].se;
				cnt++;
			} 
		}
		
		cout << cnt << endl; 
	}
}
