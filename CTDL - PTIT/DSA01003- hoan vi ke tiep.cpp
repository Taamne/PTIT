#include<bits/stdc++.h>
using namespace std;

int n, k, a[1005], ok;

void bynaryGen(){
	int i = n-1;
	while(i > 0 && a[i] > a[i+1]){
		i--;
	}
	if(i == 0) ok = 0;
	else{
		int j = n;
		while(i < j && a[i] > a[j]){
			j--;
		}
		swap(a[i], a[j]);
		i++;
		j = n;
		while(i<j){
			swap(a[i], a[j]);
			i++;
			j--;
		}
	}
}

int main(){
	
	
		cin >> n;
		for(int i = 1; i<=n; i++){
			a[i] = i;
		}
		ok = 1;
		
		int cnt = 1;
		while(ok){
			cout << cnt <<": ";
			for(int i = 1; i<= n ; i++){
				cout << a[i] <<" ";
			}
			bynaryGen();
			cout <<"\n";
			cnt++;
		}
		
		
		
	
}
