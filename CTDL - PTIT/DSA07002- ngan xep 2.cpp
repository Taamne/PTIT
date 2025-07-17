#include<bits/stdc++.h>
using namespace std;
int main(){
	stack<int> st;
	string s;
	int x;
	int n;
	cin >> n;
	while(n--){
		cin >> s;
		if(s == "PUSH"){
			cin >> x;
			st.push(x);
		}
		else if(s =="POP"){
			if(!st.empty()){
				st.pop();
			}
		}
		else if(s == "PRINT"){
			if(st.empty()){
				cout <<"NONE";
			}
			else{
				cout << st.top();
			}
 		}
 		cout << endl;
	}
}
