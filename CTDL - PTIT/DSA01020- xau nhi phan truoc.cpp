#include<bits/stdc++.h>
using namespace std;
int ok;
void binaryGen(string s){
	int i = s.length()-1;
	while( i >= 0 && s[i] == '0'){
		s[i] = '1';
		i--;
	}
	if(ok != 1) s[i] = '0';
	else ok = 0;
}
 
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		ok = 1;
		binaryGen(s);
		if(ok){
			cout << s;
			cout << endl;
		}
		else {
			for(int i = 0 ; i<s.length(); i++){
				cout <<1;
				cout << endl;
			}
		}
	}
}
