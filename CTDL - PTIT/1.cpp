#include<bits/stdc++.h>
using namespace std;
double res(int fi, int se, string x){
	if(x == "+"){
		return fi + se;
	}
	else if(x == "-"){
		return fi - se;
	}
	else if(x == "*"){
		return fi * se;
	}
	else if(x == "/"){
		return fi / se;
	}
	else if(x == "^"){
		return fi ^ se;
		
	}
	else if(x == "%"){
		return fi % se;
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<string> v;
		stack<long long> st;
		string s;
		for(int i = 0; i< n ; i++){
			cin >> s;
			v.push_back(s);
		}
		for(int i = 0 ; i<n; i++){
			
		
			if(v[i] == "+" || v[i] == "-" || v[i] == "*" || v[i] == "/" || v[i] == "^" || v[i] =="%"){
				double fi = st.top() ; st.pop();
				double se = st.top() ; st.pop();
				double result = res(se, fi, v[i]);
				st.push( result );
			}
			else {
				
				long long c= stoll(v[i]);
				st.push(c);
			}
			
		}
					cout <<  st.top() << endl;

	}
}


