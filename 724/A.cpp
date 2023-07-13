#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n];
	bool isNeg = false;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] < 0) {
			isNeg = true;
		}
	}
	if (isNeg) {
		cout << "NO\n";
		return;
	}
	cout << "YES\n";
	cout << "101\n";
	for (int i = 0; i <= 100; i++) {
		cout << i << ' ';
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

