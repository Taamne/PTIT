#include<bits/stdc++.h>
using namespace std;

int n, a[1005] , x[1005], b[1005];
void xuat(){
	int k = 0;
	for(int i = 1; i<= n ;i++){
	
		if(a[i]){
			b[k++] = x[i]; 
		}
	}
	for(int i = 1; i<= k ; i++){
		cout << b[i] <<" ";
	}
	cout << endl;
}
void Try(int i){
	for(int j = 1; j>= 0 ; j--){
		a[i] = j;
		if(i==n) xuat();
		else{
			Try(i+1);
		}
	}
}
int main(){
	int n;
	cin >> n;
	for(int i = 1; i<=n ; i++){
		cin >> x[i];
	}
	sort(x+1, x+1+n);
	Try(1);
	
}

