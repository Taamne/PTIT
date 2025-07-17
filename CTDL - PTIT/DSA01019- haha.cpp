#include<bits/stdc++.h>
using namespace std;

int a[1005], n, ok;

int check(int a[], int n){
	if(a[1] != 1) return 0;
	if(a[n] !=0 ) return 0;
	
	for(int i = 1; i < n ; i++){
		if(a[i] == 1 && a[i+1] == 1) 
		return 0;
	}
	return 1;
}

void binaryGen(){
	int i = n;
	while( i > 0 && a[i] == 1){
		a[i] = 0;
		i--;
	}
	if(i != 0){
		a[i] = 1;
	}
	else ok = 0;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 1; i <= n ; i++){
			a[i] = 0;
		}
		ok = 1;
		while(ok){
			for(int i = 1; i <= n ; i++){
				cout << a[i];
			}
			cout <<endl; 
			binaryGen();
		}
	}
}
