#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	bool b = true;
	for (int i = 0; i < n; i++) {
		double x;
		cin >> x;
		if (floor(sqrt(x)) != ceil(sqrt(x))) {
			b = false;
		}
	}
	if (b) {
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
