#include<bits/stdc++.h>
using namespace std;
#define ll long long
int k, n;
vector < string > s;
int b[1005], a[1005];
ll res = 2e9;

void check(){
	vector<int> v;
	for(int i = 0 ; i<n; i++){
		string tmp = "";
		for(int j = 1; j<= k ; j++){
			tmp += s[i][b[j] - 1];
			
		}
		v.push_back(stoi(tmp));
		
	}
	sort(v.begin(), v.end());
	res = min(res, (ll)(v[n-1] - v[0]));
}
void Try(int i){
	for(int j = 1 ;j<= k ; j++)
		if(!a[j]){
			b[i] = j;
			a[j] = 1;
			if(i==k){
				check();
			}
		
		else Try(i + 1);
		a[j]= 0;
	}
}
int main(){
	cin >> n >> k;
	s.resize(n);
	for(int i = 0 ; i< n ; i++){
		cin >> s[i];
	}
	Try(1);
	cout << res << endl;
}
