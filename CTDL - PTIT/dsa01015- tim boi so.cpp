#include<bits/stdc++.h>
using namespace std;

void Test(){
	queue<string>st;
	string s;
	long long x, n;
	cin >> x;
	st.push("9");
	while(true){
		
	
	s= st.front();
	st.pop();
	x=0;
	for(int i = 0 ; i< s.length(); i++){
		n = (n*10 + (s[i] - '0') ) % x;
	}
	if(n==0) {
		cout << s << endl;
		return;
	}
	st.push(s+"0");
	st.push(s+"1");
}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		
		Test();
	}
}
