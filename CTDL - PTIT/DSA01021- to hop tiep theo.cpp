#include<bits/stdc++.h>
using namespace std;

int n,k, a[1005], ok;


void Gen(){
	int  i = k;
	while(i>0 && a[i] == n - k + i ){
		i--;
	}
	if(i == 0) ok = 0;
	else{
		a[i] ++;
		for(int j = i + 1; j<=k; j++){
			a[j] = a[j-1] + 1;
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		set < int > s;
		for(int i = 1; i <= k; i++){
			cin >> a[i];
			s.insert(a[i]);
		}
		ok = 1;
		Gen();
		if(ok){
			for(int i = 1 ; i <= k ; i++){
				s.insert(a[i]);
			}
			cout << s.size() - k << endl;
		}
		else cout << k << endl;
		
			
	}
}
