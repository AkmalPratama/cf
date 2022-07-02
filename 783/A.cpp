#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		if ((n == 1) && (m == 1)) {
			cout << 0 << endl;
		} else if ((min(n, m) == 1)) {
			if (max(n, m) == 2) {
				cout << 1 << endl;
			} else {
				cout << -1 << endl;
			}
		} else {
			int width = min(n, m);
			int step = (width - 1) * 2;
			int diff = abs(m - n);
			if (diff % 2 == 1) {
				step += 1;
				cout << (diff - 1) * 2 + step << endl;
			} else {
				cout << step + diff * 2 << endl;
			}
		}
	}
	return 0;
}

