#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

void testCase() {
    int n, k;
    cin >> n >> k;
    vector<long long> f(n + 1, 0);
    f[0] = 1;
    for (int i = 1; i <= n; ++i) {
        for(int j = 1; j <= k; j++) {
            if (i - j >= 0) {
                f[i] = (f[i] + f[i - j]) % MOD;
            }
        }
    }
    
    cout << f[n];
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}

