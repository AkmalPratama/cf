#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<ll> v;
	for (ll i = 0; i < n; i++) {
		ll x;
		cin >> x;
		if (x == 0) {
			v.push_back(i);
		}
	}
	if (v.empty()) {
		cout << 1 << endl;
		return;
	}
	ll ans = v[0] > 0;
	for (int i = 0; i < v.size()-1; i++) {
		if (v[i+1] - v[i] > 1) {
			ans++;
		}
	}
	ans += v.back() != (n - 1);
	cout << min(ans, 2ll) << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
