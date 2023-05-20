#include <bits/stdc++.h>
using namespace std;

string rep(string s, int n, char c) {
	string out = s;
	int cnt = 0;
	for (int i = 0; i < out.length(); i++) {
		if (cnt < n && out[i] == c) {
			out[i] = ' ';
			cnt++;
		}
		if (cnt == n) {
			break;
		}
	}
	return out;
}

void solve() {
	int n;
	cin >> n;
	int a[2*n];
	for (int i = 0; i < 2*n; i++) {
		cin >> a[i];
	}
	int op;
	if (n % 2) {
		op = 2 * n;
	} else {
		op = 4;
	}
	for (int i = 0; i < op; i++) {
		if (is_sorted(a, a+2*n)) {
			cout << min(i, op - i) << endl;
			return;
		}
		if (i % 2) {
			rotate(a, a+n, a+2*n);
		} else {
			for (int i = 0; i < 2*n-1; i+=2) {
				swap(a[i], a[i+1]);
			}
		}
	}
	cout << "-1\n";
}

int main () {
	solve();
	return 0;
}
