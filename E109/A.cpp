#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	int x = __gcd(n, 100);
	cout << 100 / x << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
