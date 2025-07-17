#include<bits/stdc++.h>
using namespace std;

int n, k, a[100], ok;

void bynaryGen(){
	int i = k;
	while(i> 0 && a[i] >= n - k + i){
		i--;
	}
	if(i == 0) ok = 0;
	else {
		a[i]--;
		do{
			i++;
			a[i] = a[i-1] + 1;
		}
		while(i < k);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i = 1; i<=k; i++){
			a[i] = i;
		}
		ok = 1;
		while(ok){
			for(int i = 1; i <= k; i++){
				cout << a[i] ;
			
			}
			bynaryGen();

			cout <<" ";
		}
		cout <<"\n";
	}
}
