#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n, k;
	cin >> n >> k;
	ll ans = 0, c = 1;
	while (c < k) {
		c *= 2;
		ans++;
	}
	if (c < n) {
		ans += (n - c + (k - 1)) / k;
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
