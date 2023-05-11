#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	for (int i = 0; i < n-3; i++) {
		string t;
		cin >> t;
		if (s.back() != t.front()) {
			s += t;
		} else {
			string buf = "x";
			buf[0] = t.back();
			s += buf;
		}
	}
	cout << s;
	if (s.length() != n) {
		cout << s.back();
	}
	cout << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
