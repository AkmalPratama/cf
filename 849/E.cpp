#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n;
	cin >> n;
	ll a[n];
	ll cnt = 0, sum = 0;
	ll mi = LLONG_MAX;
	for (ll &x: a) {
		cin >> x;
		if (x < 1) {
			cnt++;
		}
		sum += abs(x);
		mi = min(mi, abs(x));
	}
	if (cnt % 2) {
		cout << sum - 2 * mi << endl;
	} else {
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

