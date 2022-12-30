#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	int odd = 0, eve = 0;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (x % 2 == 0) {
			odd++;
		} else {
			eve++;
		}
	}
	cout << min(odd, eve) << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

