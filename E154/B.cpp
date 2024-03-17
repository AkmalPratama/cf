#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	string s, t;
	cin >> s;
	cin >> t;
	for (int i = 0; i < s.length()-1; i++) {
		if (s[i] == '0' && s[i+1] == '1' && t[i] == '0' && t[i+1] == '1') {
			cout << "YES\n";
			return;
		}
	}
	cout << "NO\n";
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

