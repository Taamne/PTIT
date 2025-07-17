#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		int a[100005];
		for(int i= 0; i< n; i++){
			cin >> a[i];
		}
		for(int i = 0; i<= n- k; i++){
			int max = -2e9;
			for(int j = i; j< i+k ; j++){
				if(max < a[j] ) max = a[j];
			}
			cout << max <<" ";
		}
		cout << endl;
	}
}
