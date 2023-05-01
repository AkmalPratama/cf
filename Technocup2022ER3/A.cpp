#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n];
	for (int &x: a) {
		cin >> x;
	}
	int ans = 1;
	for (int i = 0; i < n; i++) {
		if (a[i] == 1) {
			ans++;
		}
		if (i > 0 && a[i] == 0 && a[i-1] == 0) {
			cout << "-1\n";
			return;
		}
		if (i > 0 && a[i] == 1 && a[i-1] == 1) {
			ans += 4;
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
