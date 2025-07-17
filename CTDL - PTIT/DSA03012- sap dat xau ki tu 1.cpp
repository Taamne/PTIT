#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		 string s; cin >> s;
    int cnt[1005] ;
    int maxx = 0;
    for (char i : s) {
        cnt[i]++;
        maxx = max(maxx, cnt[i]);
    }
    if (maxx <= (s.length() + 1) / 2) cout << "1";
    else cout << "-1";
    cout << endl;
}
	}

