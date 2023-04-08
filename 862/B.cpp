#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	string s, t;
	cin >> s;
	if (n == 1) {
		cout << s << endl;
		return;
	}
	char c = s[1];
	int idx = 1;
	for (int i = 1; i < n; i++) {
		if (s[i] <= c) {
			c = s[i];
			idx = i;
		}
	}
	if (s[0] < c) {
		cout << s << endl;
		return;
	}
	cout << c;
	for (int i = 0; i < n; i++) {
		if (i != idx) {
			cout << s[i];
		}
	}
	cout << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

