#include<bits/stdc++.h>
using namespace std;
int n, a[105], ok ;
void binary(){
	int i =n;
	while(i > 0 && a[i] == 1){
		a[i]=0;
		i--;
	}
	if(i==0) ok = 0;
	else a[i] = 1;
}
int check(int a[], int n){
	for(int i = 1; i<= n/2; i++){
		if(a[i] != a[n-i+1]) return 0;
		
	}
	return 1;
}
int main(){
	cin >> n;
	for(int i = 1 ; i<=n; i++){
		a[i] = 0;
	}
	ok = 1;
	while(ok){
		if(check(a,n))
		{
		
			for(int i = 1; i<=n; i++){
				cout << a[i]<<" ";
			}
			cout << endl;
		}
		binary();
		
	}
}
