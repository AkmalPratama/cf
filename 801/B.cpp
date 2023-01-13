#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	if (n % 2 == 1) {
		cout << "Mike\n";
		return;
	}
	int minA = a[0];
	int iA = 0;
	int minB = a[1];
	int iB = 1;
	for (int i = 2; i < n; i++) {
		if (i % 2 == 0) {
			if (minA > a[i]) {
				minA = a[i];
				iA = i;
			}
		} else {
			if (minB > a[i]) {
				minB = a[i];
				iB = i;
			}
		}
	}
	if (minA == minB) {
		if (iA < iB) {
			cout << "Joe\n";
		} else {
			cout << "Mike\n";
		}
		return;
	}
	if (minA < minB) {
		cout << "Joe\n";
	} else {
		cout << "Mike\n";
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

