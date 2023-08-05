#include <iostream>
#include <algorithm>
using namespace std;

void solve() {
	int n, l, r, k;
	cin >> n >> l >> r >> k;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a+n);
	int ans = 0;
	for (int i = 0; i < n; i++) {
		if (l <= a[i] && a[i] <= r && k >= a[i]) {
			k -= a[i];
			ans++;
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
