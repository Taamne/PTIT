#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    vector<long long> f(n + 1, 0);
    long long tmp = 0;
    f[0]=1;
    f[1]=1;
    f[2] = 2;
    for (int i = 3; i <= n; ++i) {
        f[i]= f[i-1]+f[i-2]+f[i-3];
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
