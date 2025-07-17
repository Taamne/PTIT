#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[1005];
		for(int i = 0 ; i< n ;i++){
			cin >> a[i];
		}
		sort(a, a+n);
		long long sum = 0;
		int k = 0;
//  2 3 4 5 6 8
		for(int i = n-1; i>=0; i-=2){
			sum += (a[i] + a[i-1]) * pow(10,k);
			k++;
		}
		if(n % 2 == 1) sum += a[0] * pow(10, k);
		cout << sum << endl;
	}
}
