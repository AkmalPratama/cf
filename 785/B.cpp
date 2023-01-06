#include <bits/stdc++.h>
using namespace std;

void solve() {
	string s;
	cin >> s;
	set<char> dic;
	int j = 0;
	for (int i = 0; i < s.length(); i++) {
		if (dic.count(s[i]) != 0) {
			j = i;
			break;
		} else {
			dic.insert(s[i]);
		}
	}
	bool b = true;
	for (int i = j; i < s.length() && b; i++) {
		if (s[i] != s[i-j]) {
			b = false;
		}
	}
	if (b) {
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

