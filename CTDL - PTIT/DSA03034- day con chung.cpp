#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m,k;
		cin >> n >> m >> k;
		int a[100005], b[100005], c[100005];
		for(int i = 0 ; i<n; i++){
			cin >> a[i];
			
		}
		for(int i = 0 ; i<m; i++){
			cin >> b[i];
			
		}
		for(int i = 0 ; i<k; i++){
			cin >> c[i];
			
		}
		int ok = 0, x=0, y=0, z=0, maxx=0;
		while(x < n && y < m && z <k ){
			if(a[x] == b[y] && b[y] == c[z]){
				cout << a[x] <<" ";
				ok = 1;
				x++;
				y++;
				z++;
			}
			else{
				maxx= max(a[x] , b[y]);
				maxx= max(maxx , c[z]);
				while(a[x] < maxx ){
					x++;
				}	
				while(b[y] < maxx){
					y++;
				}
				while(c[z] < maxx){
					z++;
				}
				
			}
			
			
		}
		if(ok == 0) cout <<"NO";
		cout << endl;
	}	
}
