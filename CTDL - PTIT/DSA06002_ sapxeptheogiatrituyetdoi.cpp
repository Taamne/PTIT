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
		int a[n+5], min = 2e6;
		for( int i=0; i < n; i++){
			  cin >> a[i];
		}
		for (int i = 0; i < n - 1; i++)
			for (int j = n-1; j >i; j--)
		    	if( abs( a[j] - k ) < abs( a[j-1] - k))
		    		swap(a[j], a[j-1]);
		for( int i=0; i < n; i++){
			  cout << a[i] <<" ";
		}
		cout << endl;
		
	}         
}
