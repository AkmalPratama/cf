#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n];
	for (int &x: a) {
		cin >> x;
	}
	if (a[0] == n && a[n-1] == 1) {
		cout << "3\n";
		return;
	}
	if (a[0] != 1 && a[n-1] != n) {
		cout << "2\n";
		return;
	}
	for (int i = 0; i < n; i++) {
		if (a[i] != i + 1) {
			cout << "1\n";
			return;
		}
	}
	cout << "0\n";
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
