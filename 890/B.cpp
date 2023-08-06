#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	ll a[n+1];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	ll cnt1 = 0, sum = 0;
	for (int i = 1; i <= n; i++) {
		if (a[i] == 1) {
			cnt1++;
		} else {
			sum += a[i] - 1;
		}
	}
	if (n == 1) {
		cout << "NO\n";
		return;
	}
	if (cnt1 == 0) {
		cout << "YES\n";
		return;
	}
	if (sum < cnt1) {
		cout << "NO\n";
	} else {
		cout << "YES\n";
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

