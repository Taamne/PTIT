#include<bits/stdc++.h>
using namespace std;

string s;
int ok, n;
void binary(){
	int i = n-2;
	while( i >= 0 && s[i]-'0' > s[i+1]-'0' ){
		i--;
	}
	if(i == 0) ok = 0;
	else{
		int j = n;
		while(i < j && a[i] - '0' > a[j] - '0'){
			j--;
		}
		swap(a[i], a[j]);
		j = n;
		i++;
		while(i < j){
			swap(a[i], a[j]);
			i++;
			j--;
		}
	}
}


int main(){
	int t;
	cin >> t;
	int cnt = 1;
	while(t--){
		cin >> s;
		ok = 1;
		binary();
		if(ok ){
			cout << cnt <<" " << s << endl;
		}
		else cout << cnt << " " << "BIGGEST\n";
		cnt++;
	}	
}
