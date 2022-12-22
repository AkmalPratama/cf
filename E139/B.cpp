#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	for (int i = 0; i < n-2; i++) {
		size_t found = s.substr(i+2).find(s.substr(i, 2));
		if (found != string::npos) {
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

