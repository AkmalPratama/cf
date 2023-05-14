#include <bits/stdc++.h>
using namespace std;

void solve() {
	string s;
	cin >> s;
	if (s.length() % 2) {
		cout << "NO\n";
		return;
	}
	if (s.substr(0, s.length()/2) == s.substr(s.length()/2, s.length()-1)) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
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
