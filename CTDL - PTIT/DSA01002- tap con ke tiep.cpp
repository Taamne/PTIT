#include<bits/stdc++.h>
using namespace std;
int a[100], ok, n, k;
void bynaryGen(){
	
	int i = k;
	while(i >0 && a[i] == n - k + i ){
		i--;
	}
	if(i == 0){
		ok = 0;
	}
	else {

		a[i] ++; 
	
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
	while( t-- ){
		cin >> n >> k;
		ok = 1;
		for(int i = 1 ; i <= k ; i++){
			cin >> a[i];
			
		}
		bynaryGen();
		if ( ok){
			for(int i = 1 ; i <= k ; i++){
				cout << a[i] <<" ";
			}
			cout <<"\n";
		}
		else {
			for(int i =  1 ; i<=k; i++){
				cout << i <<" ";
			}
			cout << endl;
		}
	}
}
