#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	cout << ((n % 2 == 1) ? ((n + 1) / 2) : (n / 2)) << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

