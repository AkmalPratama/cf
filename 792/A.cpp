#include <bits/stdc++.h>
using namespace std;

void solve() {
	string s;
	cin >> s;
	if (s.length() == 2) {
		cout << s[1] << endl;
		return;
	}
	sort(s.begin(), s.end());
	cout << s[0] << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

