#include<bits/stdc++.h>
using namespace std;
int n, k , ok , a[100];
void in(int a[], int n){
	for(int i = 0; i <n ; i++){
		if(a[i]) cout <<'B';
		else cout <<'A'; 
	
	}
	cout <<  " ";
}
void bynaryGen(int a[], int n){
	ok = 1;
	int i = n-1;
	while( i >=0 && a[i] == 1){
		a[i] = 0;
		i--;
	}
	if(i != -1) a[i] = 1;
	else ok = 0;
}

int main(){

	int t;
	cin >> t;
	while(t--){
		
		cin >> n;
		for(int i = 0; i < n; i++){
			a[i] = 0;
		}
		ok = 1;
		while(ok){
			in(a,n);
			bynaryGen(a,n);
		}
		cout << endl;	
	}
}
