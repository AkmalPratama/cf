#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int n1, n0;
	n1 = 0;
	n0 = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == '1') {
			n1++;
		} else {
			n0++;
		}
	}
	string s2 = s;
	sort(s2.begin(), s2.end());
	if (n1 == n || n0 == n || s == s2) {
		cout << 0 << endl;
		return;
	}
	int ans = 0;
	for (int i = 0; i < n-1; i++) {
		if (s[i] != s[i+1]) {
			ans++;
		}
	}
	if (s[0] == '0') {
		ans--;
	}
	cout << ans << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

