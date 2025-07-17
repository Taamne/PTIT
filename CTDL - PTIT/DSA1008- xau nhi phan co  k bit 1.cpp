#include<bits/stdc++.h>
using namespace std;

int n, k, ok;
int a[1000];
int check( int a[], int n){
	int cnt = 0;
	for(int i = 1; i<= n; i++){
		if(a[i] == 1){
			cnt ++;
		}
	}
	return cnt;
}
void bynaryGen(){
	int i = n;
	while(i> 0 && a[i] == 1 ){
		a[i] = 0;
		
		i--;
	}
	if(i == 0) {
		ok = 0;
	}
	else {
		 a[i] = 1;
	}
}
int main(){
	int t;
	cin >> n >> k;
	for(int i = 1 ; i <= n; i++){
		a[i] = 1;
	}
	ok = 1;
	while(ok == 1){
		if(check(a,n)== k){
			for(int i = 1; i <=n; i++){
				cout << a[i];
			}
			cout << endl;
		}
		bynaryGen();
	}
}



