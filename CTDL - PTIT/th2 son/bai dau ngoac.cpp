#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;

	cin.ignore();
	while (t--) {
		string tmp;
		getline(cin, tmp);

		string s;

		for (int i = 0; i < tmp.length(); i++) {
			if (tmp[i] != ' ') s += tmp[i];
		}

		int n = s.length();
		s = "+" + s;

		int cnt[300] = { 0 };
		cnt[0] = 0;
		for (int i = 1; i <= n; i++) {
			if (isalpha(s[i])) {
				cnt[i] = cnt[i - 1] + 1;
			}
			else cnt[i] = cnt[i - 1];
		}

		stack<int> st;

		for (int i = 1; i <= n; i++) {
			if (s[i] == '(') st.push(i);
			else if (s[i] == ')') {
				int pos = st.top();
				st.pop();
				if (s[pos - 1] == '+' || s[pos - 1] == '(' || cnt[i] - cnt[pos - 1] == 1) {
					s[i] = ' ';
					s[pos] = ' ';
				}
			}
		}

		for (int i = 1; i <= n; i++) {
			if (s[i] != ' ') cout << s[i];
		}
		cout << endl;
	}
	return 0;
}
