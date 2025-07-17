#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while ( t-- ) 
	{
		int n;
		cin >> n;
		int a[n+5];
		for( int i=0; i<n; i++ )
		{
			cin >> a[i];
		}
		int l=2e6, r=0;
		for( int i=0; i < n-1; i++ ){
			for( int j = i+1; j<n; j++ ){
				if( a[j] < a[i] ) {
					if( i < l ) l = i;
					
					if( j > r ) r = j;
				}
			}
		}
		cout << l+1 << " " << r+1 << endl;
	}
}

