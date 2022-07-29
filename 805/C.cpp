#include <bits/stdc++.h>
using namespace std;

void solve() {
	map<int, pair<int,int>> m;
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (m.find(x) == m.end()) {
			m[x].first = i;
		}
		m[x].second = i;
	}
	for (int i = 0; i < k; i++) {
		int a, b;
		cin >> a >> b;
		if (!m.count(a) || !m.count(b) || m[a].first > m[b].second) {
			cout << "NO\n";
		} else {
			cout << "YES\n";
		}
	}
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

