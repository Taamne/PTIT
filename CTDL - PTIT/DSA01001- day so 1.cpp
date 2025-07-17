#include<bits/stdc++.h>
using namespace std;

vector<int> a;
vector<int> b;
void Try(int n){
	cout <<"[";
	for(int i = 0 ; i<a.size(); i++){
		cout << a[i] ;
		if(i != a.size()-1) {
			cout <<" ";
		} 
	}
	cout <<"]";
	if(n==1) return;
	for(int i = 0; i < n-1; i++){
		b.push_back(a[i] + a[i+1]);
	}
	a= b;
	a.resize(n-1);
	b.clear();
	
	cout << endl;
	Try(n-1);
	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i = 0 ;  i<n; i++){
			int x;
			cin >> x;
			a.push_back(x);
		}
		Try(n);
	}
}
