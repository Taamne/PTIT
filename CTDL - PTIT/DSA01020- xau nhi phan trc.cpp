#include<bits/stdc++.h>
using namespace std;

string s;
int ok;

void BinaryGen(){
	int i = s.length()-1;
	while( i>=0 && s[i] =='0' ){
		s[i] = '1';
		i--;
	}
	if(i >= 0) s[i] = '0';
	cout << s <<endl;
	 
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> s;
		
	
		BinaryGen();

		}
	
	}

