#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		int a, b, c, x, y;
		cin >> a >> b >> c >> x >> y;
		int needX = a - x;
		int needY = b - y;
		if (needX < 0) {
			c += needX;
		}
		if (needY < 0) {
			c += needY;
		}
		if (c >= 0) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
	return 0;
}

