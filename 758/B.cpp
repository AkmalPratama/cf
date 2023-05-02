#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, a, b;
	cin >> n >> a >> b;
	if (a + b + 2 > n || abs(a - b) > 1) {
		cout << "-1\n";
		return;
	}
	int l = 1, r = n;
	if (a < b) {
		for (int i = 0; i < a+b; i++) {
			if (i % 2) {
				cout << l << ' ';
				l++;
			} else {
				cout << r << ' ';
				r--;
			}
		}
	} else {
		for (int i = 0; i < a+b; i++) {
			if (i % 2) {
				cout << r << ' ';
				r--;
			} else {
				cout << l << ' ';
				l++;
			}
		}
	}
	while (l <= r) {
		if (a <= b) {
			cout << l << ' ';
			l++;
		} else {
			cout << r << ' ';
			r--;
		}
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
