#include<bits/stdc++.h>
using namespace std;
#define ll long long
int calcPrefix(vector<string> v){
	stack<int> st;
	for(int i = v.size() - 1; i>= 0 ; i--){
		if(v[i] != "+" || v[i] != "-" || v[i] != "*" || v[i] != "/" ) st.push(stoll(v[i]));
		else{
			if(v[i] == "+"){
				ll tmp1 = st.top();
				st.pop();
				ll tmp2 = st.top();
				st.pop();
				st.push(tmp1 + tmp2);
			}
			if(v[i] == "-"){
				ll tmp1 = st.top();
				st.pop();
				ll tmp2 = st.top();
				st.pop();
				st.push(tmp1 - tmp2);
			}if(v[i] == "*"){
				ll tmp1 = st.top();
				st.pop();
				ll tmp2 = st.top();
				st.pop();
				st.push(tmp1 * tmp2);
			}
			if(v[i] == "/"){
				ll tmp1 = st.top();
				st.pop();
				ll tmp2 = st.top();
				st.pop();
				st.push(tmp1 / tmp2);
			}
		}
	}
	return st.top();			
}
int calcPostfix(vector<string> v){
	stack<int> st;
	for(int i = v.size() - 1; i>= 0 ; i--){
		if(v[i] != "+" || v[i] != "-" || v[i] != "*" || v[i] != "/" ) st.push(stoll(v[i]));
		else{
			if(v[i] == "+"){
				ll tmp1 = st.top();
				st.pop();
				ll tmp2 = st.top();
				st.pop();
				st.push(tmp2 + tmp1);
			}
			if(v[i] == "-"){
				ll tmp1 = st.top();
				st.pop();
				ll tmp2 = st.top();
				st.pop();
				st.push(tmp2 - tmp1);
			}if(v[i] == "*"){
				ll tmp1 = st.top();
				st.pop();
				ll tmp2 = st.top();
				st.pop();
				st.push(tmp2 * tmp1);
			}
			if(v[i] == "/"){
				ll tmp1 = st.top();
				st.pop();
				ll tmp2 = st.top();
				st.pop();
				st.push(tmp2 / tmp1);
			}
		}
	}
	return st.top();			
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<string> v(n);
		for(int i =  0 ; i<n; i++){
			cin >> v[i];
		}
		if(v[v.size()-1] != "+" && v[v.size() -1] != "-" && v[v.size() -1] !="*" && v[v.size() -1] !="/" ) cout <<calcPrefix(v);
		else cout << calcPostfix(v);
		cout << endl;
	}
}

