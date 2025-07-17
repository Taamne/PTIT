#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
	int t;
	cin >> t;

	while (t--) {
		string s;
		cin >> s;

		int n = s.length();
		s = " " + s;

		stack<int> st;
		vector<int> res;

		int cnt = 1;
		for (int i = 1; i <= n; i++) {
			if (s[i] == '(') {
				st.push(cnt);
				res.push_back(cnt);
				cnt++;
			}
			else if (s[i] == ')') {
				int tmp = st.top();
				st.pop();
				res.push_back(tmp);
			}
		}

		for (auto x : res) {
			cout << x << " ";
		}
		cout << endl;
	}

	return 0;
}
