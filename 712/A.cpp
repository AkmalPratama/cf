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
	string s;
	cin >> s;
	if (isPal("a" + s) && isPal(s + "a")) {
		cout << "NO\n";
	} else {
		if (isPal("a" + s)) {
			cout << "YES\n";
			cout << s << 'a' << endl;
		} else {
			cout << "YES\n";
			cout << 'a' << s << endl;
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
