#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	string s;
	cin >> s;
	set<char> st;
	for (int i = 0; i < s.length() / 2; i++) {
		st.insert(s[i]);
	}
	if (st.size() > 1) {
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

