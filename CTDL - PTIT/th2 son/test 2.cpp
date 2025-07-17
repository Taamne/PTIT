#include<bits/stdc++.h>
using namespace std;
struct cv{
	int fi, se;
	
};
bool cmp(cv x, cv y){
	if(x.fi==y.fi) return x.se>y.se;
	return x.fi < y.fi;
}
int main(){
	int n;
	cin >> n;
	cv a[1005];
	for(int i = 0 ; i<n; i++){		
		cin >> a[i].fi;
		cin >> a[i].se;
	}
		sort(a, a+n, cmp);
		int cnt = 0;
		int res= 0;
		for(int i = 0; i<n; i++){
			if(a[i].fi -1  >= res){
				res= a[i].fi;
				cnt+= a[i].se;
			} 
		}
		
		cout << cnt << endl; 
		return 0;
	}

