#include<bits/stdc++.h>
#include<algorithm>
#include<math.h>
using namespace std;



int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		set <int> s;
		for(int i=0; i<n; i++){
			int x;
			cin >> x;
			while( x > 0){
				int d = x %10;
				s.insert(d);
				x/=10;
			}
		}
		for( auto x : s) cout <<x<<" ";
		cout <<endl;
	}
	
	
	
}

