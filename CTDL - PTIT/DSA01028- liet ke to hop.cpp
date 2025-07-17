#include<bits/stdc++.h>
using namespace std;


int n, k, a[1005] , ok ;

void Gen(){
	int i = k;
	while(i > 0 && a[i] == n - k + i){
		i--;
	}
	if(i == 0) ok = 0;
	else{
		a[i]++;
		for(int  j = i+ 1; j<=k ; j++){
			a[j] = a[j-1] + 1;
		}
	}
}

int main(){
	cin >> n >> k;
	set<int> s;
	int b[10005];
	vector<int> v;
	for(int i = 1; i<= n ; i++){
		cin >> b[i];
		s.insert(b[i]);
	}
	n = s.size();
	for(auto x : s){
		v.push_back(x);
	}
	for(int i = 1 ;i<= k; i++){
		a[i] = i;
	}
	ok = 1;
	while(ok){
		for(int i = 1; i<= k ; i++){
			cout << v[a[i] - 1] <<" ";
		}
		cout << endl;
		Gen();
	}
}
