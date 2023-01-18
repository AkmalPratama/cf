#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	if (n % 2 == 1) {
		cout << -1 << endl;
		return;
	}
	int x = n / 2;
	if (x % 2 == 1) {
		cout << 1 << " " << n/2-1 << " " << n/2-1 << endl;
	} else {
		cout << 1 << " " << n/2+1 << " " << n/2+1 << endl;
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

