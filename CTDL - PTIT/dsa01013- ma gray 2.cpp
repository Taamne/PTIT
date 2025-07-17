#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
//		stack<char> st;
		string s;
		cin >> s;
		deque<char>st;
		st.push_front(s[0]);
		for(int i = 1; i< s.length(); i++){
			if(s[i] == st.front()) {
				
				st.push_front('0');
		}
			else st.push_front('1');
 		
 		while(!st.empty()){
 			cout << st.back();
 			st.pop_back();
		}
	}
		cout << endl;
		 	
}

}
