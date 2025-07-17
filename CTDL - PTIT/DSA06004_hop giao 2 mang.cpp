#include<bits/stdc++.h>
#include<algorithm>
#include<math.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while( t--){
		int n, m;
		cin >> n >> m;
		set < int > hop;
		set <int> giao;
		int a[n+5], b[m+5];
		for(int i=0; i<n; i++){
			cin >> a[i];
			hop.insert(a[i]);
			
		}
		for( int i=0; i<m; i++){
			cin >> b[i];
			hop.insert(b[i]);
			
		}
		for( int i=0; i<n; i++ )
		{
			for( int j=0; j<m; j++ )
			{
				if( a[i] == b[j] )
				{
					giao.insert(a[i]);
				}
			}
		}
		for( auto x : hop) cout << x <<" ";
		cout << endl;
		for( auto x : giao) cout << x << " ";
		cout << endl;
	}
}

