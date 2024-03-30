#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n, k;
	cin >> n >> k;
	vector<ll> v(n + 1, 0);
	vector<ll> pos;
	set<ll> s;
	ll h[n], x[n];
	for (int i = 0; i < n; i++) {
		cin >> h[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> x[i];
	}
	for (int i = 0; i < n; i++) {
		v[abs(x[i])] += h[i];
		s.insert(abs(x[i]));
	}
	for (int i : s) {
		pos.push_back(i);
	}
	sort(pos.begin(), pos.end());
	ll shots = 0;
	for (int i = 0; i < pos.size(); i++) {
		if (v[pos[i]] > (pos[i] * k) - shots) {
			cout << "NO\n";
			return;
		} else {
			shots += v[pos[i]];
		}
	}
	cout << "YES\n";
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

