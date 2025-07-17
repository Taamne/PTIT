#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll calc(ll a, ll b, string x) {
	if (x == "+") return a + b;
	else if (x == "-") return a - b;
	else if (x == "*") return a * b;
	else if (x == "/") return a / b;
	return 0;
}

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while (t--) {
		int n;
		cin >> n;

		cin.ignore();
		string s;
		getline(cin, s);

		stringstream ss(s);
		string tmp;
		vector<string> v;
		while (ss >> tmp) {
			v.push_back(tmp);
		}

		if (isdigit(v[0][v.size() - 1])) {
			stack<ll> st;
			for (int i = 0; i < v.size(); i++) {
				if (isdigit(v[i][v[i].size() - 1])) st.push(stoll(v[i]));
				else {
					ll b = st.top();
					st.pop();
					ll a = st.top();
					st.pop();
					ll c = calc(a, b, v[i]);
					st.push(c);
				}
			}
			cout << st.top() << endl;
		}
		else {
			stack<ll> st;
			for (int i = v.size() - 1; i >= 0; i--) {
				if (isdigit(v[i][v[i].size() - 1])) st.push(stoll(v[i]));
				else {
					ll b = st.top();
					st.pop();
					ll a = st.top();
					st.pop();
					ll c = calc(a, b, v[i]);
					st.push(c);
				}
			}
			cout << st.top() << endl;
		}
	}

	return 0;
}
