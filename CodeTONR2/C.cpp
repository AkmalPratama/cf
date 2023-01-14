#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n, m;
	cin >> n >> m;
	ll a[m];
	vector<ll> v;
	for (ll i = 0; i < m; i++) {
		cin >> a[i];
	}
	sort(a, a+m);
	for (ll i = 1; i < m; i++) {
		v.push_back(a[i] - a[i-1] - 1);
	}
	v.push_back(n - a[m-1] + a[0] - 1);
	sort(v.begin(), v.end(), greater<ll>());
	ll safe = 0, buff = 0;
	for (ll i = 0; i < v.size(); i++) {
		if (v[i] - buff * 2 > 0) {
			ll guard = 1;
			safe += max(guard, v[i] - buff * 2 - 1);
		}
		buff += 2;
	}
	cout << n - safe << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
