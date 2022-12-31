#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, x;
	cin >> n >> x;
	int a[2 * n];
	for (int i = 0; i < 2 * n; i++) {
		cin >> a[i];
	}
	sort(a, a + (2*n));
	int f[n], b[n];
	for (int i = 0; i < 2*n; i++) {
		if (i < n) {
			f[i] = a[i];
		} else {
			b[i-n] = a[i];
		}
	}
	bool check = false;
	for (int i = 0; i < n; i++) {
		if (f[i] + x > b[i]) {
			check = true;
			break;
		}
	}
	if (check) {
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

