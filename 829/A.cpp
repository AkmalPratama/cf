#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	deque<char> d;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'Q') {
			d.push_back('Q');
		} else {
			if (!d.empty()) {
				d.pop_front();
			}
		}
	}
	if (!d.empty()) {
		cout << "NO\n";
	} else {
		cout << "YES\n";
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

