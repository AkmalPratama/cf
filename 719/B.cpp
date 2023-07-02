#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	string s = to_string(n);
	int dig = s.length();
	ans += 9 * (dig - 1);
	string buf = "";
	for (int i = 0; i < dig; i++) {
		buf += s[0];
	}
	if (s < buf) {
		ans += (s[0] - '0') - 1;
	} else {
		ans += (s[0] - '0');
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

