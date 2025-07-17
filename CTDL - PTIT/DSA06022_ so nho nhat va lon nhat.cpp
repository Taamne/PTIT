#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while ( t-- ){
		int n;
		cin >> n;
		set < int > s;
		for(int i = 0; i < n ; i++){
			int k;
			cin >> k;
			s.insert(k); 
		}if(s.size() <2) cout <<-1<<endl;
		else{
			int k = *s.begin();
			cout << k  <<" ";
			s.erase(k);
			cout << *s.begin()<<  endl;
		}
		
	}
}
