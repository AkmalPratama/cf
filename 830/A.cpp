#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n], gcd;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	gcd = a[0];
	for (int i = 1; i < n; i++) {
		gcd = __gcd(gcd, a[i]);
	}
	if (gcd == 1) {
		cout << 0 << endl;
		return;
	}
	if (__gcd(gcd, n) == 1) {
		cout << 1 << endl;
		return;
	}
	if (__gcd(gcd, n-1) == 1) {
		cout << 2 << endl;
		return;
	}
	cout << 3 << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

