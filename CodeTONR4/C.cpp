#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n, c, d;
	cin >> n >> c >> d;
	ll a[n], cost1 = 0, cost2 = LLONG_MAX;
	set<ll> st;
	for (ll i = 0; i < n; i++) {
		ll x;
		cin >> x;
		if (st.count(x)) {
			cost1 += c;
		} else {
			st.insert(x);
		}
	}
	vector<ll> v;
	for (ll x: st) {
		v.push_back(x);
	}
	ll vs = v.size();
	for (ll i = 0; i < v.size(); i++) {
		cost2 = min(cost2, (v[i] - (i + 1)) * d + 1LL * (vs - (i + 1)) * c);
	}
	cost2 = min(cost2, vs * c + d);
	cout << cost1 + cost2 << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

