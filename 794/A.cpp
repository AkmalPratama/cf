#include <bits/stdc++.h>
using namespace std;


int main () {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		float a[n];
		float b[n];
		float sum = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			sum += a[i];
		}
		bool c = false;
		for (int i = 0; i < n; i++) {
			b[i] = sum - a[i];
			b[i] /= n - 1;
			if (a[i] == b[i]) {
				c = true;
				break;
			}
		}
		if (c) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
		
	}
	return 0;
}

