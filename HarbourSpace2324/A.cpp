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
	int x, y, n;
	cin >> x >> y >> n;
	int a[n];
	a[0] = y;
	for (int i = 1; i < n; i++) {
		a[i] = a[i-1] - i;
	}
	if (a[n-1] < x) {
		cout << "-1\n";
	} else {
		a[n-1] = x;
		for (int i = n-1; i >= 0; i--) {
			cout << a[i] << ' ';
		}
		cout << endl; 
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
