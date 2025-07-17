#include<bits/stdc++.h>
using namespace std;
int a[1005], ok,  n;
void Gen(){
	int i = n;
	while( i >=1 && a[i] == 1){
		a[i]= 0;
		i--;
	}
	if(i == 0) ok = 0;
	else a[i] = 1;
}
int check(int a[1005], int n){
	int cnt = 0;
	for(int i = 1; i<= n ; i++){
		if(a[i]) cnt++;
	}
	
	if(cnt % 2 == 0) return 1;
	return 0;
} 
int main(){
	int n;
	cin >> n;
	for(int i  = 1; i<= n ; i++){
		a[i] = 0;
		
	}
	ok = 1;
	while(ok){
		int cnt = 0;
		for(int i = 1 ; i<= n ; i++){
			if(a[i]) cnt++;
		}
		if(cnt % 2 == 0) {
			for(int i = 1; i<= n ; i++){
				cout << a[i] <<" ";
			}
			cout << endl;
		
		}
		Gen();
	}
}
