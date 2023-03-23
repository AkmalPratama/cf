#include <bits/stdc++.h>
using namespace std;

void solve() {
	string s;
	cin >> s;
	if (s[0] == s[s.length()-1]) {
		cout << s << endl;
	} else {
		s[0] = s[0] == 'a' ? 'b' : 'a';
		cout << s << endl;
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
