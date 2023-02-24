#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll p(ll x) {
	ll z = 1;
	for (ll i = 1; i <= x; i++) {
		z = z * 2;
	}
	return z;
}

void solve() {
	int n;
	cin >> n;
	int a[n];
	ll cnt0 = 0, cnt1 = 0;
	for (int &x: a) {
		cin >> x;
		if (x == 0) {
			cnt0++;
		}
		if (x == 1) {
			cnt1++;
		}
	}
	cout << p(cnt0) * cnt1 << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
