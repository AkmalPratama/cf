#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int a, b, c;
	cin >> a >> b >> c;
	int mx = max(a, max(b, c));
	if (a == b && b == c) {
		cout << "1 1 1\n";
		return;
	}
	if (a != b && b != c && c != a) {
		if (a == mx) {
			cout << 0;
		} else {
			cout << mx - a + 1;
		}
		if (b == mx) {
			cout << " 0";
		} else {
			cout << " " << mx - b + 1;
		}
		if (c == mx) {
			cout << " 0\n";
		} else {
			cout << " " << mx - c + 1 << endl;
		}
		return;
	}
	if (a == b) {
		if (a == mx) {
			cout << 1 << " " << 1 << " " << mx - c + 1 << endl;
		} else {
			cout << mx - a + 1 << " " << mx - b + 1 << " " << 0 << endl;
		}
		return;
	}
	if (b == c) {
		if (b == mx) {
			cout << mx - a + 1 << " " << 1 << " " << 1 << endl;
		} else {
			cout << 0 << " " << mx - b + 1 << " " << mx - c + 1 << endl;
		}
		return;
	}
	if (a == c) {
		if (a == mx) {
			cout << 1 << " " << mx - b + 1 << " " << 1 << endl;
		} else {
			cout << mx - a + 1 << " " << 0 << " " << mx - c + 1 << endl;
		}
		return;
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
