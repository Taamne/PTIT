#include<bits/stdc++.h>
using namespace std;
int n, k, ok , s, a[1005] ;
void Gen(){
	int  i = n;
	while( i >  0 && a[i] == n - k + i){
		i--;
	}
	if(i==0) ok = 0;
	else{
		a[i]++;
		for(int j = i + 1; j<= k ; j++){
			a[j] = a[j-1] + 1;
		}
	}
}
int check(int a[],  int k, int s){
	
	int sum = 0;
	for(int i = 1; i<= k ; i++){
		sum += a[i];
		if(sum > s) return 0;
	}
	if(sum == s) return 1;
	return 0;
	
}

int main(){
	while( cin >> n >> k >> s ){
		if( n == 0 && k == 0 && s==0) return 0;
		else if(n < k) cout<<"0" << endl;
		else{
			for(int i = 1; i<= k ; i++){
				a[i] = i;
			}		
			ok = 1;
			int cnt = 0;
					
					
				while(ok){
					if (check(a,k,s)){
					
						cnt ++;
					}
					
					Gen();
					
				}
				cout << cnt << endl;
		}	
}
}
