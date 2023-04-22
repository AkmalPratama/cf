#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	string s;
	cin >> s;
	int ans = 0;
	if (s[0] == '_') {
		ans++;
	}
	if (s[s.length()-1] == '_') {
		ans++;
	}
	for (int i = 0; i < s.length()-1; i++) {
		if (s[i] == s[i+1] && s[i] == '_') {
			ans++;
		}
	}
	if (s[0] == '^' && s.length() == 1) {
		cout << 1 << endl;
		return;
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

