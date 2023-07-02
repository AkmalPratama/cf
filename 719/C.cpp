#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	if (n == 2) {
		cout << "-1\n";
		return;
	}
	int a[(n * n) + 1];
	for (int i = 1; i <= n * n; i++) {
		if (n % 2) {
			a[(2 * i - 1) % (n * n)] = i;
		} else {
			if (i > ((n * n) / 2)) {
				a[2 * (i - ((n * n) / 2))] = i;
			} else {
				a[(2 * i - 1) % (n * n)] = i;
			}
		}
	}
	if (n % 2) {
		a[n * n] = a[0];
	}
	for (int i = 1; i <= n*n; i++) {
		cout << a[i] << ' ';
		if (i % n == 0) {
			cout << endl;
		}
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
/*
1x2x
3x4x
5x6x
7x8x
*/
