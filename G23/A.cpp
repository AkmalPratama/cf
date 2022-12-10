#include <iostream>
#include <algorithm>
using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;
	int cnt0 = 0;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (x == 0) {
			cnt0++;
		}
	}
	if (cnt0 == n) {
		cout << "NO\n";
	} else {
		cout << "YES\n";
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

