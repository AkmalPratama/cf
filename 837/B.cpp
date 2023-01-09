#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n, m;
	cin >> n >> m;
	vector<ll> v(n+1, n+1);
	for (int i = 0; i < m; i++) {
		ll x, y;
		cin >> x >> y;
		if (x > y) {
			swap(x, y);
		}
		v[x] = min(v[x], y);
	}
	ll ans = 0;
	ll c = n;
	for (int i = n-1; i >= 1; i--) {
		v[i] = min(v[i], v[i+1]);
	}
	for (ll i = 1; i <= n; i++) {
		ans += v[i] - i;
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

