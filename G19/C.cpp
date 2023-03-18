#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	ll a[n];
	for (ll &x: a) {
		cin >> x;
	}
	if (n == 3) {
		if (a[1] % 2) {
			cout << -1 << endl;
		} else {
			cout << a[1] / 2 << endl;
		}
		return;
	}
	bool b = true;
	ll ans = 0;
	for (int i = 1; i < n-1; i++) {
		if (a[i] != 1) {
			b = false;
		}
		ans += (a[i] + 1) / 2;
	}
	if (b) {
		cout << "-1\n";
		return;
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
