#include <bits/stdc++.h>
using namespace std;

void solve() {
	string s;
	cin >> s;
	int len = s.length();
	int leftN = s[0] - '0';
	cout << leftN + ((len - 1) * 9) << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

