#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	string s;
	cin >> s;
	bool b = false;
	for (int i = 0; i < s.length(); i++) {
		if (((s[i] - '0') % 2) == 0) {
			b = true;
		}
	}
	if (b) {
		if (((s[s.length()-1] - '0') % 2) == 0) {
			cout << "0\n";
			return;
		}
		if (((s[0] - '0') % 2) == 0) {
			cout << "1\n";
			return;
		}
		cout << "2\n";
	} else {
		cout << "-1\n";
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
