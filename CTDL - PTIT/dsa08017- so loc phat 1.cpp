#include<bits/stdc++.h>
using namespace std;
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
