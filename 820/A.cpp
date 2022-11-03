#include <bits/stdc++.h>
using namespace std;

void solve() {
	long long a, b, c;
	cin >> a >> b >> c;
	long long d = abs(b - c) + c;
	if (a < d) {
		cout << 1 << endl;
	} else if (a == d) {
		cout << 3 << endl;
	} else {
		cout << 2 << endl;
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

