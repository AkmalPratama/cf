#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		long long n, m;
		cin >> n >> m;
		long long sizeC = 0;
		long long a[n];
		for (long long i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a, a+n);
		for (long long i = n-1; i >= 0; i--) {
			if (i > 0) {
				if (a[i-1] < a[i]) {
					sizeC += a[i] - a[i-1];
				}
			}
			sizeC++;
			sizeC += a[i];
			if (i == (n-1)) {
				if (a[n-1] < a[0]) {
					sizeC += a[0] - a[n-1];
				}
			}
			if (sizeC > m) {
				break;
			}
		}
		if (sizeC > m) {
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl;
		}
	}
	return 0;
}

