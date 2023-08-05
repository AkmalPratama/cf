#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n;
	cin >> n;
	vector<ll> w;
	vector<pair<int,int>> v;
	for (ll i = 1; i <= n; i++) {
		ll x;
		cin >> x;
		w.push_back(x);
		v.push_back(make_pair(x, i));
	}
	sort(v.rbegin(), v.rend());
	deque<ll> l;
	l.push_back(0);
	for (ll i = 0; i < n; i++) {
		if (i % 2) {
			l.push_back(v[i].second);
		} else {
			l.push_front(v[i].second);
		}
	}
	ll a[n+1];
	for (ll i = 0; i <= n; i++) {
		a[l[i]] = i;
	}
	ll ans = 0;
	for (ll i = 1; i <= n; i++) {
		ans += 2 * abs(a[i] - a[0]) * w[i-1];
	}
	cout << ans << endl;
	for (ll i = 0; i <= n; i++) {
		cout << a[i] << ' ';
	}
	cout << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
