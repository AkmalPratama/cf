#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		if (n == 1) {
			if (a[0] == 1) {
				cout << "YES\n";
			} else {
				cout << "NO\n";
			}
		} else {
			sort(a, a+n);
			if (a[n-1] - a[n-2] < 2) {
				cout << "YES\n";
			} else {
				cout << "NO\n";
			}
		}
	}
	return 0;
}

