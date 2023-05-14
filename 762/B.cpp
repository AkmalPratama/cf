#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	cout << floor(sqrt(n)) + floor(cbrt(n)) - floor(sqrt(cbrt(n))) << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

