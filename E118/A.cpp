#include <bits/stdc++.h>
using namespace std;

void f(int a, int b, int n) {
	if (to_string(a).length() + n > to_string(b).length()) {
		cout << ">\n";
	} else if (to_string(a).length() + n == to_string(b).length()) {
		if (a * pow(10,n) == b * pow(10,0)) {
			cout << "=\n";
		} else if (a * pow(10,n) < b * pow(10,0)) {
			cout << "<\n";
		} else {
			cout << ">\n";
		}
	} else {
		cout << "<\n";
	}
}

void solve() {
	int x1, p1, x2, p2;
	cin >> x1 >> p1;
	cin >> x2 >> p2;
	int diff = abs(p1 - p2);
	if (p1 == p2) {
		if (x1 < x2) {
			cout << "<\n";
		} else if (x1 == x2) {
			cout << "=\n";
		} else {
			cout << ">\n";
		}
	} else if (p1 < p2) {
		if (to_string(x2).length() + diff > to_string(x1).length()) {
			cout << "<\n";
		} else if (to_string(x2).length() + diff == to_string(x1).length()) {
			if (x2 * pow(10,diff) == x1 * pow(10,0)) {
				cout << "=\n";
			} else if (x2 * pow(10,diff) < x1 * pow(10,0)) {
				cout << ">\n";
			} else {
				cout << "<\n";
			}
		} else {
			cout << ">\n";
		}
	} else {
		if (to_string(x1).length() + diff > to_string(x2).length()) {
			cout << ">\n";
		} else if (to_string(x1).length() + diff == to_string(x2).length()) {
			if (x1 * pow(10,diff) == x2 * pow(10,0)) {
				cout << "=\n";
			} else if (x1 * pow(10,diff) < x2 * pow(10,0)) {
				cout << "<\n";
			} else {
				cout << ">\n";
			}
		} else {
			cout << "<\n";
		}
	}
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
