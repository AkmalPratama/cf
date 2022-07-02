#include <bits/stdc++.h>

using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		int L, v, l, r;
		cin >> L >> v >> l >> r;
		int rVal = r/v;
		int lVal = (l % v) == 0 ? ((l/v) - 1) : (l/v);
		cout << (L/v) - (rVal - lVal) << endl;
	}
	return 0;
}
