#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	string s1, s2;
	cin >> n;
	cin >> s1;
	cin >> s2;
	bool b1[n], b2[n];
	for (int i = 0; i < n; i++) {
		if (s1[i] == 'R') {
			b1[i] = true;
		} else {
			b1[i] = false;
		}
	}
	for (int i = 0; i < n; i++) {
		if (s2[i] == 'R') {
			b2[i] = true;
		} else {
			b2[i] = false;
		}
	}
	for (int i = 0; i < n; i++) {
		if (b1[i] ^ b2[i]) {
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

