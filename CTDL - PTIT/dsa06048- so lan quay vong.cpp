#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		int a[100005];
		cin >> n;
		for(int i = 0; i<n; i++){
			cin >> a[i];
			
		}
		int cnt = 0;
		for(int i =1; i<n; i++){
			if(a[i] < a[i-1]){
				cnt  = i;
				break;
			}
		}
		cout << cnt<<endl;
	}
}
