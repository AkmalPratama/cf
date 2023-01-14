#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, x;
	cin >> n >> x;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int lb = a[0] - x;
	int ub = a[0] + x;
	int ans = 0;
	for (int i = 1; i < n; i++) {
		lb = max(lb, a[i] - x);
		ub = min(ub, a[i] + x);
		if (ub < lb) {
			ans++;
			ub = a[i] + x;
			lb = a[i] - x;
		}
	}
	cout << ans << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
