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

int check(int a[], int n){
	if(a[1]==0 || a[n] == 1 ) return 0;
	
	for(int i = 1; i < n ; i++){
		if(a[i]== 1 && a[i]== a[i+1]){
			return 0;
		}
	}
	return 1;

}
int main(){
	int t;
	cin >> t;
	while(t--){
		int k;
		cin >> n ;
		for(int i = 1; i <= n ; i++){
			a[i] = 0;
		}
		ok = 1;
		while(ok){
			if(check(a,n)){
				for(int i = 1; i <= n ; i++){
					if(a[i]) cout << "H";
					else cout << "A";
				}
						cout << endl;

			}
			BinaryGen();
		}
	}
}
