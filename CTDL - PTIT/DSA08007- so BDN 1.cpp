#include<bits/stdc++.h>
using namespace std;
void Test(){
	queue<string>q;
	q.push("1");
	string n;
	cin >> n;
	string s;
	int cnt = 0;
	while(true){
		s = q.front();
		q.pop();
	
		cnt++;
		string x = s + "0";
		if(x.length() > n.length() || (x.length() == n.length() && x > n)) 
			break;
		q.push(x);
		x = s + "1";
		if(x.length() > n.length() || (x.length() == n.length() && x > n)) 
			break;
		q.push(x);
	}
		cout << cnt + q.size() << endl;
	
}
int main(){
	int t;
	cin >> t;
	while(t--){
	
		Test();
	}
}
