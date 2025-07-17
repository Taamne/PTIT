#include<bits/stdc++.h>
using namespace std;
void Binary(int n){
	queue<string> q;
	string s;
	q.push("1");
	while(n--){
		s = q.front();
		q.pop();
		cout << s <<" ";
		q.push(s + "0");
		q.push(s + "1");
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		
		cin >> n;
		Binary(n);
		cout << endl;
	}
}
