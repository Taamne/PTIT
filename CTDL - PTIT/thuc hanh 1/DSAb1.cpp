#include<bits/stdc++.h>
using namespace std;
int n, a[100], ok = 1;
int  check(int a[], int n){
	int cnt = 0;
	for(int i = 0;i < n; i++){
		if(a[i] == 1){
			cnt++;
		}
	}
	if(cnt % 2 == 0)
	return 1;
	return 0;
}
void in(){
	if(check(a,n) ){
		for(int i = 0; i < n; i++){
			cout << a[i] <<" ";
		}
		cout <<endl;
	}
}
void sinh(){
	
	int i = n-1;
	while(i>=0 && a[i] == 1){
		a[i] = 0;
		i--;
	}
	if(i != -1) a[i] = 1;
	else ok = 0;
}

int main(){

	cin >> n;
	for(int i  = 0 ; i < n ; i++){
		a[i] =0;
	}
	while(ok){
		in();
		sinh();
	}
}
