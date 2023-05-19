#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a+n);
	for (int i = 1; i < n; i++) {
		if ((a[0] % 2) != (a[i] % 2)) {
			if (((a[i] - a[0]) % 2) != (a[0] % 2)) {
				cout << "NO\n";
				return;
			}
		}
	}
	cout << "YES\n";
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

