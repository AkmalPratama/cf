#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n+1];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	int ans = 0;
	for (int i = 1; i < n; i++) {
		if (a[i] > a[i+1]) {
			ans = max(ans, a[i]);
		}
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

