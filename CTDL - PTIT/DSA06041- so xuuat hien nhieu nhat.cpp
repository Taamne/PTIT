#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n+10];
		int Max = 0;
		map<int, int > mp;
		int pos = 0;
		for(int i =  0; i<n;  i++){
			cin >> a[i];
			mp[a[i]]++;
			if(mp[a[i]] > Max){
				Max = mp[a[i]] ;
				pos = a[i];
			}
			
		}
		if(Max > n/2) cout << pos << endl;
		else cout << "NO\n"; 
	}
}
