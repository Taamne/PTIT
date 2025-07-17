#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int f[1005]={};
	for(int  i = 1; i<=n; i++){
		int x;
		cin >> x;
		f[x] = f[x-1] +1;
	}
	cout << n - *max_element(f+1, f + n + 1);
}
