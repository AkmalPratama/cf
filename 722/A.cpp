#include <bits/stdc++.h>
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
	int a[n];
	for (int &x: a) {
		cin >> x;
	}
	sort(a, a+n);
	int sna = 1;
	for (int i = 1; i < n; i++) {
		if (a[i] == a[0]) {
			sna++;
		}
	}
	cout << n - sna << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
