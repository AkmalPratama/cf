#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n], b[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			b[i] = i+1;
		}
		if (n == 1) {
			cout << -1 << endl;
			continue;
		}
		for (int i = 0; i < n-1; i++) {
			if (a[i] == b[i]) {
				swap(b[i], b[i+1]);
			}
		}
		for (int i = n-1; i >= 0; i--) {
			if (a[i] == b[i]) {
				swap(b[i], b[i-1]);
			}
		}
		for (int i = 0; i < n; i++) {
			if (i == 0)
				cout << b[i];
			else
				cout << " " << b[i];
		}
		cout << endl;
	}
	return 0;
}

