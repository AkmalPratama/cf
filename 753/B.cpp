#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll x, t;
	cin >> x >> t;
	if (x % 2) {
		if (t % 4 == 1) {
			cout << (x + 1) + 4 * (t / 4) << endl;
		} else if (t % 4 == 2) {
			cout << x - 1 << endl;
		} else if (t % 4 == 3) {
			cout << (x - 4) - 4 * (t / 4) << endl;
		} else {
			cout << x << endl;
		}
	} else {
		if (t % 4 == 1) {
			cout << (x - 1) - 4 * (t / 4) << endl;
		} else if (t % 4 == 2) {
			cout << x + 1 << endl;
		} else if (t % 4 == 3) {
			cout << (x + 4) + 4 * (t / 4) << endl;
		} else {
			cout << x << endl;
		}
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

