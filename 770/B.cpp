#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		long long n, x, y;
		cin >> n >> x >> y;
		long long a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for (int i = 0; i < n; i++) {
			x ^= a[i];
		}
		if ((x%2) == (y%2)) {
			cout << "Alice" << endl;
		} else {
			cout << "Bob" << endl;
		}
		
	}
	return 0;
}
