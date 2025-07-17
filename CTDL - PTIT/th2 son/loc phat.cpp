#include<bits/stdc++.h>
using namespace std;

#define ll long long

#define N 600000

#define MOD (ll) 998244353

bool visited[1001] = { false };
int par[1001] = { 0 };
vector<int> edge[1001];
int n, m, u, v;

void bfs() {
	queue<int> q;
	q.push(u);

	bool check = false;

	while (!q.empty()) {
		auto cur = q.front();
		q.pop();

		if (cur == v) {
			check = true;
			break;
		}

		for (auto x : edge[cur]) {
			if (!visited[x]) {
				q.push(x);
				par[x] = cur;
				q.push(x);
			}
		}
	}

	if (check) {
		stack<int> st;
		while (true) {
			st.push(v);
			if (v == u) break;
			v = par[v];
		}

		while (st.size()) {
			cout << st.top() << " ";
			st.pop();
		}
		cout << endl;
	}
	else {
		cout << -1 << endl;
	}
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		cin >> n >> m >> u >> v;

		for (int i = 0; i <= n; i++) ke[i].clear();
		memset(visited, false, sizeof visited);
		memset(par, 0, sizeof par);

		for (int i = 0; i < m; i++) {
			int a, b;
			cin >> a >> b;
			edge[a].push_back(b);
		}

		bfs();
	}

	return 0;
}
