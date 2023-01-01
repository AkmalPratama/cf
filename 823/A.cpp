#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, c;
	cin >> n >> c;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a+n);
	int ans = 0;
	int target = a[0];
	int fiA = 1;
	for (int i = 1; i < n; i++) {
		if (a[i] == target) {
			fiA++;
		} else {
			ans += min(fiA, c);
			target = a[i];
			fiA = 1;
		}
	}
	if (a[n-1] == a[n-2]) {
		ans += min(fiA, c);
	} else {
		ans += min(1, c);
	}
	cout << ans << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

