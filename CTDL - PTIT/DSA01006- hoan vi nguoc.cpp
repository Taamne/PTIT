#include<bits/stdc++.h>
using namespace std;

int n, a[1000], ok;

void bynaryGen(){
	int i = n-1;
	while(i > 0 && a[i]< a[i+1]){
		i--;
	}
	if(i==0) ok = 0;
	else {
		int j = n;
		while( i < j && a[i] < a[j]){
			j--;
			
		}
		swap(a[i], a[j]);
		i++;
		j = n;
		while(i < j){
			swap(a[i], a[j]);
			i++;
			j--;
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 1; i <= n ; i++){
			a[i] = n - i +1;
		}
		ok = 1;
		while(ok){
			
			for(int i = 1; i<= n ; i++){
				cout <<a[i];
			}
			cout <<" ";
			bynaryGen();
			}
			cout <<endl;
	}
}
