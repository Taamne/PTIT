#include<bits/stdc++.h>
using namespace std;

int a[1005], n, ok;

void Gen(){
	int i = n-1;
	while(i>0 && a[i] > a[i+1]){
		i--;
	}
	if(i  == 0 ) ok = 0;
	else{
		int j = n;
		while(i < j && a[i] > a[j]){
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
int check(int a[1005], int b[1005]){
	for(int i = 1; i <= n ; i++){
		if(a[i] != b[i]) return 0;
		
	}
	return 1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		int b[1005];
		for(int i = 1; i <= n ; i++){
			
			cin >> b[i] ;
			
		}
		for(int i = 1; i<=n; i++){
			a[i] = i;
		}
		ok = 1;
		int cnt = 1;
		while(ok){
			if(check(a,b) ) {
				
				cout << cnt <<endl;
				break;
			}
			else{
				cnt++;
				Gen();
			}
		}
	}
}
