#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;



int main(){
	int t;
	cin >> t;
	while(t--){
		int n, x;
		cin >> n >> x;
		int a[n+5];
		int check = 0;
		for( int i = 0; i < n ; i++){
			int k;
			 cin >> k;
			 if( x ==  k) check =1;
		}
		if( check == 1) cout<< 1 << endl;
		else cout << -1 << endl;
	}
}

