#include <bits/stdc++.h>
using namespace std;

void solve() {
	int a, b;
	int c, d;
	int e, f;
	cin >> a >> b;
	cin >> c >> d;
	cin >> e >> f;
	if ((a == c) && (b == f)) {
		cout << "NO\n";
		return;
	}
	if ((a == e) && (b == d)) {
		cout << "NO\n";
		return;
	}
	if ((c == a) && (d == f)) {
		cout << "NO\n";
		return;
	}
	if ((c == e) && (d == b)) {
		cout << "NO\n";
		return;
	}
	if ((e == c) && (f == b)) {
		cout << "NO\n";
		return;
	}
	if ((e == a) && (f == d)) {
		cout << "NO\n";
		return;
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

