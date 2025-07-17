#include<bits/stdc++.h>
using namespace std;
int n;
	vector<vector<int>>g(n+5);

void Test(){
	for(int  i = 1 ; i<= n; i++){
		
		string s;
		getline(cin ,s);
		stringstream ss(s);
		int k;
		while(ss >> k){
			
				g[i].push_back(k);
			
		}
		
	}
	for(int i = 1; i<=n; i++){
		for(auto x : g[i]) 
		if(x > i)cout << i << " " << x <<endl;
			
		

	}
}
int main(){
	cin >> n;
	cin.ignore();
	Test();

}
