#include<bits/stdc++.h>
using namespace std;
int test(string s){
	stack<char>st;
	for(int i = 0 ; i< s.length(); i++){
		if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
			st.push(s[i]);
		}
		else{
			if(st.empty() && s[i] != '.' ) return 0;
			else if(s[i] == ')' && st.top() == '(') st.pop();
			else if(s[i] == ']' && st.top() == '[' ) st.pop();
			else if(s[i] == '}' && st.top() == '{') st.pop();
				
			
			else return 0;
		}
	}
	if(st.size() == 0) return 1;
}
int main(){
	int t;
	cin >> t;
	getchar();
	while(t--){
		string s;
		getline(cin ,s);
		if(test(s)) cout << "YES\n";
		else cout <<"NO\n";
	}
}

