#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int ax, ay, bx, by, cx, cy, ans = 1;
	cin >> ax >> ay;
	cin >> bx >> by;
	cin >> cx >> cy;
	int x[3];
	x[0] = ax;
	x[1] = bx;
	x[2] = cx;
	sort(x, x+3);
	int y[3];
	y[0] = ay;
	y[1] = by;
	y[2] = cy;
	sort(y, y+3);
	ans += abs(x[1] - ax);
	ans += abs(y[1] - ay);
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

