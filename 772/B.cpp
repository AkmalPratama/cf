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
		int ctr = 0;
		if (n >= 5) {
			for (int i = 0; i < n-4; i++) {
				if ((a[i] < a[i+1]) && (a[i+2] < a[i+1]) &&
					(a[i+2] < a[i+3]) && (a[i+4] < a[i+3])) {
					if (a[i+1] < a[i+3]) {
						a[i+2] = a[i+3];
					} else {
						a[i+2] = a[i+1];
					}
					ctr++;
				}
			}
		}
		for (int i = 0; i < n-2; i++) {
			if ((a[i] < a[i+1]) && (a[i+2] < a[i+1])) {
				a[i+2] = a[i+1];
				ctr++;
			}
		}
		cout << ctr << endl;
		cout << a[0];
		for (int i = 1; i < n; i++) {
			cout << " " << a[i];
		}
		cout << endl;
	}
	return 0;
}
