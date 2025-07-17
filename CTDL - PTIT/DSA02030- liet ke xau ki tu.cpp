#include<bits/stdc++.h>
using namespace std;
int a[1005], k, n;
char x;
string s;
void Try(char i){
	for(char j= i ;j<=x; j++){
		s.push_back(j);
		if(s.size() == k){
			cout << s <<"\n"; 
		}
		else {
			Try( j);
		}
		s.pop_back();
	}
}


int main(){
	cin >> x >> k;
	
	Try('A');
}
