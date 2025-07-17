#include<bits/stdc++.h>
using namespace std;
int a[1005], ok, n;

void binaryGen(){
	int i = n;
	while(i>0 && a[i]==1){
		a[i] = 0;
		i--;
	}
	if(i==0){
		ok = 0;
	}
	else {
		a[i] = 1;
	}
}
int check(int a[], int n){
	if(a[1] == 0 || a[n] == 1) return 0;
	for(int i = 1; i <n; i ++){
		if(a[i] == a[i+1] && a[i] == 1) return 0;
	}
	return 1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i = 1; i<=n; i++){
			a[i] = 0;
		}
		ok = 1;
		while(ok){
			if(check(a,n)) {
				for(int i = 1; i<=n; i++){
					if(a[i]==1) cout <<'H';
					else cout <<'A';
				}
			cout <<endl;

			}
			binaryGen();

		}
	}
}
