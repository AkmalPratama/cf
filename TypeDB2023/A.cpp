#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	if (n % 2)
		cout << -1 << endl;
	else
		cout << 1 << " " << n / 2 << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
