#include<bits/stdc++.h>
using namespace std;

int a[1005], ok, n;

void BinaryGen(){
	int i = n;
	while(i>0 && a[i]==1){
		a[i] = 0;
		i--;
	}
	if(i == 0) ok = 0;
	else{
		a[i] = 1;
	}
}

int check(int a[], int n, int k){
	int cnt = 0;
	for(int i = 1; i <= n ; i++){
		if(a[i]== 1){
			cnt ++;
		}
	}
	if(k == cnt) return 1;
	return 0;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int k;
		cin >> n >> k;
		for(int i = 1; i <= n ; i++){
			a[i] = 0;
		}
		ok = 1;
		while(ok){
			if(check(a,n,k)){
				for(int i = 1; i <= n ; i++){
					cout << a[i];
				}
						cout << endl;

			}
			BinaryGen();
		}
	}
}
