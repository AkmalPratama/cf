#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	int ma, mi;
	cin >> ma;
	mi = ma;
	for (int i = 1; i < n; i++) {
		int x;
		cin >> x;
		ma |= x;
		mi &= x;
	}
	cout << ma - mi << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

