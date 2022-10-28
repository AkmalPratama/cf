#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	string s;
	cin >> s;
	map<int,char> m;
	bool b = true;
	for (int i = 0; i < n; i++) {
		if (m.count(a[i])) {
			if (m[a[i]] != s[i]) {
				b = false;
				break;
			}
		} else {
			m[a[i]] = s[i];
		}
	}
	if (b) {
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

