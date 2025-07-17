#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		stack<char> open;
		stack<char> close;
		for(int i = 0 ; i< s.length(); i++){
			if(s[i] != ')'){
				open.push(s[i]);
			}
			else{
			
				if(!open.empty()){
					
					open.pop();
				}
				else{
					close.push(s[i]);	
				}
				
				
			}
		}
		cout << (open.size() + 1)/2 + (close.size()+1)/2 << endl;
	}
}
