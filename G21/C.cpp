#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
	ll n, m;
	cin >> n >> m;
	vector<pair<ll, ll>> a;
	for (int i = 0; i < n; i++) {
		ll x, y;
		cin >> x;
		y = x;
		while (x % m == 0) {
			x /= m;
		}
		y /= x;
		if (a.empty() || x != a.back().first) {
			a.push_back(make_pair(x, y));
		} else {
			a.back().second += y;
		}
	}
	cin >> n;
	vector<pair<ll, ll>> b;
	for (int i = 0; i < n; i++) {
		ll x, y;
		cin >> x;
		y = x;
		while (x % m == 0) {
			x /= m;
		}
		y /= x;
		if (b.empty() || x != b.back().first) {
			b.push_back(make_pair(x, y));
		} else {
			b.back().second += y;
		}
	}
	if (a == b) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
