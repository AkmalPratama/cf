#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n, k, x;
	cin >> n >> k >> x;
	if (k == x && k == 1) {
		cout << "NO\n";
		return;
	}
	if (k == 2 && x == 1 && (n % 2)) {
		cout << "NO\n";
		return;
	}
	cout << "YES\n";
	if (x == 1) {
		if (n % 2) {
			cout << n / 2 << endl;
			for (int i = 0; i < (n / 2) - 1; i++) {
				cout << "2 ";
			}
			cout << "3\n";
			return;
		} else {
			cout << n / 2 << endl;
			for (int i = 0; i < n / 2; i++) {
				cout << "2 ";
			}
			cout << endl;
			return;
		}
	}
	cout << n << endl;
	for (int i = 0; i < n; i++) {
		cout << "1 ";
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

