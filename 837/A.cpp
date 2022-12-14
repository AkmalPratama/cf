#include <bits/stdc++.h>
using namespace std;

void solve() {
	long long n;
	cin >> n;
	long long a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	long long mi = a[0], ma = a[0];
	for (int i = 1; i < n; i++) {
		if (a[i] < mi) {
			mi = a[i];
		}
		if (a[i] > ma) {
			ma = a[i];
		}
	}
	if (mi == ma) {
		long long ans = n * (n-1);
		cout << ans << endl;
	} else {
		long long c_mi = 0, c_ma = 0;
		for (int i = 0; i < n; i++) {
			if (a[i] == mi) {
				c_mi++;
			}
			if (a[i] == ma) {
				c_ma++;
			}
		}
		long long ans = 2 * c_mi * c_ma;
		cout << ans << endl;
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

