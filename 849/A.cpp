#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	string s = "codeforces";
	set<char> st;
	for (char c: s) {
		if (st.count(c) == 0) {
			st.insert(c);
		}
	}
	char x;
	cin >> x;
	if (st.count(x) > 0) {
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

