#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	if (n % 2) {
		for (int i = 2; i < (n - 1) / 2; i++) {
			if (__gcd(i, n - i - 1) == 1) {
				cout << i << ' ' << n - i - 1 << ' ' << 1 << endl;
				break;
			}
		}
	} else {
		cout << 2 << ' ' << n - 3 << ' ' << 1 << endl;
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
