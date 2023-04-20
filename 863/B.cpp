#include <bits/stdc++.h>
#define ll long long
using namespace std;

int r(int n, int x, int y) {
	int lb = min(x, y);
	int ub = n - max(x, y) + 1;
	return min(lb, ub);
}

void solve() {
	int n, x1, y1, x2, y2;
	cin >> n >> x1 >> y1 >> x2 >> y2;
	int r1 = r(n, x1, y1);
	int r2 = r(n, x2, y2);
	cout << abs(r1 - r2) << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

