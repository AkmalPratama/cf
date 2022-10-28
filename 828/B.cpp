#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n, q;
	cin >> n >> q;
	ll a[n];
	ll sum = 0;
	ll odd = 0;
	ll eve = 0;
	for (ll i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
		if (a[i] % 2 == 0) {
			eve++;
		} else {
			odd++;
		}
	}
	for (ll i = 0; i < q; i++) {
		ll type, x;
		cin >> type >> x;
		if (type % 2 == 0) {
			sum += eve * x;
			if (x % 2 == 1) {
				odd = n;
				eve = 0;
			}
		} else {
			sum += odd * x;
			if (x % 2 == 1) {
				eve = n;
				odd = 0;
			}
		}
		cout << sum << endl;
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

