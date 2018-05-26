#include <bits/stdc++.h>

using namespace std;

int main () {
	int n, pos, l, r;
	int sec = 0;
	cin >> n >> pos >> l >> r;
	int dist_l = abs(l - pos);
	int dist_r = abs(r - pos);
	if (dist_l < dist_r) {
		if (pos < l) {
			sec++;
			if (r != n)
				sec += r - l + 1;
		} else {
			if (l == 1) {
				if (r != n)
					sec += r - l + 1;
			} else {
				sec += pos - l;
				sec++;
				if (r != n)
					sec += r - l + 1;
			}
		}
	} else {
		if (pos > r) {
			sec++;
			if (l != 1)
				sec += r - l + 1;
		} else {
			if (r == n) {
				if (l != 1)
					sec += r - l + 1;
			} else {
				sec += r - pos;
				sec++;
				if (l != 1)
					sec += r - l + 1;
			}
		}
	}
	cout << sec << endl;
	return 0;
}
