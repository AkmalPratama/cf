#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll f(ll x, ll y) {
	return (y - x) * (y - x + 1) / 2;
}

void solve() {
	ll n, k, q;
	cin >> n >> k >> q;
	ll a[n];
	vector<ll> v, w;
	ll ans = 0;
	for (ll i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] > q) {
			v.push_back(i);
		}
	}
	if (v.empty()) {
		w.push_back(n);
	} else {
		w.push_back(v[0]);
		if (v.size() > 1) {
			for (ll i = 0; i < v.size()-1; i++) {
				w.push_back(v[i+1] - v[i] - 1);
			}
		}
		w.push_back(n - 1 - v.back());
	}
	for (ll i = 0; i < w.size(); i++) {
		if (w[i] >= k) {
			ans += f(k-1, w[i]);
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

