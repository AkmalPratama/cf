#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a+n);
	int ans = a[2] - a[0];
	for (int i = 0; i < n-2; i++) {
		if (ans > a[i+2] - a[i]) {
			ans = a[i+2] - a[i];
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

