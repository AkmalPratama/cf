#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, m;
	cin >> n >> m;
	string s, t;
	cin >> s >> t;
	for (int i = m-1; i >= 0; i--) {
		s += t[i];
	}
	int cnt = 0;
	for (int i = 0; i < n+m-1; i++) {
		if (s[i] == s[i+1]) {
			cnt++;
		}
	}
	if (cnt > 1) {
		cout << "NO\n";
	} else {
		cout << "YES\n";
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

