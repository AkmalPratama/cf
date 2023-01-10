#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n], b[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	int leastB = -1, diff;
	for (int i = 0; i < n; i++) {
		if (b[i] != 0) {
			leastB = b[i];
			diff = a[i] - b[i];
			break;
		}
	}
	if (leastB == -1) {
		cout << "YES\n";
		return;
	}
	bool ans = true;
	for (int i = 0; i < n; i++) {
		if (diff < 0) {
			ans = false;
			break;
		} else {
			if ((a[i] - b[i]) != diff) {
				if (b[i] == 0) {
					if (a[i] - b[i] > diff) {
						ans = false;
						break;
					}
				} else {
					ans = false;
					break;
				}
			}
		}
	}
	if (ans) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
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

