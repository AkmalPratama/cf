#include <bits/stdc++.h>
using namespace std;

bool check(int a, int b, int c, int d) {
	return (a < b) && (c < d) && (a < c) && (b < d);
}

void solve() {
	int a, b, c, d;
	cin >> a >> b;
	cin >> c >> d;
	if (check(a, b, c, d) || check(c, a, d, b) || check(d, c, b, a) || check(b, d, a, c)) {
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
