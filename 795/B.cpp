#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n];
	int shuf[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		shuf[i] = i + 1;
	}
	if (n == 1) {
		cout << -1 << endl;
		return;
	}
	if (a[0] != a[1] || a[n-2] != a[n-1]) {
		cout << -1 << endl;
		return;
	}
	for (int i = 1; i < n-1; i++) {
		if (a[i-1] != a[i] && a[i] != a[i+1]) {
			cout << -1 << endl;
			return;
		}
	}
	for (int i = 0; i < n-1; i++) {
		if (a[i] == a[i+1]) {
			swap(shuf[i], shuf[i+1]);
		}
	}
	for (int i = 0; i < n; i++) {
		cout << shuf[i] << " ";
	}
	cout << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

