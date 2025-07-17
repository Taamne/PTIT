#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		stack<string> st;
		for(int i = 0; i < s.length() ; i++){
			if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' ){
				string se = st.top() ; st.pop();
				string fi = st.top() ; st.pop();
				
				st.push( fi + s[i] + se );
			}
			else {
				
				st.push(string(1, s[i]));
			}
			
		}
					cout <<  st.top() << endl;

	}
}
