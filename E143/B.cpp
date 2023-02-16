#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;
	int a[n], b[n];
	bool l, r;
	l = false;
	r = false;
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> b[i];
		if (a[i] == k) {
			l = true;
		}
		if (b[i] == k) {
			r = true;
		}
	}
	if (l && r) {
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

