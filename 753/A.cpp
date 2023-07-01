#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	string s, t;
	cin >> s >> t;
	int ans = 0;
	map<char, int> m;
	if (t.length() == 1) {
		cout << "0\n";
		return;
	}
	for (int i = 0; i < s.length(); i++) {
		m[s[i]] = i;
	}
	for (int i = 0; i < t.length()-1; i++) {
		ans += abs(m[t[i+1]] - m[t[i]]);
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
