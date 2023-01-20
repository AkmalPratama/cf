#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n, k;
	cin >> n >> k;
	ll a[n];
	for (ll i = 1; i <= n; i++) {
		cin >> a[i];
	}
	ll ans = 0;
	for (ll i = 1; i <= k; i++) {
		ll maxSeg = a[i];
		for (ll j = 1; j <= n; j++) {
			if ((i+(j-1)*k) <= n) {
				maxSeg = max(maxSeg, a[i + (j - 1) * k]);
			}
		}
		ans += maxSeg;
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

