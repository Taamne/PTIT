#include<bits/stdc++.h>
using namespace std;

int n,k, a[10005], ok;

void Gen(){
	int i = k;
	while(i > 0 && a[i] == n - k + i){
		i--;
	}
	if(i==0) ok = 0;
	else{
		a[i]++;
		for(int j = i+1; j <=k ; j++){
			a[j] = a[j-1] + 1;
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i = 1; i<= k ; i++){
			a[i] = i;
		}
		ok = 1;
		while(ok){
			for(int i = 1; i<= k ; i++){
				cout << char(a[i] + 64);
			}
		Gen();
		cout << endl;
		}
	}
}
