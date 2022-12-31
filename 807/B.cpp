#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n, sum = 0;
	cin >> n;
	ll a[n];
	bool b = false;
	for (ll i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] > 0) {
			b = true;
		}
		if (a[i] == 0 && b && i != n-1) {
			sum++;
		}
		sum += a[i];
	}
	cout << sum - a[n-1] << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

