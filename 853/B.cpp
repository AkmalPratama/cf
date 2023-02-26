#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int l = -1;
	int r = -1;
	for (int i = 0; i < n/2; i++) {
		if (s[i] != s[n-1-i]) {
			if (l == -1) {
				l = i;
			} else {
				if (r != -1) {
					cout << "NO\n";
					return;
				}
			}
		}
		if (s[i] == s[n-1-i] && l != -1) {
			r = i;
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

