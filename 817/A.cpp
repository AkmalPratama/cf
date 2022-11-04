#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	string s;
	cin >> n;
	cin >> s;
	if (n != 5) {
		cout << "NO\n";
		return;
	}
	map<char,int> m;
	for (int i = 0; i < n; i++) {
		if (m.count(s[i]) > 0) {
			m[s[i]] = m[s[i]] + 1;
		} else {
			m[s[i]] = 1;
		}
	}
	if (m.count('T') > 0 &&
	m.count('i') > 0 &&
	m.count('m') > 0 &&
	m.count('u') > 0 &&
	m.count('r') > 0
	) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
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

