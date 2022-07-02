#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		int cntNeg = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			if (a[i] < 0) {
				cntNeg++;
			}
		}
		for (int i = 0; i < n; i++) {
			if (i < cntNeg) {
				if (a[i] > 0) {
					a[i] *= -1;
				}
			} else {
				if (a[i] < 0) {
					a[i] *= -1;
				}
			}
		}
		bool b = false;
		for (int i = 0; i < n-1; i++) {
			if (a[i] > a[i+1]) {
				b = true;
			}
		}
		if (b) {
			cout << "NO\n";
		} else {
			cout << "YES\n";
		}
	}
	return 0;
}

