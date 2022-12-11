#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	ll x[n], y[n];
	ll h = 0, sum = 0;
	for (int i = 0; i < n; i++) {
		ll a, b;
		cin >> a >> b;
		if (a < b) {
			x[i] = a;
			y[i] = b;
		} else {
			x[i] = b;
			y[i] = a;
		}
		h = h < y[i] ? y[i] : h;
		sum += x[i];
	}
	cout << 2 * (sum + h) << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

