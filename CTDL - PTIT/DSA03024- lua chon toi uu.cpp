#include<bits/stdc++.h>
using namespace std;

struct cv{
	int fi, se;
}a[100005];
bool cmp(cv x, cv  y){
	return x.se < y.se;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i = 0; i<n; i++){
			cin >> a[i].fi;
			cin >> a[i].se;
		}
		sort(a, a+n, cmp);
		int res = 0 , cnt=0;
		for(int i = 0; i<n; i++){
			if(a[i]. fi >= res){
				res = a[i].se;
				cnt ++;
			}
		}
		cout << cnt<<endl;
	}
}
