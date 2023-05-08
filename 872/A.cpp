#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	string s;
	cin >> s;
	bool b = true;
	for (int i = 0; i < s.length()-1; i++) {
		if (s[i] != s[i+1]) {
			b = false;
			cout << s.length() - 1 << endl;
			return;
		}
	}
	cout << -1 << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

