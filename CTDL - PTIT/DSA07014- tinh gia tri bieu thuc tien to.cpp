#include<bits/stdc++.h>
using namespace std;
int res(int fi, int se, char x){
	if(x == '+'){
		return fi + se;
	}
	else if(x == '-'){
		return fi - se;
	}
	else if(x == '*'){
		return fi * se;
	}
	else if(x == '/'){
		return fi / se;
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		stack<int> st;
		for(int i = s.length()-1; i >= 0 ; i--){
			if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' ){
				int fi = st.top() ; st.pop();
				int se = st.top() ; st.pop();
				int result = res(fi, se, s[i]);
				st.push( result );
			}
			else {
				
				st.push(s[i] - '0');
			}
			
		}
					cout <<  st.top() << endl;

	}
}
