#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, m;
	cin >> n >> m;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		ans += x;
	}
	if (m >= ans) {
		cout << 0 << endl;
	} else {
		cout << ans - m << endl;
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

