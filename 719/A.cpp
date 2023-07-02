#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	set<char> st;
	st.insert(s[0]);
	for (int i = 1; i < s.length(); i++) {
		if (s[i] != s[i-1]) {
			if (st.count(s[i])) {
				cout << "NO\n";
				return;
			} else {
				st.insert(s[i]);
			}
		}
	}
	cout << "YES\n";
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

