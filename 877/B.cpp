#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool isPal(string s) {
	for (int i = 0; i < s.length() / 2; i++) {
		if (s[i] != s[s.length()-1-i]) {
			return false;
		}
	}
	return true;
}

void solve() {
	int n;
	cin >> n;
	int a[n+1];
	int i1, i2, in;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		if (a[i] == 1) {
			i1 = i;
		}
		if (a[i] == 2) {
			i2 = i;
		}
		if (a[i] == n) {
			in = i;
		}
	}
	if (in > i1 && in > i2) {
		cout << in << ' ' << max(i1, i2) << endl;
		return;
	}
	if (in < i1 && in < i2) {
		cout << in << ' ' << min(i1, i2) << endl;
		return;
	}
	cout << in << ' ' << in << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

