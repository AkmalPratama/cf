#include <bits/stdc++.h>
using namespace std;

void solve() {
	int a[3], m;
	cin >> a[0] >> a[1] >> a[2] >> m;
	sort(a, a+3);
	if (a[2] - a[0] - a[1] - 1 <= m && m <= a[0] + a[1] + a[2] - 3) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
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
