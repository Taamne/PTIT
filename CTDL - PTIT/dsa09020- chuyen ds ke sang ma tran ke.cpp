#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	cin.ignore();
	vector<vector<int>> a(n + 1, vector<int>(n + 1, 0));
	for(int i = 1; i<= n ; i++){
		string s;
		getline(cin, s);
		stringstream ss(s);
		int k;
		while(ss >> k){
		
			
			a[i][k]=1;
			a[k][i] =1;
		
	}
		
		
	}
	for(int i = 1; i<= n ; i++){
		for(int j = 1 ; j<=n; j++){
			cout << a[i][j] <<" ";
		}
		cout << endl;
	}
}
