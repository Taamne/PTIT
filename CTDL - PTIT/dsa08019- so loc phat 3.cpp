#include<bits/stdc++.h>
using namespace std;
int check(string s){
	int n = s.length();
	if(s.length() %2 != 0) return 0;
	for(int i = 0 ; i< s.length()/2; i++){
		if(s[i] != s[n-i-1]) return 0;
	}
	return 1;
}
void Test(int n){
	queue< string > q;
	stack<string> st;
	string s;
	q.push("6");
	q.push("8");
	while(true){
		s = q.front();
		q.pop();
		if(s.length() <= n){
			st.push(s);
		}
		else break;
		q.push(s+"6");
		q.push(s+"8");
		
	}
	while(!st.empty()) {
		string x = st.top();
		if(check(st.top()))
		cout << st.top() <<" ";
		st.pop();
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		Test(n);
		cout << endl;
	}
}
