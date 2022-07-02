#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n;
		int maxA = 0;
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			if (x > maxA) {
				maxA = x;
			}
		}
		cin >> m;
		int maxB = 0;
		for (int i = 0; i < m; i++) {
			int x;
			cin >> x;
			if (x > maxB) {
				maxB = x;
			}
		}
		if (maxA >= maxB) {
			cout << "Alice\n";
		} else {
			cout << "Bob\n";
		}
		if (maxB >= maxA) {
			cout << "Bob\n";
		} else {
			cout << "Alice\n";
		}
	}
	return 0;
}

