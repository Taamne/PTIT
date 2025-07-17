#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

void testCase() {
    int n, k;
    cin >> n >> k;
    vector<long long> f(1e5 + 1, 0);
    long long tmp = 0;
    f[0]= 1;
    f[1]=1;
    f[2]=2;
    for (int i = 3; i <= n; ++i) {
        for(int j = 1; j <=k ; j++){
        	f[i]= (f[i] + f[i-j] ) % MOD;
		}
    }
    
    cout << f[n];
}

int main() {
   
    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}
