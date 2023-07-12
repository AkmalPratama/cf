#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n];
	for (int &x: a) {
		cin >> x;
	}
	bool isNeg = true;
	for (int i = 0; i < n; i ++) {
		if (a[i] >= 0) {
			isNeg = false;
			break;
		}
	}
	if (isNeg) {
		sort(a, a+n);
		cout << a[n-1] << endl;
		return;
	}
	ll b = 0, c = 0;
	for (int i = 0; i < n; i++) {
		if (i % 2) {
			b += max(a[i], 0);
		} else {
			c += max(a[i], 0);
		}
	}
	cout << max(b, c) << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

