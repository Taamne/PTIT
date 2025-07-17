#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
bool cmp( int a, int b){
	return a>b;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		int a[n+5], b[m+5];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for( int j=0; j < m ; j++){
			cin >> b[j];
		}
		sort( a, a+n);
		sort( b, b+m);
		long long x = a[n-1], y = b[0];
		cout << x*y << endl;
	} 
}

