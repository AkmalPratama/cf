#include <bits/stdc++.h>
using namespace std;

void solve() {
	int a, b, c;
	cin >> a >> b >> c;
	bool bb = false;
	if (c == a + b) {
		bb = true;
	}
	if (b == a + c) {
		bb = true;
	}
	if (a == c + b) {
		bb = true;
	}
	if (bb) {
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

