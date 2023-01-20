#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n, x, y;
	string a, b;
	cin >> n >> x >> y;
	cin >> a >> b;
	ll c[n], sum = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] != b[i]) {
			c[i] = 1;
		} else {
			c[i] = 0;
		}
		sum += c[i];
	}
	if (sum % 2 == 1) {
		cout << "-1\n";
		return;
	}
	if (sum == 2) {
		ll l, r;
		l = -1;
		r = -1;
		for (int i = 0; i < n; i++) {
			if (c[i] == 1) {
				l = i;
				break;
			}
		}
		for (int i = 0; i < n; i++) {
			if (c[i] == 1 && i != l) {
				r = i;
				break;
			}
		}
		if (r-l == 1) {
			cout << min(x, 2*y) << endl;
		} else {
			cout << y << endl;
		}
		return;
	}
	cout << sum / 2 * y << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

