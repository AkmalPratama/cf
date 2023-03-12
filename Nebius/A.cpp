#include <bits/stdc++.h>
using namespace std;

void solve() {
	int a, b;
	cin >> a >> b;
	a = abs(a);
	b = abs(b);
	if (a < b) {
		swap(a, b);
	}
	if (a == b) {
		cout << a + b << endl;
		return;
	}
	int ans = 2 * b + 1;
	ans += 2 * (a - (b + 1));
	cout << ans << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

