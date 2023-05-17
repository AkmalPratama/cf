#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n, m, x;
	cin >> n >> m;
	x = abs(n - m);
	if (n > m) {
		swap(n, m);
	}
	ll ans = 0;
	if (x / 2 <= n) {
		ans += x / 2;
		n -= x / 2;
		m -= 3 * (x / 2);
	}
	if (3 * n <= m) {
		ans += n;
		cout << ans << endl;
		return;
	}
	ans += min(n, m) / 2;
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
