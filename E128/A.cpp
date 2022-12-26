#include <bits/stdc++.h>
using namespace std;

int solve(int a, int b, int c, int d) {
	if (a <= c && c <= b) {
		return c;
	} else {
		return a + c;
	}
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		int l1, r1, l2, r2;
		cin >> l1 >> r1 >> l2 >> r2;
		if (l1 < l2) {
			cout << solve(l1, r1, l2, r2) << endl;
		} else {
			cout << solve(l2, r2, l1, r1) << endl;
		}
	}
	return 0;
}

