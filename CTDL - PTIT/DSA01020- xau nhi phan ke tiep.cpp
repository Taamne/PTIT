#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int i = s.length()-1;
		while(i>=0 && s[i] == '0'){
			i--;
		}
		if(i == 0 ){
			for(int j = 0 ; j < s.length(); i++){
				cout <<"1";
			}
		}
		else {
			s[i] = '0';
			for(int j = i+1; j<s.length(); j++){
				s[j] = '1';
			}
			cout <<s;
			
		}
		cout <<endl;
	}
}
