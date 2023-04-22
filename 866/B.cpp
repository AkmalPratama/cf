#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	string s;
	cin >> s;
	bool same = true;
	ll n = 1;
	for (int i = 0; i < s.length()-1; i++) {
		if (s[i] != s[i+1]) {
			same = false;
			break;
		}
		n++;
	}
	if (same) {
		if (s[0] == '1') {
			cout << n * n << endl;
		} else {
			cout << 0 << endl;
		}
		return;
	}
	s += s;
	ll cnt = 0, l = -1, r = -1;
	bool b = false;
	for (int i = 0; i < s.length()-1; i++) {
		if (s[i] == '1' && !b) {
			b = true;
			l = i;
		}
		if (s[i] == '0' && b) {
			r = i;
			cnt = max(cnt, r - l);
			b = false;
		}
	}
	cout << ((cnt + 1) / 2) * ((cnt + 2) / 2) << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

