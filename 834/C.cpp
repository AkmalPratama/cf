#include <bits/stdc++.h>
using namespace std;

int solve() {
	int l, r, x, a, b;
	cin >> l >> r >> x;
	cin >> a >> b;
	if (a == b)
		return 0;
	if (abs(a - b) >= x)
		return 1;
	if (r - max(a, b) >= x || min(a, b) - l >= x)
		return 2;
	if (r - b >= x && a - l >= x || r - a >= x && b - l >= x)
		return 3;
	return -1;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		cout << solve() << endl;
	}
	return 0;
}

