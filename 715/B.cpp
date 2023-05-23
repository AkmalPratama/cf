#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	vector<int> t, m;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'T') {
			t.push_back(i);
		} else {
			m.push_back(i);
		}
	}
	if (t.size() != m.size() * 2) {
		cout << "NO\n";
		return;
	}
	for (int i = 0; i < n/3; i++) {
		if (t[i] > m[i] || m[i] > t[i+n/3]) {
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

