#include <bits/stdc++.h>
using namespace std;

int main () {
	int n, k1, k2;
	cin >> n >> k1 >> k2;
	int a[n], b[n], x[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
		x[i] = abs(a[i] - b[i]);
	}
	sort(x, x + n, greater<int>());
	int k = k1 + k2;
	if (n == 1) {
		if (x[0] == 0) {
			if ((k % 2) == 0) {
				cout << 0 << endl;
			} else {
				cout << 1 << endl;
			}
		} else {
			if (x[0] > k) {
				x[0] -= k;
				cout << x[0] * x[0] << endl;
			} else {
				k -= x[0];
				x[0] = 0;
				if ((k % 2) == 0) {
					cout << 0 << endl;
				} else {
					cout << 1 << endl;
				}
			}
		}
	} else {
		while (k > 0) {
			int dif = abs(x[0] - x[1]);
			if (dif == 0) {
				x[0]--;
				k--;
				sort(x, x + n, greater<int>());
			} else {
				if (dif > k) {
					x[0] -= k;
				} else {
					k -= dif;
					x[0] -= dif;
				}
			}
		}
		int e = 0;
		for (int i = 0; i < n; i++) {
			e += x[i] * x[i];
		}
		cout << e << endl;
	}
	return 0;
}
