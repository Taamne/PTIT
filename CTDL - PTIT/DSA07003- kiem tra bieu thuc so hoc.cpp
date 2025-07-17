#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		stack<char> st;
		string s;
		bool ok;
		getline(cin, s);
		for(int i = 0 ; i< s.length(); i++){
			if(s[i] != ')'){
				st.push(s[i]);
			}
			else{
				ok = false;
				while(!st.empty()){
					char x = st.top();
					st.pop();
					if(x == '+' || x == '-' || x == '*' || x == '/' ){
						ok = true;
					}
					
						if(x == '('){
							break;
						}
					}
				
				if(!ok) {
					
					cout <<"Yes\n";
					break;
					}
			}
		}
		if(ok)  cout <<"No\n";
	}

}
