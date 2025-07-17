#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int d;
		cin >> d;
		 string s; cin >> s;
    int cnt[1005] ={};
    int maxx = 0;
    for (char i : s) {
        cnt[i]++;
        maxx = max(maxx, cnt[i]);
    }
//  a b b
//  a a b b b
    if (maxx  <= ceil((float)s.length()/d ) )cout << "1";
    else cout << "-1";
    cout << endl;
}
	}

