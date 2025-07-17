#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while ( t-- ){
		int n, x;
		cin >> n >> x;
		int pos = 0;
		for(int i = 0; i < n ; i++){
			int k;
			cin >> k;
			if(k == x ) pos = i; 
		}
		cout << pos + 1 << endl;
	}
}
