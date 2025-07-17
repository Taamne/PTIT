#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;



int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n+5];
		for(int i = 0;i < n ; i++){
			cin >> a[i];
		}
		int cnt = 0;
		for(int i = 0; i<=n - 3; i++){
			for(int j = i; j<n-1; j++){
				for(int x = j+1;  x < n ; x++){
					if(a[i] + a[j] + a[x] < k) cnt++;
				}
			}
		}
		cout << cnt << endl;
	}
}

