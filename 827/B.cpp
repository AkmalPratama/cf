#include <bits/stdc++.h>
using namespace std;

string solve() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a+n);
	for (int i = 0; i < n-1; i++) {
		if (a[i] == a[i+1]) {
			return "NO\n";
		}
	}
	return "YES\n";
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		cout << solve();
	}
	return 0;
}

