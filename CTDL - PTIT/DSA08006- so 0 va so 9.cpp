#include<bits/stdc++.h>
using namespace std;
#define ll long long
void Test(int n){
	queue<string> q;
	string s;
	q.push("9");
	ll x ;
	while(true){
		s = q.front();
		
		q.pop();
		q.push(s  + "0");
		q.push(s  + "9");
		x = 0;
		for(int i = 0 ; i< s.length() ; i++){
			x = (x * 10 + (s[i] - '0') )% n  ;
		}
		if(x  ==0 ) {
			cout << s << endl;
			return;
		}
		
	}
	
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		Test(n);
	}
}
