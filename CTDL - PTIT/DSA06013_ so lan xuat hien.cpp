#include<bits/stdc++.h>
#include<algorithm>
#include<math.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while( t-- )
	{
		int n, x;
		cin >> n >> x;
		map < int, int > mp;
		for( int i=0; i<n; i++ ){
			int x;
			cin >> x;
			mp[x]++;
		}
		int check =0;	
		for( auto it : mp) 
		{
			if( it.first == x) {
				cout << it.second << endl;
				 check =1;
			}
		}
		if(check == 0)
		cout << -1 << endl;
	}
}

