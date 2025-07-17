#include<bits/stdc++.h>
using namespace std;
	vector<int>a;
	int n,k,s;
void Try(int s){
	if(a.size() == k){
		for(int i = 0 ; i < k ; i++){
			cout << a[i] ;
			if( i != k - 1){
				cout <<" ";
			}

		}
		cout << endl;
		return;
	}
	for(int i = s; i<= n ; i++){
		a.push_back(i);
		Try(i);
		a.pop_back();
	}
	
	
}

int main(){

	cin >> n >> k;
	Try(1);
}
