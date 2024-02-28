#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n];
	int sum = 0;
	int b = false;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
		if (a[i] % 3 == 1) {
			b = true;
		}
	}
	if ((sum % 3) == 0) {
		cout << "0\n";
		return;
	}
	if ((sum % 3) == 2) {
		cout << "1\n";
		return;
	}
	if (b) {
		cout << "1\n";
	} else {
		cout << "2\n";
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

