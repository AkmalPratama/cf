#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int cnt0 = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == '0') {
			cnt0++;
		}
	}
	if (cnt0 == 1 || (cnt0 % 2 == 0)) {
		cout << "BOB\n";
	} else {
		cout << "ALICE\n";
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

