#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool isCorner(int n, int m, int x, int y) {
	if (x == 1 && y == 1) {
		return true;
	}
	if (x == n && y == m) {
		return true;
	}
	if (x == 1 && y == m) {
		return true;
	}
	if (x == n && y == 1) {
		return true;
	}
	return false;
}

bool isEdge(int n, int m, int x, int y) {
	if (x == 1 || y == 1) {
		return true;
	}
	if (x == n || y == m) {
		return true;
	}
	return false;
}

void solve() {
	int n, m;
	cin >> n >> m;
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	if (isCorner(n, m, x1, y1) || isCorner(n, m, x2, y2)) {
		cout << "2\n";
		return;
	}
	if (isEdge(n, m, x1, y1) || isEdge(n, m, x2, y2)) {
		cout << "3\n";
		return;
	}
	cout << "4\n";
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

