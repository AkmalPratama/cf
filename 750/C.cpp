#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll p(ll x) {
	ll z = 1;
	for (ll i = 1; i <= x; i++) {
		z = z * 2;
	}
	return z;
}

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	set<char> st;
	for (char c: s) {
		st.insert(c);
	}
	int ans = n + 1;
	for (char c: st) {
		int l = 0;
		int r = n - 1;
		int cnt = 0;
		while (l <= r) {
			if (s[l] == s[r]) {
				l++;
				r--;
			} else if (s[l] == c) {
				l++;
				cnt++;
			} else if (s[r] == c) {
				r--;
				cnt++;
			} else {
				cnt = n + 1;
				break;
			}
		}
		ans = min(ans, cnt);
	}
	if (ans == n + 1) {
		cout << -1 << endl;
	} else {
		cout << ans << endl;
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
