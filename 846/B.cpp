#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n;
	cin >> n;
	ll a[n];
	ll sum = 0;
	for (ll i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
		a[i] = sum;
	}
	ll ans = 0;
	for (ll i = 0; i < n-1; i++) {
		ans = max(ans, __gcd(a[i], sum - a[i]));
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

