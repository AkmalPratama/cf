#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;
	if (k%2 == 1) {
		cout << "YES\n";
		for (int i = 1; i <= n/2; i++) {
			cout << 2*i-1 << " " << 2*i << endl;
		}
	} else {
		if (k == 0 || k%4 == 0) {
			cout << "NO\n";
		} else {
			cout << "YES\n";
			for (int i = 1; i <= n/2; i++) {
				if (i%2 == 1) {
					cout << 2*i << " " << 2*i-1 << endl;
				} else {
					cout << 2*i-1 << " " << 2*i << endl;
				}
			}
		}
	}
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

