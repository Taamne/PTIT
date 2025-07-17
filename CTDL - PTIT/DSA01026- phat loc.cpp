#include<bits/stdc++.h>
using namespace std;

int n, a[1005], ok;

void Gen(){
	int i = n;
	while( i > 0 && a[i] == 1){
		a[i] = 0;
		i--;
	}
	if(i == 0) ok = 0;
	else a[i] = 1;
}
int check(int a[], int n){
	if(n <6) return 0;
	if(a[1] == 0 || a[n] == 1) return 0;
	int cnt = 0;
	for(int i = 1; i<n; i++){
		if(a[i] == a[i+1] && a[i] == 1) return 0;
		if(a[i]== 0 && a[i+1]== a[i] ){
			cnt ++;
		}
		else cnt = 0;
		if(cnt == 3) return 0;
	}
	return 1;
	
}
int main(){
	cin >> n;
	for(int i = 1; i<=n ; i++){
		a[i] = 0;
	}
	ok = 1;
	while(ok){
		if(check(a,n)){
			for(int i = 1; i<= n ;i++){
				if(a[i]) cout <<"8";
				else cout <<"6";
			}
					cout <<endl;

		}
		Gen();
	}
}
