#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		stack <int> st;
		int maxx = 0;
		st.push(-1);
		for(int i = 0 ; i< s.length(); i++){
			if(s[i] == '(') st.push(i);
			else {
				st.pop();
				if(!st.empty()){
					maxx = max(maxx, i - st.top());
				}else st.push(i);
			}
		}
		cout << maxx<< endl;
	}
}
