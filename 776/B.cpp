#include <bits/stdc++.h>
using namespace std;

int f(int a, int x) {
	return (x / a) + (x % a);
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		int l, r, a;
		int x, y;
		cin >> l >> r >> a;
		x = r - (r % a) - 1;
		y = r;
		if ((l <= x) && (x <= r)) {
			cout << max(f(a, x), f(a, y)) << endl;
		} else {
			cout << f(a, r) << endl;
		}
	}
	return 0;
}
