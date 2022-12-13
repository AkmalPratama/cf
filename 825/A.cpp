#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, diff = 0;
	cin >> n;
	int a[n], b[n];
	int cntA = 0, cntB = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	for (int i = 0; i < n; i++) {
		if (a[i] != b[i]) {
			diff++;
			if (a[i] == 1) {
				cntA ++;
			} else {
				cntB ++;
			}
		}
	}
	if (diff == 0) {
		cout << 0 << endl;
		return;
	}
	if (cntA == cntB) {
		cout << 1 << endl;
		return;
	}
	if (cntA == 0 || cntB == 0) {
		cout << diff << endl;
		return;
	}
	cout << abs(cntA - cntB) + 1 << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

