#include <bits/stdc++.h>
using namespace std;

void solve() {
	string s;
	cin >> s;
	string ans = "";
	for (int i = 0; i < s.length(); i++) {
		ans = s[i] + ans + s[i];
	}
	cout << ans << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

