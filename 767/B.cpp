#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		int l, r, k;
		cin >> l >> r >> k;
		if (l == r) {
			if (l == 1) {
				cout << "NO" << endl;
			} else {
				cout << "YES" << endl;
			}
		} else {
			int cntOdd = 0;
			int n = r - l + 1;
			if (n % 2 == 0) {
				cntOdd = n / 2;
			} else {
				if (l % 2 == 0) {
					cntOdd = (n - 1) / 2;
				} else {
					cntOdd = (n + 1) / 2;
				}
			}
			if (cntOdd > k) {
				cout << "NO" << endl;
			} else {
				cout << "YES" << endl;
			}
		}
	}
	return 0;
}
