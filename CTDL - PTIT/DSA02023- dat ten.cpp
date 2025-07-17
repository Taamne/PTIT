#include<bits/stdc++.h>
using namespace std;

int n,k;
set<string> s;
vector<string> v;
int a[1005];

void xuat(){
	for(int i = 1; i <= k; i++){
		cout << v[a[i]-1] <<" ";
	}
	cout << endl;
}
void Try(int i){
	for(int j = a[i-1]+1; j<= n - k + i; j++){
		a[i] = j;
		if(i == k){
			xuat();
		}
		else {
			Try(i+1);
		}
	}	
}

int main(){
	cin >> n >> k;

	for(int i = 1; i<= n ; i++){
		string x;
		cin >> x;
		s.insert(x);
	}
	n = s.size();
	for(auto x : s){
		v.push_back(x);
	}
	Try(1);
	
}
