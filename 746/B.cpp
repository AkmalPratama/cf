#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n, x;
	cin >> n >> x;
	int a[n], b[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		b[i] = a[i];
	}
	if (n >= 2 * x) {
		cout << "YES\n";
		return;
	}
	sort(b, b+n);
	bool same = true;
	for (int i = 0; i < n; i++) {
		if (a[i] != b[i]) {
			same = false;
			break;
		}
	}
	if (same) {
		cout << "YES\n";
		return;
	}
	same = true;
	for (int i = n-x; i <= x-1; i++) {
		if (a[i] != b[i]) {
			same = false;
			break;
		}
	}
	if (same) {
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
